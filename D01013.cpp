#include <iostream>
using namespace std;

int n;
char a[20], x[20];
bool used[20];

void quaylui(int pos) {
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            x[pos] = a[i];
            used[i] = true;
            if (pos == n) {
                for (int j = 1; j <= n; j++) cout << x[j];
                cout << "\n";
            } else quaylui(pos + 1);
            used[i] = false;
        }
    }
}

int main() {
    char c1, c2;
    cin >> c1 >> c2;
    if (c1 > c2) swap(c1, c2);
    for (char c = c1; c <= c2; c++) a[++n] = c;
    quaylui(1);
    return 0;
}
