#include <iostream>
using namespace std;

long long C[16][16];

void initC() {
    for (int i = 0; i <= 15; i++) {
        C[i][0] = 1;
        for (int j = 1; j <= i; j++)
            C[i][j] = C[i-1][j-1] + C[i-1][j];
    }
}

int main() {
    initC();
    int t;
    cin >> t;
    while (t--) {
        int n, k, a[16];
        cin >> n >> k;
        for (int i = 0; i < k; i++) cin >> a[i];
        long long rank = 0;
        int prev = 0;
        for (int i = 0; i < k; i++) {
            for (int v = prev + 1; v < a[i]; v++)
                rank += C[n - v][k - 1 - i];
            prev = a[i];
        }
        cout << rank + 1 << "\n";
    }
    return 0;
}
