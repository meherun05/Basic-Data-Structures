 #include <bits/stdc++.h>

using namespace std;

void insert_head(vector<int>&v,int x){
    v.push_back(x);
    int current_idx = v.size() - 1;
    while(current_idx != 0){
        int parent_idx = (current_idx - 1) /2;
        if(v[parent_idx] > v[current_idx]){
            swap(v[parent_idx],v[current_idx]);
        }else{
            break;
        }
        current_idx = parent_idx;
    }
}

void print_heap(vector<int> v){
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;
}

void deleteFromMaxHeap(vector<int> &v){
    cout << "deleted val -> " << v[0] << endl;
   v[0] = v.back();
   v.pop_back();
   int current_idx = 0;

   while(true){
        int left_idx = (current_idx * 2) + 1;
        int right_idx = (current_idx * 2) + 2;
        int left_val = INT_MAX, right_val = INT_MAX;

        if(left_idx < v.size()){
            left_val = v[left_idx];
        }
        if( right_idx < v.size()){
            right_val = v[right_idx];
        }

        if(left_val <= right_val && left_val < v[current_idx]){
            swap(v[left_idx],v[current_idx]);
            current_idx = left_idx;
        }
        else if(right_val < left_val && right_val < v[current_idx]){
            swap(v[right_idx],v[current_idx]);
            current_idx = right_idx;
        }else{
            break;
        }
   }

}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
       insert_head(v,x);
    }
    deleteFromMaxHeap(v);
    print_heap(v);
    deleteFromMaxHeap(v);
    print_heap(v);
    

    return 0;
}