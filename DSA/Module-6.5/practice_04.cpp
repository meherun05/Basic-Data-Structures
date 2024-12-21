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

void printing_linked_list_mid(Node* head,int count){
    Node* temp = head;
    int mid;
    if(count % 2 != 0){
        mid = (count + 1) / 2;
        
    }else{
        mid = count / 2;
    }
    cout << count << endl;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val,count=0;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        count++;
        insert_at_tail(head,tail,val);
    }
    printing_linked_list_mid(head,count);
    
    return 0;
}