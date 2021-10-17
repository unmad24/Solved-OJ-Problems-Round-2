#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t,n,c0,c1,h,i,j,nofz,nof1,l,r,q,f;
    string s;
    cin>>t;
    while(t--) {
        cin>>n>>c0>>c1>>h;
        cin>>s;
        //l=s.size();
        nofz=0;
        nof1=0;
        for(i=0; i<n; i++) {
            if(s[i]=='0') nofz++;
            else nof1++;
        }
        if(c0==c1) cout<<(nofz*c0)+(nof1*c1)<<endl;
        else if(c0<c1) {
            l=nof1*h;
            r=l+(n*c0);
            f=(nofz*c0)+(nof1*c1);
            cout<<min(r,f)<<endl;
        } else if(c0>c1) {
            l=nofz*h;
            r=l+(n*c1);
            f=(nofz*c0)+(nof1*c1);
            cout<<min(r,f)<<endl;
        }

    }

    return 0;

}
