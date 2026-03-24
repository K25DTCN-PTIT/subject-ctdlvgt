#include <iostream>
using namespace std;

int main() {
    int t, n;
    int d[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    cin >> t;
    while (t--) {
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < 10; i++) {
            cnt += n / d[i];
            n %= d[i];
        }
        cout << cnt << "\n";
    }
    return 0;
}
