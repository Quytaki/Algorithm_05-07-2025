#include <iostream>
using namespace std;

const int MAX = 5;
int queue[MAX];
int front = -1, rear = -1;

bool rong() {
    return front == -1;
}

bool day() {
    return (rear + 1) % MAX == front;
}

void them(int x) {
    if (day()) {
        cout << "Hang doi day\n";
        return;
    }
    if (rong()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }
    queue[rear] = x;
}

void lay() {
    if (rong()) {
        cout << "Hang rong\n";
        return;
    }
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
}

void inHang() {
    if (rong()) {
        cout << "Hang rong\n";
        return;
    }
    int i = front;
    while (true) {
        cout << queue[i] << " ";
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    cout << endl;
}

int main() {
    them(1);
    them(2);
    them(3);
    them(4);
    them(5);
    inHang();
    lay();
    them(6);
    inHang();
    return 0;
}