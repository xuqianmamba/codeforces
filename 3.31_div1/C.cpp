#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

long long cost_del[100005],cost_insert[100005],sum_cost[100005];
long long max_val=9223372036854775807;
long long kongbai[100005],value[100005];
unordered_set <long long> val;
long long del_num;

int main(){
    long long T,n,c,d,num;

    cin>>T;
    for(long long i=1;i<=T;i++){
        cin>>n>>c>>d;
        val.clear();
        del_num=0;
        for(long long i=1;i<=n;i++){
            cin>>num;
            if(val.find(num)!=val.end()) del_num++; 
            else val.insert(num);
        }
        // cout<<"del_num is"<<del_num<<endl;
        long long j=0;
        for(auto itr = val.begin(); itr != val.end(); ++itr){
            value[++j]=*itr;
        }
        // cout<<"*************"<<" "<<value[0]<<" "<<value[1]<<" "<<value[2]<<" "<<value[3];
        // cout<<val.size()<<endl;
        sort(value+1,value+val.size()+1);
        // cout<<"*************"<<" "<<value[0]<<" "<<value[1]<<" "<<value[2]<<" "<<value[3];
        j=val.size();
        for(long long i=0;i<=j;i++){
            cost_del[i]=(j-i)*c;
            if(i==0) cost_insert[i]=d;
            else cost_insert[i]=(value[i]-i)*d;
            sum_cost[i]=cost_del[i]+cost_insert[i];
        }
        max_val=9223372036854775807;
        for(long long i=0;i<=j;i++){
            if(sum_cost[i]<max_val)    max_val=sum_cost[i];       
        }
        cout<<max_val+del_num*c<<endl;
    }
    return 0;
}