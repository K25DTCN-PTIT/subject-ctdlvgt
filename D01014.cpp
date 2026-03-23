#include <iostream>
using namespace std;

int n, k, a[15];

void sinh(int pos, int start) {
    if (pos > k) {
        for (int i = 1; i <= k; i++) {
            if (i > 1) cout << " ";
            cout << a[i];
        }
        cout << "\n";
        return;
    }
    for (int i = start; i <= n; i++) {
        a[pos] = i;
        sinh(pos + 1, i);
    }
}

int main() {
    cin >> n >> k;
    sinh(1, 1);
    return 0;
}
