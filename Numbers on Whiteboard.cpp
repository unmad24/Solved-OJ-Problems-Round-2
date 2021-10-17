#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n,t,i;
    cin>>t;
    while(t--) {
        cin>>n;
        if(n==2) {
            cout<<2<<endl;
            cout<<2<<" "<<1<<endl;
        } else if(n==3) {
            cout<<2<<endl;
            cout<<3<<" "<<2<<endl;
            cout<<3<<" "<<1<<endl;
        } else {

            ll tt = n;
            cout<<2<<endl;

            for(i=1; i<tt; i++) {
                if(i==1) {
                    cout<<n<<" "<<n-2<<endl;
                    n = n-1;
                } else if(i==2) {
                    cout<<n<<" "<<n<<endl;
                } else {
                    cout<<n<<" "<<n-2<<endl;
                    n--;
                }
            }
        }
    }

    return 0;

}
