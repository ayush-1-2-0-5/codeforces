#include<bits/stdc++.h>
using namespace std;

int mod(int a) {
    return (a > 0) ? a : -a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n, 0);
        vector<long long> b(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n + 1; ++i) {
            cin >> b[i];
        }
       long long ans=0;
    long long d=LLONG_MAX;
       for(int i=0;i<n;++i)
       {
        ans+= abs(a[i]-b[i]);
        if(max(a[i],b[i])>=b[n]&&min(a[i],b[i])<=b[n]) d=0;
            else
            {
                d=min(d,abs(a[i]-b[n]));
                d=min(d,abs(b[i]-b[n]));
            }
       }   
       d+=1;
       cout<<ans+d<<endl;
      
    }
    return 0;
}
