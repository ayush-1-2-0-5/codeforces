#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s = "";
        
        for (int i = 0; i < n; ++i) {
            char ch;
            cin >> ch;
            s += ch;
        }

        bool flag = true;
        int prevascii = s[0] - '0';
        
        for (int i = 1; i < n; ++i) {
            int ascii = s[i] - '0';
            if (ascii < prevascii) {
                flag = false;
                break;
            } else {
                prevascii = ascii;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
