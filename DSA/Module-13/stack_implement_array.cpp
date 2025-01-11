 #include <bits/stdc++.h>

using namespace std;
class myStack{
    vector<int> v;
    public:
        void push(int val){
            v.push_back(val);
        }

        void pop(){
            v.pop_back();
        }
        int top(){
            return v.back();
        }
        
        int size(){
            return v.size();
        }

        bool empty(){
            return v.empty();
        }
};

int main(){
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);

    st.pop();

    int s = st.size();

    cout << s;

    return 0;
}