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

void levelNodes(Node* root,int x){
    queue<pair<Node*,int>> q;
    vector<Node*> v;
    if(root){
        q.push({root,0});
    }

    while(!q.empty()){
        pair<Node*,int> p = q.front();
        q.pop();

        Node* node = p.first;
        int level = p.second;

        if(level == x){
            v.push_back(node);
        }


        if(node->left){
            q.push({node->left,level+1});
        }
        if(node->right){
            q.push({node->right,level+1});
        }
    }
    if(v.empty()){
        cout << "Invalid";
        return;
    }else{
        for (Node* node : v) {
            cout << node->val << " ";
        }
    }
}

int main(){
    Node* root = input_tree();
    int x;
    cin >> x;
    levelNodes(root,x);
     

    return 0;
}