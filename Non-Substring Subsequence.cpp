#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     ll t,n,i,l,r,q,j,k,cnt,m;
     string s;
     string s1;
     cin>>t;
     while(t--){
        cin>>n>>q;
        cin>>s;
        while(q--){
            cin>>l>>r;
            for(i=l-1,j=0;i<r,j<(r-l)+1;i++,j++){
                s1[j]=s[i];
                //cout<<s1[j];
            }
            cnt=0;
            m=0;
            for(i=0;i<j;i++){
                for(k=m;k<n;k++){
                    if(s1[i]==s[k]){
                        cnt++;
                        m=k+1;
                        break;
                    }
                }
            }
            if(cnt==(r-l)+1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

     }

     return 0;

}
