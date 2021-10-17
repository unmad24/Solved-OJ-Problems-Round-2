#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll MAX_N = 100;
const ll MAX_COORD = 100;

void solve() {
    int n,m,i,j,x;
    cin>>n>>m;
    bool arr[MAX_COORD+1]= {0};
    int cnt=0;

    for(i=0; i<n; i++) {
        cin>>x;
        arr[x]=true;
    }
    for(i=0; i<m; i++) {
        cin>>x;
        if(arr[x]) cnt++;
    }
    cout<<cnt<<endl;

}

int main() {
    ll t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;

}
