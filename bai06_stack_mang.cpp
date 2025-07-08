#include <iostream>
using namespace std;

int stack[100];
int top = -1;

void day(int x) {
    top++;
    stack[top] = x;
}

int lay() {
    return stack[top--];
}

bool rong() {
    return top == -1;
}

int main() {
    day(5);
    day(10);
    cout << lay() << endl;
    cout << lay() << endl;
    if (rong()) cout << "Stack rong\n";
    return 0;
}