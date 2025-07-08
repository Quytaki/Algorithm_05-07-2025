#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void day(int x) {
    Node* p = new Node;
    p->data = x;
    p->next = top;
    top = p;
}

int lay() {
    if (top == NULL) return -1;
    int x = top->data;
    Node* temp = top;
    top = top->next;
    delete temp;
    return x;
}

bool rong() {
    return top == NULL;
}

int main() {
    day(1);
    day(2);
    day(3);

    while (!rong()) {
        cout << lay() << " ";
    }

    return 0;
}