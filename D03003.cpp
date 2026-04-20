#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char s[25];
        fgets(s, 25, stdin);
        stack<char> st;
        bool dup = false;
        for(int i = 0; s[i] && s[i]!='\n'; i++){
            if(s[i]==' ') continue;
            if(s[i]==')'){
                bool hasOp = false;
                while(st.top()!='('){
                    char c = st.top(); st.pop();
                    if(c=='+' || c=='-' || c=='*' || c=='/') hasOp = true;
                }
                st.pop();
                if(!hasOp) dup = true;
            } else st.push(s[i]);
        }
        puts(dup?"Yes":"No");
    }
}
