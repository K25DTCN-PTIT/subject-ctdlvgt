#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, M;
    scanf("%d%d", &n, &M);
    vector<int> w(n), v(n);
    for(int i = 0; i < n; i++) scanf("%d%d", &w[i], &v[i]);
    vector<int> dp(M+1, 0);
    for(int i = 0; i < n; i++)
        for(int j = M; j >= w[i]; j--)
            dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
    printf("%d\n", dp[M]);
}
