/*
D02018
Cho A, B. Tìm số N nhỏ nhất (không quá 100 chữ số) sao cho:
- Tổng các chữ số của N = A
- Tổng bình phương các chữ số của N = B
Nếu không tồn tại, in -1.

Input: T bộ test, mỗi bộ: A B
Output: N hoặc -1

Ví dụ: A=18 B=162 -> 99, A=12 B=9 -> -1
Giới hạn: T<=100, A<=100, B<=10000
*/
#include <bits/stdc++.h>
using namespace std;
int dp[101][10001]; // dp[a][b] = min digits needed
int main(){
    memset(dp, -1, sizeof dp);
    dp[0][0] = 0;
    for(int a=0;a<=100;a++)
        for(int b=0;b<=10000;b++){
            if(dp[a][b]<0) continue;
            for(int d=1;d<=9;d++)
                if(a+d<=100 && b+d*d<=10000){
                    int na=a+d, nb=b+d*d;
                    if(dp[na][nb]<0 || dp[na][nb]>dp[a][b]+1)
                        dp[na][nb]=dp[a][b]+1;
                }
        }
    int t;
    scanf("%d",&t);
    while(t--){
        int A,B;
        scanf("%d%d",&A,&B);
        if(dp[A][B]<0){puts("-1");continue;}
        int a=A, b=B;
        for(int i=0;i<dp[A][B];i++){
            for(int d=1;d<=9;d++){
                int ra=a-d, rb=b-d*d;
                if(ra>=0 && rb>=0 && dp[ra][rb]>=0 && dp[ra][rb]==dp[A][B]-i-1){
                    printf("%d",d);
                    a=ra; b=rb;
                    break;
                }
            }
        }
        puts("");
    }
}
