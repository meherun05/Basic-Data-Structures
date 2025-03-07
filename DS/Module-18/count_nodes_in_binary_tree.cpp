 #include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        // node ber kora
        Node* p = q.front();
        q.pop();
        // node niye kaj
        int l,r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // children a push kora
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }
    return root;
}

void levelOrder(Node* root){
    queue<Node*>  q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}

int count_nodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l+r+1;
}

int main(){
    Node* root = input_tree();
    int sum = count_nodes(root);

    cout << sum;

    return 0;
}