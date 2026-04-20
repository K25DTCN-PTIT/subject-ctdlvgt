/*
D02019
Một dãy số tự nhiên bắt đầu bởi con số 1 và được thực hiện N-1 phép biến đổi
"gấp đôi" dãy số như sau:
Với dãy số A hiện tại, dãy số mới có dạng A, x, A trong đó x là số tự nhiên
bé nhất chưa xuất hiện trong A.

Ví dụ với 2 bước biến đổi: [1] -> [1 2 1] -> [1 2 1 3 1 2 1].

Hãy xác định số thứ K trong dãy số cuối cùng là bao nhiêu?

Input:
- Dòng đầu tiên là số lượng bộ test T (T <= 20).
- Mỗi test gồm số nguyên dương N và K (1 <= N <= 50, 1 <= K <= 2^N - 1).

Output:
- Với mỗi test, in ra đáp án trên một dòng.

Ví dụ:
Input:          Output:
2               2
3 2             4
4 8

Giải thích test 1: Dãy số thu được là [1, 2, 1, 3, 1, 2, 1].
Giải thích test 2: Dãy số thu được là [1, 2, 1, 3, 1, 2, 1, 4, 1, 2, 1, 3, 1, 2, 1].

Giới hạn thời gian: 2s
Giới hạn bộ nhớ: 65536Kb
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n, k;
        scanf("%lld%lld",&n,&k);
        int ans=1;
        while(k%2==0){ ans++; k/=2; }
        printf("%d\n", ans);
    }
}
