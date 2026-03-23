#include <iostream>
using namespace std;

void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) cin >> a[i];
}

void in(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << a[i];
    }
    cout << endl;
}

void sapxep(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minPos = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minPos]) minPos = j;
        }
        swap(a[i], a[minPos]);
        cout << "Buoc " << i + 1 << ": ";
        in(a, n);
    }
}

int main() {
    int n, a[1000];
    cin >> n;
    nhap(a, n);
    sapxep(a, n);
    return 0;
}
