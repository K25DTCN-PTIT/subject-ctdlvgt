#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[1001], b[1001];
        scanf("%s%s", a, b);
        int n = strlen(a), m = strlen(b);
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                dp[i][j] = a[i-1]==b[j-1] ? dp[i-1][j-1]+1 : max(dp[i-1][j], dp[i][j-1]);
        printf("%d\n", dp[n][m]);
    }
}
