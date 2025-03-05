#include <bits/stdc++.h>
using namespace std;

pair<int, int> findMaxWater(vector<long long>& h) {
    int left = 0;
    int right = h.size() - 1;
    long long maxWater = 0; 
    pair<int, int> result; 
    
    while (left < right) {
        long long temp = min(h[left], h[right]);
        
        if (temp > maxWater) {
            maxWater = temp;
            result = {left, right};
        }
        
        if (h[left] < h[right]) {
            left++;
        } else {
            right--;
        }
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
        
        pair<int, int> result = findMaxWater(h);
        cout << result.first << " " << result.second << endl;
    }
    
    return 0;
}