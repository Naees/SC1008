/*(Copy Constructor) Andy implemented a class called VisitorCounter to record and
display the visitor count for a website. Below is his C++ implementation and the testing
code.

1) Please read the code and point out the possible issues in his implementation;
    Ans: Missing a defined copy constructor, therefore the class resulted to it's implicit default copy constructor.
         Additionally, while using the shallow copy (both the copy and the original pointing to the same address) the destructor deletes the only existing original/copy,
         Therefore, we encounter an error due to the fact that the destructor is trying to destroy the second non existing copy of the copy.

2) If you are requested to implement the class, how would you fix the issues here?
    Ans: With the addition of a explicitly defined constructor, the error would be resolved due to the utilization of the deep copy.*/
    

#include <iostream>
using namespace std;

class VisitorCounter {
private:
    int* count;  // Pointer to dynamically allocated memory for visit count

public:
    VisitorCounter(int initialCount) {
        count = new int(initialCount);
        cout << "Constructor called with the count as " << *count << endl;
    }

    // SOLUTION: Addtion of a Copy Constructor (Deep Copy)
    VisitorCounter(const VisitorCounter &other) {
        count = new int(*(other.count));
    }

    // Destructor
    ~VisitorCounter() {
        cout << "Destructor called with the count being " << *count << endl;
        delete count; // Free allocated memory
    }

    // Increment the visiotr count
    void increment() {
        (*count)++;
    }

    // Display the visitor count
    void display() const {
        cout << "Visitor Count: " << *count << endl;
    }
};

int main() {
    VisitorCounter counter(10);
    cout << "\nOriginal Counter:\n";
    counter.display();

    // Copy the counter
    VisitorCounter counterCopy = counter;
    cout << "counterCopy:\n";
    counterCopy.display();

    // Increase copied object's count
    counterCopy.increment();
    counterCopy.increment();
    cout << "\nAfter modifying copied counter...\n";
    cout << "Original Counter: "<<endl;
    counter.display();
    cout << "counterCopy: "<<endl;
    counterCopy.display();
    cout <<endl <<endl;

    return 0;
}
