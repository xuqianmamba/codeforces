#include <bits/stdc++.h>
using namespace std;


int pow_2(int n){
    int count=-1;
    while (n)
    {
        n>>=1;
        count++;
    }
    return count;
}
int a[44];

int main(){
    int T,n,a[105];
    cin>>T;
    for(int i=1;i<=T;i++){
        cin>>n;
        if(n%2==0) cout<<"-1"<<endl;
        else{
            if(pow_2(n)>40){
                cout<<"-1"<<endl;
                continue;    
            }
            else{
                int j=pow_2(n);
                cout<<j<<endl;
                for(int i=j;i>0;i--){
                    cout<<(((n>>i)&1)+1)<<" ";
                }
                cout<<endl;               
            }
        }
    }
    return 0;
}
