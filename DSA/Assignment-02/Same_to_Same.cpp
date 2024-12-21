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

void same_same(Node* &head1, Node* &head2){
    while(head1 != NULL && head2 != NULL){
        if(head1->val != head2->val){
            cout << "NO";
            return;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if(head1 == NULL && head2 == NULL){
        cout << "YES";
    }else{
        cout << "NO";
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    Node* head2 = NULL;
    Node* tail2= NULL;

    int val1;
    while (true)
    {
        cin >> val1;
        if(val1 == -1){
            break;
        }
        insert_at_tail(head,tail,val1);
    }
    int val2;
    while (true)
    {
        cin >> val2;
        if(val2 == -1){
            break;
        }
        insert_at_tail(head2,tail2,val2);
    }
    same_same(head,head2);
    
    return 0;
}