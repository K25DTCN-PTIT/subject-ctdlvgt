#include <iostream>
using namespace std;

long long fib[93];

char solve(int n, long long i) {
    if (n == 1) return 'A';
    if (n == 2) return 'B';
    if (i <= fib[n - 2]) return solve(n - 2, i);
    return solve(n - 1, i - fib[n - 2]);
}

int main() {
    fib[1] = 1; fib[2] = 1;
    for (int i = 3; i <= 92; i++) fib[i] = fib[i - 1] + fib[i - 2];
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long i;
        cin >> n >> i;
        cout << solve(n, i) << "\n";
    }
    return 0;
}
