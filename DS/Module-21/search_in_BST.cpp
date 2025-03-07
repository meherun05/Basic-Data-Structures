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

bool searchInTree(Node* root,int x){
    if(root == NULL) return false;
    if(root->val == x) return true;

    if(root->val > x)
        return searchInTree(root->left,x);
    else
        return searchInTree(root->right,x);
}

int main(){
    Node* root = input_tree();
    int val;
    cin >> val;

    if(searchInTree(root,val)){
        cout << "FOUND\n";
    }else{
        cout << "NOT FOUND \n";
    }

    return 0;
}