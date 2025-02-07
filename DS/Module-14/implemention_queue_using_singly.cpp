 #include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
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
        newNode->next = NULL;
        tail = newNode;
    }

    void pop(){
        sz--;
        Node* deletedNode = head;
        head = head->next;
        delete deletedNode;
        if(head == NULL){
            tail = NULL;
        }
    }

    int front(){
        return head->val;
    }
    int back(){
        return tail->val;
    }
    bool empty(){
        return head == NULL;
    }

};

int main(){
    myQueue mq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mq.push(x);

    }

    while(!mq.empty()){
        cout << mq.front() << " ";
        mq.pop();
    }
    

    return 0;
}