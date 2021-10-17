#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll i,n,arr[10001];
     string s;
    vector<long long>v;
     cin>>n;
     cin>>s;
     ll h=0;
     for(i=0;i<n;i++){
        if(s[i]=='U') {
            h++;
           v.push_back(h);
        }
        else {
            h--;
            v.push_back(h);
        }
     }
     ll cnt=0;
     for(i=0;i<n-1;i++){
        if(v[i]==-1 and v[i+1]==0) cnt++;

     }
     cout<<cnt<<endl;

     return 0;

}






