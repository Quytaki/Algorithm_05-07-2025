#include <iostream>
using namespace std;

int queue[100];
int front = 0, rear = -1;

void them(int x) {
    rear++;
    queue[rear] = x;
}

int lay() {
    return queue[front++];
}

bool rong() {
    return front > rear;
}

int main() {
    for (int i = 1; i <= 5; i++) {
        them(i);
        cout << "Nguoi " << i << " vao hang\n";
    }

    while (!rong()) {
        int x = lay();
        cout << "Phuc vu nguoi " << x << endl;
    }

    cout << "Het nguoi trong hang\n";
    return 0;
}