#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<string> names;
string last;
bool used[15];
string perm[15];

void sinh(int pos) {
    if (pos == n - 1) {
        for (int i = 0; i < n - 1; i++) {
            if (i) cout << " ";
            cout << perm[i];
        }
        cout << " " << last << "\n";
        return;
    }
    for (int i = 0; i < (int)names.size(); i++) {
        if (!used[i]) {
            perm[pos] = names[i];
            used[i] = true;
            sinh(pos + 1);
            used[i] = false;
        }
    }
}

int main() {
    cin >> n;
    vector<string> all(n);
    for (int i = 0; i < n; i++) cin >> all[i];
    cin >> last;
    for (auto &s : all)
        if (s != last) names.push_back(s);
    sort(names.begin(), names.end());
    sinh(0);
    return 0;
}
