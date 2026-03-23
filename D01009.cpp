#include <iostream>
using namespace std;

int n, a[15], cnt;

void sinh(int pos) {
    for (int v = 0; v < 3; v++) {
        a[pos] = v;
        if (pos == n) {
            cnt++;
            if (cnt % 2 == 0) {
                cout << cnt << ": ";
                for (int i = 1; i <= n; i++) cout << a[i];
                cout << "\n";
            }
        } else sinh(pos + 1);
    }
}

int main() {
    cin >> n;
    cnt = 0;
    sinh(1);
    return 0;
}
