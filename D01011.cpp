#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<vector<int>> res;

void sinh(int pos, int start, vector<int>& cur) {
    if (pos == k) { res.push_back(cur); return; }
    for (int i = start; i <= n - k + pos + 1; i++) {
        cur[pos] = i;
        sinh(pos + 1, i + 1, cur);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        res.clear();
        vector<int> cur(k);
        sinh(0, 1, cur);
        for (int i = res.size() - 1; i >= 0; i--) {
            for (int j = 0; j < k; j++) {
                if (j) cout << " ";
                cout << res[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}
