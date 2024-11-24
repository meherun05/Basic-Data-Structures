 #include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    char c;
    int countA = 0, countD = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if(c == 'A'){
            countA++;
        }
        if(c == 'D'){
            countD++;
        }
    }
        if( countA > countD){
            cout << "Anton";
        }else if (countD > countA){
            cout << "Danik";
        }else{
            cout << "Friendship";
        }
    

    return 0;
}