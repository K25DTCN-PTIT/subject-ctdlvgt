#include <cstdio>
using namespace std;

int n, k, a[20], cnt;
char buf[256];

void sinh(int pos, int start) {
    if (pos > k) {
        if (cnt % k == 0) {
            int len = 0;
            for (int i = 1; i <= k; i++) {
                if (i > 1) buf[len++] = ' ';
                if (a[i] >= 10) buf[len++] = '0' + a[i] / 10;
                buf[len++] = '0' + a[i] % 10;
            }
            buf[len++] = '\n';
            fwrite(buf, 1, len, stdout);
        }
        cnt++;
        return;
    }
    for (int i = start; i <= n - k + pos; i++) {
        a[pos] = i;
        sinh(pos + 1, i + 1);
    }
}

int main() {
    scanf("%d%d", &n, &k);
    cnt = 0;
    sinh(1, 1);
    return 0;
}
