#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_linked_list_forward(Node* head) {
    cout << "L -> ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_linked_list_backward(Node* tail) {
    cout << "R -> ";
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_any_pos(Node* &head, Node* &tail, int idx, int val) {
    Node* newNode = new Node(val);

    if (idx == 0) {
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        if (tail == NULL) {
            tail = newNode;
        }
        print_linked_list_forward(head);
        print_linked_list_backward(tail);
        return;
    }

    Node* temp = head;
   int count = 0;
   while(temp != NULL && count < idx-1) {
    temp = temp->next;
    count++;
   }

    if (temp == NULL) {
        cout << "Invalid" << endl;
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL) {
        temp->next->prev = newNode;
    } else {
        tail = newNode;
    }

    temp->next = newNode;
    print_linked_list_forward(head);
    print_linked_list_backward(tail);
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int n;
    cin >> n;
    while(n--) {
        int idx, val;
        cin >> idx >> val;
        insert_at_any_pos(head, tail, idx, val);
    }

    return 0;
}
