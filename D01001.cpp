#include <iostream>
using namespace std;

int n, a[20];

void sinh(int pos, int cnt) {
    for (int v = 0; v <= 1; v++) {
        a[pos] = v;
        if (pos == n) {
            if ((cnt + v) % 2 == 0) {
                for (int i = 1; i <= n; i++) {
                    if (i > 1) cout << " ";
                    cout << a[i];
                }
                cout << "\n";
            }
        } else sinh(pos + 1, cnt + v);
    }
}

int main() {
    cin >> n;
    sinh(1, 0);
    return 0;
}
