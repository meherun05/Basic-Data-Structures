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

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        Node* myLeft,*myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}

void insert_in_tree(Node* root,int val){
    if(root == NULL) root = new Node(val);
    if(root->val > val){
        if(root->left == NULL){
            root->left = new Node(val);
        }else{
            insert_in_tree(root->left,val);
        }
    }else{
        if(root->right == NULL){
            root->right = new Node(val);
        }else{
            insert_in_tree(root->right,val);
        }
    }
}

void levelOrder(Node* root){
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node* f = q.front();
        q.pop();
        // 2. oi node niye kah kora
        cout << f->val << " ";
        // 3. children a push kora
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
    
}

int main(){
    Node* root = input_tree();
    int val;
    cin >> val;
    insert_in_tree(root,val);
    levelOrder(root);
    return 0;
}