#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;scanf("%d",&n);
    vector<int>a(n),dp(n,1);
    for(auto&x:a)scanf("%d",&x);
    int ans=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++)
            if(a[j]<a[i]) dp[i]=max(dp[i],dp[j]+1);
        ans=max(ans,dp[i]);
    }
    printf("%d",ans);
}
