#include <iostream>
using namespace std;

int n, cnt;
char a[15];

void sinh(int pos) {
    for (char c = 'A'; c <= 'C'; c++) {
        a[pos] = c;
        if (pos == n) {
            cnt++;
            if (cnt % 2 == 1) {
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
