#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t,n,i,j,m,result;

    cin>>t;
    while(t--) {
        cin>>n;
        vector<int>cnt(n+1);
        vector<int>index(n+1);
        for(i=0; i<n; ++i) {
            cin>>m;
            ++cnt[m];
            index[m]=i+1;
        }
        result=-1
        for(i=0; i<=n; ++i) {
            if(cnt[i]==1) {
                result=index[i];
                break;
            }
        }
        cout<<result<<endl;
    }

    return 0;

}
