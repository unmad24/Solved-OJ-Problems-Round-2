#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll t,n,m,i,j,arr[1001],arr1[1001];
     cin>>t;
     while(t--){
        cin>>n>>m;
        for(i=0;i<n;i++) cin>>arr[i];
        for(i=0;i<m;i++) cin>>arr1[i];

        sort(arr,arr+n);
        sort(arr1,arr1+m);
        ll cnt=0;

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(arr[i]==arr1[j]){
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<endl;


     }

     return 0;

}
