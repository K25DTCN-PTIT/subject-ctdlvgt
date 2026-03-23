#include <iostream>
using namespace std;

int n, k, a[20];

void in() {
    for (int i = 1; i <= k; i++) {
        cout << a[i];
        if (i < k) cout << " ";
    }
    cout << "\n";
}

void sinh(int pos, int start, int sum) {
    for (int i = start; i <= n - k + pos; i++) {
        a[pos] = i;
        if (pos == k) {
            if ((sum + i) % 2 == 0) in();
        } else {
            sinh(pos + 1, i + 1, sum + i);
        }
    }
}

int main() {
    cin >> n >> k;
    sinh(1, 1, 0);
    return 0;
}
