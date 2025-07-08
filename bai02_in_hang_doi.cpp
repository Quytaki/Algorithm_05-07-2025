#include <iostream>
using namespace std;

int queue[100];
int front = 0, rear = -1;

void them(int x) {
    rear++;
    queue[rear] = x;
}

void inHangDoi() {
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    them(1);
    them(3);
    them(5);
    inHangDoi();
    return 0;
}