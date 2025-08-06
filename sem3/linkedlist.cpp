#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

int main() {
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);

    node1->next = node2;

    cout << "Node 1 data: " << node1->data << endl;
    cout << "Node 2 data (via node1->next): " << node1->next->data << endl;

    delete node1;
    delete node2;

    return 0;
}
