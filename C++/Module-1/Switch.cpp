#include<iostream>

using namespace std;

int main(){
    int days;
    cin >> days;
    switch(days){
        case 1 : 
            cout << "Staturday";
            break;
        case 2 : 
        cout << "Sunday";
        break;
        default :
            cout << "friday";
        break;
    }
    return 0;
}