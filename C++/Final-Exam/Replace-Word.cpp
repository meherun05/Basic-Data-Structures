 #include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    string s,x;
    for (int i = 0; i < t; i++)
    {
        cin >> s >> x;
         size_t pos = s.find(x);
        while (pos != string::npos) {
            s.replace(pos, x.length(), "#");  // Replace the found substring with "#"
            pos = s.find(x, pos + 1);  // Find the next occurrence after the current position
        }
    }


    return 0;
}