///////// Student Info/////////
//
//           Your Name: Er Jia Liang Sean
//      Your NTU Email: erji0002@e.ntu.edu.sg
//
//
//

/*2. (Remove Duplicate Names from An Unsorted Linked List) [12 Marks] A linked list is
used to store students’ name list. However, due to mistaking operations, there may be
duplicated names in the linked list. You are asked to write a function to remove
duplicated names from a given linked list. The structure of each node of the linked list is
as follows:

struct StringNode {
string name;
StringNode* next;
};

The function prototype is as follows:
        void removeDuplicatedNames(const StringNode*& head);
    You are requested to follow the given requirements:
        • When there are duplicated names, the corresponding first name should be kept;

        • After removing the duplicated names, the relative order of the remaining names
        should be the same as the original linked list;

        • The names are case sensitive;

        • You are NOT allowed to use any STL containers or algorithms in your
        implementation. Otherwise, 0 marks will be given.*/

#include <iostream>
#include <string>

struct StringNode {
    std::string name;
    StringNode* next;
};


void printList(const StringNode* head) {
    const StringNode* temp = head;
    while (temp) {
        std::cout << temp->name << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}

void append(StringNode*& head, const std::string& name) {
    StringNode* newNode = new StringNode;
    newNode->name = name;
    newNode->next = nullptr;
    if (!head) {
        head = newNode;
        return;
    }
    StringNode* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void freeList(StringNode*& head) {
    while (head) {
        StringNode* temp = head;
        head = head->next;
        delete temp;
    }
}

// Remove duplicate names from the linked list
void removeDuplicatedNames(StringNode*& head) {
    // TO-DO: Write Your Code Here
    // If the list is empty, there is nothing to do.
    if (!head) return;
    
    // Outer loop: for each node in the linked list.
    StringNode* current = head;
    while (current) {
        StringNode* runner = current;
        while (runner->next) {
            // compare the names (case sensitive).
            if (runner->next->name == current->name) {
                // Duplicated found; need to remove
                StringNode* duplicate = runner->next;
                runner->next = runner->next->next;
                delete duplicate;
            }
            // Move the runner to the next StringNode
            runner = runner->next;
        }
        // Move to the next distinct element.
        current = current->next;
    }

}

int main() {
    StringNode* head = nullptr;
    append(head, "Alice");
    append(head, "Alice");
    append(head, "Bob");
    append(head, "Charlie");
    append(head, "David");
    printList(head);
    removeDuplicatedNames(head);
    printList(head);
    freeList(head);

    return 0;
}
