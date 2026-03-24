#include <iostream>
#include <string>
#include <set>
using namespace std;

int n, k;
string words[16];
set<string> res;

void sinh(int pos, int cnt, string cur) {
    if (cnt == k) { res.insert(cur); return; }
    if (pos == n) return;
    sinh(pos + 1, cnt + 1, cur + words[pos]);
    sinh(pos + 1, cnt, cur);
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> words[i];
    sinh(0, 0, "");
    for (auto &x : res) cout << x << "\n";
    return 0;
}
