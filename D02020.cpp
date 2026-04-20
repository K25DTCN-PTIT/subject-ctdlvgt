/*
D02020
Cho N sợi dây với độ dài khác nhau được lưu trong mảng A[]. Nhiệm vụ của bạn
là nối N sợi dây thành một sợi sao cho tổng chi phí nối dây là nhỏ nhất.
Biết chi phí nối sợi dây thứ i và sợi dây thứ j là tổng độ dài hai sợi dây
A[i] và A[j].

Input:
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào số lượng sợi dây N;
  dòng tiếp theo đưa vào N số A[i] là độ dài của các sợi dây.
- T, N, A[i] thỏa mãn: 1<=T<=100; 1<=N<=10^6; 0<=A[i]<=10^6.

Output:
- Đưa ra kết quả mỗi test theo từng dòng.

Ví dụ:
Input:          Output:
2               29
4               62
4 3 2 6
5
4 2 7 6 9

Giới hạn thời gian: 2s
Giới hạn bộ nhớ: 65536Kb
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(int i=0;i<n;i++){
            long long x;
            scanf("%lld",&x);
            pq.push(x);
        }
        long long cost=0;
        while(pq.size()>1){
            long long a=pq.top(); pq.pop();
            long long b=pq.top(); pq.pop();
            cost+=a+b;
            pq.push(a+b);
        }
        printf("%lld\n", cost);
    }
}
