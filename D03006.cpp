/*
D03006
Trong quá trình gõ một dòng văn bản, chúng ta thường sử dụng phím sang trái,
sang phải hoặc xóa lùi (backspace). Cho một dãy ký tự mô tả các thao tác gõ
phím, trong đó:

- Ký tự '-' mô tả phím backspace (xóa lùi). Ký tự ở phía trước con trỏ
  (nếu có) sẽ bị xóa.
- Ký tự '<' mô tả phím di chuyển sang trái. Con trỏ sẽ sang trái 1 ký tự
  nếu có thể.
- Ký tự '>' mô tả phím di chuyển sang phải. Con trỏ sẽ sang phải 1 ký tự
  nếu có thể.
- Các ký tự khác là các chữ cái Tiếng Anh (in hoa hoặc in thường). Bàn phím
  để ở chế độ Insert. Tức là nếu con trỏ không ở cuối dòng thì khi chèn các
  ký tự sẽ đẩy các ký tự khác sang phải một vị trí.

Hãy thử tính toán và viết ra kết quả tương ứng.

Input:
- Có một dòng không quá 10^6 ký tự mô tả dãy gõ bàn phím.

Output:
- Ghi ra kết quả.

Ví dụ:
Input:          Output:
<<PI<T>>Ta-     PTIT

Giới hạn thời gian: 2s
Giới hạn bộ nhớ: 65536Kb
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    char s[1000001];
    fgets(s, 1000001, stdin);
    stack<char> left, right;
    for(int i=0;s[i]&&s[i]!='\n';i++){
        char c=s[i];
        if(c=='-'){ if(!left.empty()) left.pop(); }
        else if(c=='<'){ if(!left.empty()){ right.push(left.top()); left.pop(); } }
        else if(c=='>'){ if(!right.empty()){ left.push(right.top()); right.pop(); } }
        else left.push(c);
    }
    // left stack bottom->top = text left of cursor
    // right stack top->bottom = text right of cursor
    // reverse left into result, then append right
    string res;
    while(!left.empty()){ res+=left.top(); left.pop(); }
    reverse(res.begin(), res.end());
    while(!right.empty()){ res+=right.top(); right.pop(); }
    puts(res.c_str());
}
