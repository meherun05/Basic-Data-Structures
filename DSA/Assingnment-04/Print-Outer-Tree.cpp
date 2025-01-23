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

vector<int> print_left_outer_tree(Node* root){
    vector<int> result;
    queue<pair<Node*, int>> q;
    if(root) q.push({root,0});
    else return result;
    bool f[3005] = {false};

    // while(!q.empty()){
    //     pair<Node*, int> p = q.front();
    //     q.pop();
    //     Node* parent = p.first;
    //     int level = p.second;
    //     if(f[level] == false && parent->left){
    //         result.push_back(parent->val);
    //         f[level] = true;
    //     }

    //     if(parent->left) q.push({parent->left,level+1});
    //     if(parent->right) q.push({parent->right,level+1});
    // }
    if(q.empty()) return result;

    pair<Node*, int> p = q.front();
        q.pop();
        Node* parent = p.first;
        int level = p.second;
        if(f[level] == false ){
            result.push_back(parent->left->val);
            f[level] = true;
        }
    print_left_outer_tree(root->left);
    return result;
}
vector<int> print_right_outer_tree(Node* root){
    vector<int> result;
    queue<pair<Node*, int>> q;
    if(root) q.push({root,0});
    else return result;
    bool f[3005] = {false};

    // while(!q.empty()){
    //     pair<Node*, int> p = q.front();
    //     q.pop();
    //     Node* parent = p.first;
    //     int level = p.second;
    //     if(f[level] == false && parent->left){
    //         result.push_back(parent->val);
    //         f[level] = true;
    //     }

    //     if(parent->left) q.push({parent->left,level+1});
    //     if(parent->right) q.push({parent->right,level+1});
    // }
    if(q.empty()) return result;

    pair<Node*, int> p = q.front();
        q.pop();
        Node* parent = p.first;
        int level = p.second;
        if(f[level] == false ){
            result.push_back(parent->val);
            f[level] = true;
        }
    print_right_outer_tree(root->right);
    return result;
}

int main(){
    Node* root = input_tree();
    vector<int> l = print_left_outer_tree(root);
    vector<int> r = print_right_outer_tree(root);
    for(int v : l){
        cout << v << " ";
    }
    cout << endl;
    for(int v : r){
        cout << v << " ";
    }

    return 0;
}