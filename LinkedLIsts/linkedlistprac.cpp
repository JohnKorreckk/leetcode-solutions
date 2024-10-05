#include <iostream>

class ListNode {
    public:
    int val;
    ListNode *next;
    ListNode(int val_): val(val_), next(nullptr) {}
};

void addNode(ListNode* prevNode, ListNode* nodeToAdd) {
    nodeToAdd->next = prevNode->next;
    prevNode->next = nodeToAdd;
}

void removeNode(ListNode* nodeToRemove) {

}

int findMiddle(ListNode* headNode) {
    ListNode* slowPointer = headNode;
    ListNode* fastPointer = headNode;
    while (fastPointer and fastPointer->next) {
        slowPointer = slowPointer->next;
        fastPointer = fastPointer->next->next;
    }
    return slowPointer->val;
}

int main() {
    ListNode* one = new ListNode(1);
    ListNode* two = new ListNode(2);
    ListNode* three = new ListNode(3);
    ListNode* four = new ListNode(4);
    ListNode* five = new ListNode(5);
    ListNode* six = new ListNode(6);
    ListNode* head = one;
    one->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    addNode(one, two);
    std::cout << findMiddle(head);
    delete one;
    delete two;
    delete three;
}