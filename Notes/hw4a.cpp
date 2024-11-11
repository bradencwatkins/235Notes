#include <iostream>
using namespace std;

// SLList() {
//     head = nullptr;
//     tail = nullptr;
//     numItems = 0;
// }

// ~SLList() {
//     clear();
// }

void push_back(T item) {
    Node* n = new Node(item);

    if (head == nullptr) {
        head = n;
        tail = n;
    }
    else {
        tail->next = n;
        tail = n;
    }
    numItem ++;
}

const Node* get_head() const {
    return head;
}

const T& front() const {
    // check that head isnt null first
    return head->value;
}