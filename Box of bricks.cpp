#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100],i,sum,avg,res,subsum;

    for(int j=1;; j++)
    {
        sum=0;
        avg=0;
        subsum=0;
        res=0;
        cin>>n;
        if(n==0)
            break;
        else
        {
            for(i=0; i<n; i++)
            {
                cin>>arr[i];
                sum=sum+arr[i];
            }
            avg=sum/n;
            for(i=0; i<n; i++)
            {
                subsum=subsum+abs(avg-arr[i]);
            }
            res=subsum/2;

            cout<<"Set #"<<j<<endl;
            cout<<"The minimum number of moves is "<<res<<"."<<endl<<endl;

        }
    }

    return 0;
}
