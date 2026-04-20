#include <bits/stdc++.h>
using namespace std;
int dp[10001];
int main(){
    for(int i=1;i<=10000;i++){
        dp[i]=i;
        for(int j=1;j*j<=i;j++)
            dp[i]=min(dp[i], dp[i-j*j]+1);
    }
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        printf("%d\n",dp[n]);
    }
}
