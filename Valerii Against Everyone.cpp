#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll t,n,i,j;
     ll a[100001],b[100001];

     cin>>t;

     while(t--)
     {
         cin>>n;
         for(i=0;i<n;i++){
            cin>>b[i];
            if(b[i]==0) a[i]=1;
            else if (b[i]==1) a[i]=2;
            else{
                    a[i]=1;
                for(j=1;j<=b[i];j++){
                    a[i]=a[i]*2;
                }
            }
         }



     }

     return 0;

}
