#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main(){
    int t,n,k;scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        vector<long long>dp(n+1,0);
        dp[0]=1;
        long long s=1;// sum of dp[max(0,i-k)..i-1]
        for(int i=1;i<=n;i++){
            dp[i]=s;
            s=(s+dp[i])%MOD;
            if(i>=k) s=(s-dp[i-k]+MOD)%MOD;
        }
        printf("%lld\n",dp[n]);
    }
}
