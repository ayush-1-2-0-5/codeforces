#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
vector<int> arr(n,0);
bool ans;
for(int i=0;i<n;++i)
{
 cin>> arr[i];
}

sort(arr.begin(),arr.end());

int a=arr[0];

vector<int> temp;

for(auto it: arr)
{
    if(it%a)
    temp.push_back(it);
}
if(temp.size())
{
int b=temp[0];
for(auto it: temp)
{
    if(it%b)
    {
    ans=true;
    }
    else 
    {
        ans=false;
        break;
    }
}
}
else
{
ans=true;
}
if(ans)
cout<<"YES";
else
cout<<"NO";

}
return 0;
}