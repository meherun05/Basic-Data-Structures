#include <bits/stdc++.h>

using namespace std;

void print_linked_list(const list<int>& l) {
    cout << "L -> ";
    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;

    list<int> reversed_list = l;
    reversed_list.reverse();
    cout << "R -> ";
    for (int val : reversed_list) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    list<int> l;
    int q;
    cin >> q;
    while (q--) {
        int x, v;
        cin >> x >> v;

        if (x == 0) {
            l.push_front(v);
        } else if (x == 1) {
            l.push_back(v);
        } else if (x == 2) {
            if (v >= 0 && v < l.size()) {
                l.erase(next(l.begin(), v));
            }
        }

        print_linked_list(l);
    }

    return 0;
}
