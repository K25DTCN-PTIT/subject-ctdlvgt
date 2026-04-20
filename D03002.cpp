#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[100001];
        scanf("%s", s);
        stack<int> st;
        st.push(-1);
        int ans = 0;
        for(int i = 0; s[i]; i++){
            if(s[i]=='(') st.push(i);
            else {
                st.pop();
                if(st.empty()) st.push(i);
                else ans = max(ans, i - st.top());
            }
        }
        printf("%d\n", ans);
    }
}
