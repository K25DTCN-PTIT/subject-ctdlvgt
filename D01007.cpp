#include <iostream>
#include <algorithm>
using namespace std;

int n, k, a[20], b[20];

void sinh(int pos, int start) {
    if (pos > k) {
        for (int i = 1; i <= k; i++) {
            if (i > 1) cout << " ";
            cout << b[i];
        }
        cout << "\n";
        return;
    }
    for (int i = start; i < n; i++) {
        b[pos] = a[i];
        sinh(pos + 1, i + 1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        sinh(1, 0);
    }
    return 0;
}
