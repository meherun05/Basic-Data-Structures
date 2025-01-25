 #include <bits/stdc++.h>

using namespace std;

int main(){
    map<string,int> m;
    m["meherun"] = 10;
    m["fima"] = 40;
    m["mouri"] = 50;

    // for(auto it = m.begin();it != m.end(); it ++){
    //     cout << it->first << " " << it->second << endl;
    // }

    if(m.count("rifa")){
        cout << " ache";
    }else{
        cout << "nai";
    }

    return 0;
}