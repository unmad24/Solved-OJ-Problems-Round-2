#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll tt,n,x,arr[10001],arr1[10001],i,j;

     cin>>tt;
     while(tt--){
        cin>>n>>x;
        for(i=0;i<n;i++) cin>>arr[i];
        for(i=0;i<n;i++) cin>>arr1[i];

        sort(arr,arr+n);
        sort(arr1,arr1+n,greater<int>());
        ll cnt=0;

        for(i=0;i<n;i++){
            if(arr[i]+arr1[i]>x) {cout<<"NO"<<endl;break;}
            else cnt++;
        }
        if(cnt==n) cout<<"YES"<<endl;

     }

     return 0;

}
