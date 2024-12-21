 #include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    long long val;
    Node* next;
    Node(long long val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_linked_list(Node* &head,Node* &tail, long long val,int n){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    if(n == 0){
        newNode->next = head;
        head =  newNode;
    }else if(n == 1){
        tail->next = newNode;
        tail = newNode;
    }
    else if (n == 2) {
        if (head == NULL) return; 
        
        if (val == 0) { 
            Node* temp = head;
            head = head->next;
            delete temp;
            if (head == NULL) {
                tail = NULL;
            }
            return;
        }
        
        Node* temp = head;
        for (int i = 0; temp != NULL && i < val - 1; i++) {
            temp = temp->next;
        }

        if (temp != NULL && temp->next != NULL) {
            Node* deleteNode = temp->next;
            temp->next = deleteNode->next;
            if (temp->next == NULL) { 
                tail = temp;
            }
            delete deleteNode;
        }
    }
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
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long val;
        int n;
        cin >> n >> val;
        insert_linked_list(head,tail,val,n);
        printing_linked_list(head);
        cout << endl;
    }
    
    return 0;
}