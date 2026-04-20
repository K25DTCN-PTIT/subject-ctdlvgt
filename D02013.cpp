#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        char s[101];
        scanf("%d%s", &n, s);
        int dp[101][101]={};
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(s[i-1]==s[j-1] && i!=j) dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        printf("%d\n", dp[n][n]);
    }
}
