#include <iostream>
#include <string>
using namespace std;

int n;
string cur;

void sinh(int pos, int len, int cntA, int cntB, int cntC) {
    if (pos == len) {
        if (cntA >= 1 && cntB >= 1 && cntC >= 1 && cntA <= cntB && cntB <= cntC)
            cout << cur << "\n";
        return;
    }
    cur[pos] = 'A'; sinh(pos + 1, len, cntA + 1, cntB, cntC);
    cur[pos] = 'B'; sinh(pos + 1, len, cntA, cntB + 1, cntC);
    cur[pos] = 'C'; sinh(pos + 1, len, cntA, cntB, cntC + 1);
}

int main() {
    cin >> n;
    for (int len = 3; len <= n; len++) {
        cur.resize(len);
        sinh(0, len, 0, 0, 0);
    }
    return 0;
}
