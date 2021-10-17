#include<bits/stdc++.h>
using namespace std;
int main(){


    int n,a,rem;
    cin>>n;

    rem=n%4;

    if(rem==0) cout<<"1 A"<<endl;
    if(rem==1) cout<<"0 A"<<endl;
    if(rem==2) cout<<"1 B"<<endl;
    if(rem==3) cout<<"2 A"<<endl;

return 0;}
