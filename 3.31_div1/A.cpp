#include <bits/stdc++.h>
using namespace std;
int main(){
    int T,n,a[105];
    bool flag;
    cin>>T;
    for(int i=1;i<=T;i++){
        cin>>n;
        flag=false;
        for(int j=1;j<=n;j++){
            cin>>a[j];
            if(a[j]<=j) flag=true;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}