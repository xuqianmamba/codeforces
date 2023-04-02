#include <bits/stdc++.h>

using namespace std;
using i64 =long long;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T,q,a,b,n,type;
    cin>>T;
    while(T--){
        i64 high=1E18,low=1;
        cin>>q;
        while(q--){
            cin>>type;
            if(type==1){
                cin>>a>>b>>n;
                i64 mx,mn;
                if(n==1){
                    mn=1;
                    mx=a;
                }
                else{
                    mn=1LL*a*(n-1)-1LL*b*(n-2)+1;
                    mx=1LL*a*(n)-1LL*b*(n-1);
                }
                if(mx>=low&&mn<=high){
                    low=max(low,mn);
                    high=min(high,mx);
                    cout<<1<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            else{
                cin>>a>>b;
                i64 t1=low<=a ? 1LL:(low-b+a-b-1)/(a-b);
                i64 t2 = high <= a ? 1LL : (high - b + a - b - 1) / (a - b);
            
                if(t1==t2){
                    cout<<t1<<" ";
                }
                else cout<<-1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}