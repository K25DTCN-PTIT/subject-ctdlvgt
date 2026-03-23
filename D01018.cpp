#include <iostream>
#include <set>
using namespace std;

int n, a[20], cnt;
set<long long> fib;

void initFib(long long maxN) {
    long long a = 1, b = 2;
    fib.insert(a);
    fib.insert(b);
    while (b <= maxN) {
        long long c = a + b;
        a = b; b = c;
        fib.insert(b);
    }
}

void sinh(int pos) {
    for (int v = 0; v <= 1; v++) {
        a[pos] = v;
        if (pos == n) {
            cnt++;
            if (fib.count(cnt)) {
                cout << cnt << ":";
                for (int i = 1; i <= n; i++) cout << " " << a[i];
                cout << "\n";
            }
        } else sinh(pos + 1);
    }
}

int main() {
    cin >> n;
    initFib(1 << n);
    cnt = 0;
    sinh(1);
    return 0;
}
