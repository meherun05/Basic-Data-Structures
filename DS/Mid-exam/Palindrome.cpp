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

bool isPallindrome(Node* head,Node* tail){
    Node* tempHead = head;
    Node* tempTail = tail;
    while(tempHead != NULL && tempTail != NULL){
        if(tempHead->val != tempTail->val){
            return false;
        }
        tempHead = tempHead->next;
        tempTail = tempTail->prev;
    }
    return true;
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
    bool flag = isPallindrome(head,tail);
    
    if(flag == true){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}