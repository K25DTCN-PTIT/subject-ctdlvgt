#include <iostream>
#include <set>
#include <string>
using namespace std;

int T, K, n;
string S;
set<string> res;
int a[25];

void sinh(int pos, int start) {
    for (int i = start; i <= n - (K - pos + 1); i++) {
        a[pos] = i;
        if (pos == K) {
            string x = "";
            for (int j = 1; j <= K; j++) x += S[a[j]];
            res.insert(x);
        } else {
            sinh(pos + 1, i + 1);
        }
    }
}

int main() {
    cin >> T;
    while (T--) {
        cin >> S >> K;
        n = S.size();
        res.clear();

        sinh(1, 0);

        for (auto x : res) cout << x << "\n";
    }
    return 0;
}