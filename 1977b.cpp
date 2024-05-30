#include<bits/stdc++.h>
using namespace std;
string reverse(string &a)
{
    int n=a.size();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(a[i],a[j]);
    }
    return a;
}
string binary(int a)
{
    string ans="";
    while(a!=0)
    {
    if(a%2==1)
    {
        ans+='1';
        a/=2;

    }
    else{
        ans+='0';
        a/=2;
    }
    }
    return reverse(ans);

}
int main(){
int t;
cin>>t;
while(t--){
     int a;
     cin>>a;
     string b=binary(a);
     cout<<b;

}
return 0;
}