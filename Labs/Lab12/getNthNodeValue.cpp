///////// Student Info/////////
//
//           Your Name: Er Jia Liang Sean
//      Your NTU Email: erji0002@e.ntu.edu.sg
//
//
//
/*1. (getNthNodeValue) [10 marks] Suppose a linked list is used to store students’ marks of
SC1008 lab 2, and each node’s structure as follows:
struct MarkNode {
int mark;
ListNode* next;
};

You are asked to write a function called locateNthNode() to return the mark of the n-
th node in the linked list. The function prototype is as follows:
int getNthNodeValue(const MarkNode* head, int n);

The parameter n is guaranteed to be >= 1. If n == 1, it means to return the mark value of the
first node; If n is larger than the total length of the linked list, you should return -1, indicating
exceeding the maximum length of the linked list.*/

#include <iostream>
using namespace std;

struct MarkNode {
    int mark; // Changed to int
    MarkNode* next;
};

// Function to insert a node at the end of the linked list
void insertNode2ListEnd(MarkNode*& head, int newValue) {
    MarkNode* newNode = new MarkNode;
    newNode->mark = newValue;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    MarkNode* temp = head;
    while (temp->next != nullptr) { // Traverse to the last node
        temp = temp->next;
    }
    temp->next = newNode; // Link last node to new node
}
void destroyList(MarkNode*& head)
{
    MarkNode *nodePtr = head;  // Start at head of list
    MarkNode *garbage = nullptr;

    while (nodePtr != nullptr)
    {
        // garbage keeps track of node to be deleted
        garbage = nodePtr;
        // Move on to the next node, if any
        nodePtr = nodePtr->next;
        // Delete the "garbage" node
        delete garbage;
        garbage = nullptr;
    }
    head = nullptr;
}

// Function to get the value of the n-th node
int getNthNodeValue(const MarkNode* head, int n) {
    // TO-DO: WRITE YOUR CODE HERE
    int count = 1;
    const MarkNode* current = head;
    
    while (current != nullptr){
        if (count == n){
            return current->mark;
        }
        count++;
        current = current->next;
    }
    return -1;
}

int main() {
    MarkNode* head = nullptr; // Initialize an empty linked list

    // Insert nodes into the linked list
    insertNode2ListEnd(head, 10); // Insert 10
    insertNode2ListEnd(head, 20); // Insert 20
    insertNode2ListEnd(head, 30); // Insert 30
    insertNode2ListEnd(head, 40); // Insert 40

    // Test cases
    cout << getNthNodeValue(head, 1) << endl; // Output: 10
    cout << getNthNodeValue(head, 2) << endl; // Output: 20
    cout << getNthNodeValue(head, 4) << endl; // Output: 40
    cout << getNthNodeValue(head, 5) << endl; // Output: -1 (exceeds length)
    cout << getNthNodeValue(nullptr, 1) << endl; // Output: -1 (empty list)

    // Clean up memory 
    destroyList(head);
    return 0;
}
