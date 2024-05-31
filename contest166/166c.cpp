#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int totalCandidates = n + m + 1;
        
        vector<int> a(totalCandidates);
        vector<int> b(totalCandidates);
        
        for (int i = 0; i < totalCandidates; ++i) {
            cin >> a[i];
        }
        
        for (int i = 0; i < totalCandidates; ++i) {
            cin >> b[i];
        }
        
        vector<pair<int, int>> candidates(totalCandidates);
        for (int i = 0; i < totalCandidates; ++i) {
            candidates[i] = {a[i], b[i]};
        }
        
        sort(candidates.begin(), candidates.end(), [](const pair<int, int>& lhs, const pair<int, int>& rhs) {
            return lhs.first - lhs.second > rhs.first - rhs.second;
        });
        
        vector<long long> prefixP(totalCandidates + 1, 0);
        vector<long long> prefixT(totalCandidates + 1, 0);
        
        for (int i = 0; i < totalCandidates; ++i) {
            prefixP[i + 1] = prefixP[i] + candidates[i].first;
            prefixT[i + 1] = prefixT[i] + candidates[i].second;
        }
        
        vector<long long> result(totalCandidates, 0);
        for (int i = 0; i < totalCandidates; ++i) {
            if (i < n) {
                result[candidates[i].second] = prefixP[n] + prefixT[totalCandidates] - prefixT[n + 1];
            } else {
                result[candidates[i].second] = prefixP[n + 1] + prefixT[totalCandidates - 1] - prefixT[n + 1];
            }
        }
        
        for (int i = 0; i < totalCandidates; ++i) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
