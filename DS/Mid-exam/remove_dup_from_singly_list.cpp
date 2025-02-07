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

void printing_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void sorted_linked_list(Node* head){
  Node* currentNode = head;
   while(currentNode != NULL){
        Node* nextNode = currentNode->next;
        while(nextNode != NULL){
            if(currentNode->val > nextNode->val){
            swap(currentNode->val, nextNode->val);
        }
            nextNode = nextNode->next;
        }
        currentNode = currentNode->next;
    }
        // for (Node* i = head; i != NULL; i = i->next) {
        //         for (Node* j = i->next; j != NULL; j = j->next) {
        //             if (i->val > j->val) {
        //                 swap(i->val, j->val);
        //             }
        //         }
        // }
}

void remove_dup_linked_list(Node* &head){
    Node* temp = head;
    sorted_linked_list(temp);
   
    while(temp->next != NULL){
        if(temp->val == temp->next->val){
            temp->next = temp->next->next;
        }else{
        temp = temp->next;
        }
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
    remove_dup_linked_list(head);
    printing_linked_list(head);
    
    return 0;
}