#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
   unsigned int q,n,a,i,j,res;
   double sum=0;
    cin>>q;
    for(i=1; i<=q; i++)
    {
        sum=0;
        cin>>n;
        for(j=1; j<=n; j++)
        {
            cin>>a;
            sum=sum+a;
        }

        res=ceil(sum/n);


        cout<<res<<endl;
    }

    return 0;
}
