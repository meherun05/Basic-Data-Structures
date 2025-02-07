 #include <bits/stdc++.h>

using namespace std;

void getMax(string s){
    map<string,int> m;
    stringstream ss(s);
    string word;
    int maxCount = INT_MIN;
    string maxWord;

    while(ss >> word){
        m[word] ++;
        if(m[word] > maxCount){
            
            maxCount = m[word];
            maxWord = word;
        }
    }
      cout << maxWord << " " << maxCount  << endl;
    
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s;
    while(n--){
        getline(cin,s);
        getMax(s);
    }

    return 0;
}