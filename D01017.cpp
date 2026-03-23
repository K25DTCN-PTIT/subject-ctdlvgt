#include <bits/stdc++.h>
using namespace std;

int T, K, n;
string s;
set<long long> st;

void backtrack(int pos, int cnt, string cur) {
    if (cnt == K) {
        st.insert(stoll(cur));
        return;
    }
    if (pos == n) return;

    for (int i = pos; i < n; i++) {
        backtrack(i + 1, cnt + 1, cur + s[i]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> T;
    while (T--) {
        cin >> s >> K;
        n = s.size();
        st.clear();

        backtrack(0, 0, "");

        for (auto x : st) {
            cout << x << "\n";
        }
    }

    return 0;
}