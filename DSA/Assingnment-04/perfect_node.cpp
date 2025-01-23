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

bool perfect_node(Node* root){
    if(root == NULL){
        return false;
    }
    bool flag = false;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        if(!f->left && !f->right){
            flag = true;
        }else{
            if(!f->left || !f->right){
                return false;
            }
        }


        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return flag;
    
}

int main(){
    Node* root = input_tree();
     if(perfect_node(root)){
        cout << "YES";
     }else{
        cout << "NO";
     }

    return 0;
}