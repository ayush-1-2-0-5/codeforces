#include<bits/stdc++.h>
using namespace std;

bool isNonDecreasing(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

bool canMakeNonDecreasing(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        rotate(arr.begin(), arr.begin() + 1, arr.end()); 
        if (isNonDecreasing(arr))
            return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (canMakeNonDecreasing(arr))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
