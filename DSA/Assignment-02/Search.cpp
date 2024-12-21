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

void insert_at_tail(Node* &head,Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = tail->next;
}

void search_in_linked_list(Node* head,int x){
    
    Node* temp = head;
    int i = 0;
    while(temp != NULL){
        if(temp->val == x){
            cout << i << endl;
            return;
        }
        temp = temp->next;
        i++;
    }
    cout << -1 << endl;
}

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Node* head = NULL;
        Node* tail = NULL;
        int val,x;

        while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    cin >> x;
    search_in_linked_list(head,x);
    }
    
    return 0;
}