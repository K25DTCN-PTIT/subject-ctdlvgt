#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        sort(s.begin(), s.end());
        vector<string> res;
        for (int mask = 1; mask < (1 << n); mask++) {
            string sub;
            for (int i = 0; i < n; i++)
                if (mask & (1 << i)) sub += s[i];
            res.push_back(sub);
        }
        sort(res.begin(), res.end());
        for (int i = 0; i < res.size(); i++) {
            if (i) cout << " ";
            cout << res[i];
        }
        cout << "\n";
    }
    return 0;
}
