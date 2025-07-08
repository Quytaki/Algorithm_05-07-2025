#include <iostream>
using namespace std;

int queue[100];
int front = 0, rear = -1;

void them(int x) {
    rear++;
    queue[rear] = x;
}

void inChan() {
    for (int i = front; i <= rear; i++) {
        if (queue[i] % 2 == 0)
            cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so luong: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        them(x);
    }
    inChan();
    return 0;
}