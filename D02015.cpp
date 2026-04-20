#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        long long prev2=0, prev1=0;
        for(int i=0;i<n;i++){
            long long x;
            scanf("%lld", &x);
            long long cur = max(prev1, prev2+x);
            prev2=prev1; prev1=cur;
        }
        printf("%lld\n", prev1);
    }
}
