#include <iostream>
#include <vector>
using namespace std;

int n, k, a[25], cnt;
vector<bool> sieve;

void initSieve(int maxN) {
    sieve.assign(maxN + 1, true);
    sieve[0] = sieve[1] = false;
    for (int i = 2; i * i <= maxN; i++)
        if (sieve[i])
            for (int j = i * i; j <= maxN; j += i)
                sieve[j] = false;
}

void sinh(int pos, int start) {
    if (pos > k) {
        cnt++;
        if (sieve[cnt]) {
            cout << cnt << ":";
            for (int i = 1; i <= k; i++) cout << " " << a[i];
            cout << "\n";
        }
        return;
    }
    for (int i = start; i <= n - k + pos; i++) {
        a[pos] = i;
        sinh(pos + 1, i + 1);
    }
}

int main() {
    cin >> n >> k;
    // C(19,9) = 92378 is max possible
    initSieve(200000);
    cnt = 0;
    sinh(1, 1);
    return 0;
}
