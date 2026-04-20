#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[100001];
        scanf("%s", s);
        stack<char> st;
        bool ok = true;
        for(int i = 0; s[i]; i++){
            char c = s[i];
            if(c=='(' || c=='[' || c=='{') st.push(c);
            else {
                if(st.empty()){ok=false;break;}
                char top = st.top(); st.pop();
                if(c==')' && top!='('){ok=false;break;}
                if(c==']' && top!='['){ok=false;break;}
                if(c=='}' && top!='{'){ok=false;break;}
            }
        }
        if(!st.empty()) ok=false;
        puts(ok?"YES":"NO");
    }
}
