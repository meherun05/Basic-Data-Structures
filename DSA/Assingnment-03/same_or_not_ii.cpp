 #include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

    void push(int val){
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop(){
        sz--;
        Node* deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if(tail == NULL){
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top(){
        return tail->val;
    }

    bool empty(){
        return sz == 0;
    }
};
class myQueue{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;
    
    void push(int val){
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = NULL;
        tail = newNode;
    }
    
    void pop(){
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL){
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }
    int front(){
        return head->val;
    }

    bool empty(){
        return sz == 0;
    }
};

int main(){
    int n,m;
    cin >> n >> m;
    myStack st;
    myQueue q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    int flag = 1;
    
    while(!st.empty() && !q.empty()){
        if(n != m){
            flag = 0;
            break;
        }
        if(st.top() != q.front()){
            flag = 0;
            break;
        }
        q.pop();
        st.pop();
    }

    if(flag == 1){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}