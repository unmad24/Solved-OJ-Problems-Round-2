#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,sum,result=0;
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
   /* cin>>a2;
    cin>>a3;
    cin>>a4;
*/

    if(((a1+a2)==(a3+a4))==1)
        cout<<"YES"<<endl;
    else if(((a1+a3)==(a2+a4))==1)
        cout<<"YES"<<endl;
    else if(((a1+a4)==(a2+a3))==1)
        cout<<"YES"<<endl;
    //if(((a2+a3)==(a1+a4))==0) cout<<"YES"<<endl;
    else if(((a2+a4)==(a1+a3))==1)
        cout<<"YES"<<endl;
    //if(((a3+a4)==(a1+a4))==0) cout<<"YES"<<endl;

    else if(((a1+a2+a3)==a4)==1)
        cout<<"YES"<<endl;
    else if(((a1+a2+a4)==a3)==1)
        cout<<"YES"<<endl;
    else if(((a2+a3+a4)==a1)==1)
        cout<<"YES"<<endl;
    else if(((a1+a3+a4)==a2)==1)
        cout<<"YES"<<endl;
    else if(((a1+a2+a3)==a4)==1)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;

    return 0;
}
