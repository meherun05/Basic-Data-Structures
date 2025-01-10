 #include <bits/stdc++.h>

using namespace std;

class myQueue{
    public:
    list<int> l;

    void push(int val){
        l.push_back(val);
    }

    void pop(){
        l.pop_front();
    }

    int front(){
        return l.front();
    }
    int back(){
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }

};

int main(){
    myQueue mq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mq.push(x);

    }

    while(!mq.empty()){
        cout << mq.front() << " ";
        mq.pop();
    }
    

    return 0;
}