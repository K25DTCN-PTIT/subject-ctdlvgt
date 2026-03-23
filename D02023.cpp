#include <iostream>
using namespace std;

int main() {
    int n, a[1000];
    cin >> n;

    for (int i = 0; i < n; i++) cin >> a[i];

    int step = 1;

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }

        if (swapped) {
            cout << "Buoc " << step++ << ": ";
            for (int k = 0; k < n; k++) {
                if (k) cout << " ";
                cout << a[k];
            }
            cout << endl;
        } else {
            break;
        }
    }

    return 0;
}
