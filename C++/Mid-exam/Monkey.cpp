 #include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[100005];
    int f[26] = {0};
    while(cin.getline(s,100005)){
        fill(f,f+26,0);
    int len = strlen(s);
     for (int i = 0; i < len; i++)
        {
            char c = s[i];
            if((c >= 'a') && (c <= 'z'))
            {
                int index = (int) c - 'a';
                f[index]++;
            }
        }
    for (int i = 0; i < 26; i++)
        {
            if(f[i] > 0){

            for (int j = 0; j < f[i]; j++)
            {
                cout << (char)(i + 'a');
            } 
            }
        }
        cout << endl;
    }
    return 0;
}