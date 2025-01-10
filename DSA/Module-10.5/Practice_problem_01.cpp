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

void insert_at_tail(Node* &head, Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " " ;
        temp = temp->next;
    }
}

bool same_or_not(Node* &head, Node* &head1){
   Node* temp = head;
   Node* temp1 = head1;
   while(temp != NULL && temp1 != NULL){
    if(temp->val != temp1->val){
        return false;
    }
    temp = temp->next;
    temp1 = temp1->next;
   }
   return (temp == NULL && temp1 == NULL);

    
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    Node* head1 = NULL;
    Node* tail1 = NULL;
    
    int val;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    int val1;
    while (true)
    {
        cin >> val1;
        if(val1 == -1){
            break;
        }
        insert_at_tail(head1,tail1,val1);
    }
    bool flag = same_or_not(head,head1);
    if(flag == true){
        cout << "YES";
    }else{

        cout << "NO";    
    }


    return 0;
}