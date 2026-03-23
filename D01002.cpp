#include <iostream>
using namespace std;

int n;
char a[20];

void sinh(int pos, int cntA, int cntB) {
    char c[] = {'A', 'B'};
    for (int v = 0; v < 2; v++) {
        a[pos] = c[v];
        int nA = cntA + (v == 0), nB = cntB + (v == 1);
        if (pos == n) {
            if (nA >= 1 && nB >= 1) {
                for (int i = 1; i <= n; i++) cout << a[i];
                cout << "\n";
            }
        } else sinh(pos + 1, nA, nB);
    }
}

int main() {
    cin >> n;
    sinh(1, 0, 0);
    return 0;
}
