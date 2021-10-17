#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,i;

    cin>>q;
    for(i=1; i<=q; i++)
    {
        cin>>n;
        if(n==2)
            cout<<"2"<<endl;
        if(n!=2 && n%2==0)
            cout<<"0"<<endl;
        if(n%2!=0)
            cout<<"1"<<endl;
    }
    return 0;
}
