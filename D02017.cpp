/*
D02017
Cho hai dãy số thực A[] và B[] đều có N phần tử.
Tìm độ dài dài nhất của dãy các vị trí (không cần liên tiếp) sao cho:
- Xét trên A[]: dãy con tăng dần nghiêm ngặt
- Xét trên B[]: dãy con giảm dần nghiêm ngặt

Input: T bộ test, mỗi bộ: N, rồi N dòng mỗi dòng A[i] B[i]
Output: Độ dài dãy vị trí dài nhất thỏa mãn

Ví dụ:
Input:          Output:
2               2
1.0 1.0
1.5 0.0

3               1
1.0 1.0
1.0 1.0
1.0 1.0

6               4
1.5 9.0
2.0 2.0
2.5 6.0
3.0 5.0
4.0 2.0
10.0 5.5

Giới hạn: T<=100, N<=500, giá trị <=100
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        double a[500], b[500];
        int dp[500];
        for(int i=0;i<n;i++) scanf("%lf%lf",&a[i],&b[i]);
        int ans=1;
        for(int i=0;i<n;i++){
            dp[i]=1;
            for(int j=0;j<i;j++)
                if(a[j]<a[i] && b[j]>b[i])
                    dp[i]=max(dp[i], dp[j]+1);
            ans=max(ans, dp[i]);
        }
        printf("%d\n", ans);
    }
}
