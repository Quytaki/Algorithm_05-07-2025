#include <iostream>
#include <cstring>
using namespace std;

char stack[100];
int top = -1;

void day(char c) {
    stack[++top] = c;
}

char lay() {
    return stack[top--];
}

int main() {
    char s[100];
    cout << "Nhap chuoi: ";
    cin >> s;

    for (int i = 0; i < strlen(s); i++) {
        day(s[i]);
    }

    cout << "Chuoi dao nguoc: ";
    while (top != -1) {
        cout << lay();
    }
    cout << endl;

    return 0;
}