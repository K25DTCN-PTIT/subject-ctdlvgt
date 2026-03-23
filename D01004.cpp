#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n;
string a;
vector<string> res;

void sinh(int pos) {
    if (pos == n) { res.push_back(a); return; }
    a[pos] = '6'; sinh(pos + 1);
    a[pos] = '8'; sinh(pos + 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        a.resize(n);
        res.clear();
        sinh(0);
        cout << res.size() << "\n";
        for (int i = 0; i < res.size(); i++) {
            if (i) cout << " ";
            cout << res[i];
        }
        cout << "\n";
    }
    return 0;
}
