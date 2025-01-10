 #include <bits/stdc++.h>

using namespace std;

int main(){
    list<string> webAddresses;
    string address;

    while(cin >> address && address != "end"){
        webAddresses.push_back(address);
    }
    auto current = webAddresses.begin();

    int q;
    cin >> q;
    cin.ignore();

    string command;
    while(q--){
        getline(cin,command);

        if(command.find("visit") == 0){
            string targetedValue = command.substr(6);
            auto it = find(webAddresses.begin(),webAddresses.end(),targetedValue);
            if(it != webAddresses.end()){
                current =  it;
                cout << *current << endl;
            }else{
            cout << "Not Available" << endl;
            }
        }else if(command == "next"){
            auto nextValue = next(current);
            if(nextValue != webAddresses.end()){
                current = nextValue;
                cout << *current << endl;
            }else{
                cout << "Not Available" << endl;
            }
        }else if(command == "prev"){
            auto prevValue = prev(current);
            if(current != webAddresses.begin()){
                current = prevValue;
                cout << *current << endl;
            }else{
                cout << "Not Available" << endl;
            }
        }
    }

    // for(string val : webAddresses){
    //     cout << val << " ";
    // }
    return 0;
}