#include <iostream>
using namespace std;

int stack[100];
int top = -1;

void day(int x) {
    stack[++top] = x;
}

int lay() {
    return stack[top--];
}

int main() {
    int n;
    cout << "Nhap so: ";
    cin >> n;

    while (n > 0) {
        day(n % 2);
        n = n / 2;
    }

    cout << "Dang nhi phan: ";
    while (top != -1) {
        cout << lay();
    }
    cout << endl;

    return 0;
}