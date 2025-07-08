#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu Fibonacci: ";
    cin >> n;

    int f[100];
    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i < n; i++) {
        f[i] = f[i-1] + f[i-2];
    }

    cout << "Day Fibonacci nguoc: ";
    for (int i = n-1; i >= 0; i--) {
        cout << f[i] << " ";
    }
    cout << endl;

    return 0;
}