#include <iostream>
using namespace std;

const int MAX = 100;
int queue[MAX];
int front = 0, rear = -1;

void them(int x) {
    rear++;
    queue[rear] = x;
}

int lay() {
    int x = queue[front];
    front++;
    return x;
}

bool rong() {
    return front > rear;
}

int main() {
    them(10);
    them(20);
    cout << lay() << endl;
    cout << lay() << endl;
    if (rong()) cout << "Hang rong!\n";
    return 0;
}