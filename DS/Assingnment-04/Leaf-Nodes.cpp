 #include <bits/stdc++.h>
using namespace std;

vector<int> v;

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
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        Node* myLeft, * myRight;
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

void leafNode(Node* root, vector<int>& v){
    if(root == NULL){
        return;
    }
    
    if(root->left == NULL && root->right == NULL){
        v.push_back(root->val);
    }

    leafNode(root->left,v);
    leafNode(root->right,v);
    
}

int main(){
    Node* root = input_tree();
    leafNode(root,v);

    sort(v.begin(), v.end(), greater<int>());

    for (int val : v) {
        cout << val << " ";
    }
    return 0;
}