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
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = tail->next;
}

void deleted_at_any_pos(Node* &head,Node* &tail,int idx){
    Node* temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    Node* deletedNode = temp->next;
    temp->next = deletedNode->next;
    delete deletedNode;
    tail = temp;
    
}

void printing_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    deleted_at_any_pos(head,tail,2);
    printing_linked_list(head);

    return 0;
}