#include <iostream>
using namespace std;

int n, m, a[15], used[15];

void quaylui(int pos) {
    for (int i = 1; i <= n; i++) {
        if (i != m && !used[i]) {
            a[pos] = i;
            used[i] = 1;
            if (pos == n - 1) {
                for (int j = 1; j < n; j++) cout << a[j] << " ";
                cout << m << "\n";
            } else quaylui(pos + 1);
            used[i] = 0;
        }
    }
}

int main() {
    cin >> n >> m;
    quaylui(1);
    return 0;
}
