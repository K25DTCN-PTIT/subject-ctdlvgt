#include <iostream>
#include <string>
#include <set>
using namespace std;

int n;
string words[16];
set<string> res;

void sinh(int pos, string cur) {
    if (pos == n) {
        if (!cur.empty()) res.insert(cur);
        return;
    }
    sinh(pos + 1, cur + words[pos]);
    sinh(pos + 1, cur);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> words[i];
    sinh(0, "");
    for (auto &x : res) cout << x << "\n";
    return 0;
}
