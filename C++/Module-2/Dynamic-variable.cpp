 #include <bits/stdc++.h>

using namespace std;
int *x;
void fun(){
    // int p = 10;
    // x = &p;
    int *p = new int;
    *p = 10;
    x = p;
    cout << "fun -> " << *x << endl;
    return;
}

int main(){
    // int *p = new int;
    fun();
    // *p = 10;
    // cout << *p;
    cout << "fun -> " << *x << endl;

    return 0;
}