/*
D03004
Cho một xâu chỉ gồm các kí tự '(', ')' và có độ dài chẵn. Hãy đếm số lượng
dấu ngoặc cần phải đổi chiều ít nhất, sao cho xâu mới thu được là một dãy
ngoặc đúng.

Input:
- Dòng đầu tiên là số lượng bộ test T (T <= 20).
- Mỗi test gồm 1 xâu S có độ dài không vượt quá 100 000, chỉ gồm dấu ( và ).

Output:
- Với mỗi test, in ra đáp án tìm được trên một dòng.

Ví dụ:
Input:          Output:
4               2
))((            2
((((            1
(((())          3
)(())(((

Giới hạn thời gian: 2s
Giới hạn bộ nhớ: 65536Kb
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[100001];
        scanf("%s",s);
        int open=0, close=0;
        for(int i=0;s[i];i++){
            if(s[i]=='(') open++;
            else {
                if(open>0) open--;
                else close++;
            }
        }
        printf("%d\n", (open+1)/2 + (close+1)/2);
    }
}
