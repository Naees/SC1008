/*2. (std::list) [10 marks] You are helping a small clinic to implement its patient queue
management system. Patients arrive and get added to the end of the queue. When the
doctor is ready, the patient at the front of the queue is served and removed from the
patient queue. You are asked to use std::list<std::string> to implement this
queue, and implement a class called PatientQueue that has the following members:

    • Private Members:
        o std::list<std::string> queue: a list of patient names.
    • Public Members:
        o A constructor and destructor.
        o A function addPatient(const std::string &name) that adds a
        new patient’s name to the back of the list.
        o A function servePatient() that removes the patient from the front of
        the list and returns their name. If the list is empty, return a reminder
        message “Empty queue!”.
        o A function isEmpty() that returns true if the list is empty, false
        otherwise.
        o A function displayQueue() that prints out all patients in the linked list in
        order.*/

///////// Student Info/////////
//
//           Your Name: Er Jia Liang Sean
//      Your NTU Email: erji0002@e.ntu.edu.sg
//
////
#include <iostream>
#include <list>
#include <string>

class PatientQueue {
private:
    std::list<std::string> queue; // Stores patient names
public:
    // Constructor: Initializes an empty patient queue
    PatientQueue() : queue() {}
    ~PatientQueue(){}

    // TO-DO 1: Implement the function addPatient to add a new patient's name to the end of the queue
    void addPatient(const std::string &name) {
        queue.push_back(name);
    }

    // TO-DO 2: Implement the function servePatient: removes and returns the patient at the front of the queue
    // If the queue is empty, returns a reminder message
    std::string servePatient() {
        if (queue.empty()) {
            return "Empty queue!";
        }
        // Retrieve the name of the patient at the front
        std::string frontPatient = queue.front();
        // Remove the patient from the front of the queue.
        queue.pop_front();
        // Return the patient name.
        return frontPatient;
    }

    // TO-DO 3: Implement the function isEmpty
    bool isEmpty() {
        return queue.empty();
    }

    // TO-DO 4: Implement the function displayQueue to print out all patients in order
    void displayQueue() {
        for (const std::string &name : queue) {
            std::cout << name << " ";
        }
        std::cout << std::endl;
    }

};

int main() {
    PatientQueue clinicQueue;

    // Test 1: Add patients
    clinicQueue.addPatient("Alice");
    clinicQueue.addPatient("Bob");
    clinicQueue.addPatient("Charlie");

    std::cout << "Current queue: ";
    clinicQueue.displayQueue();
    std::cout<<std::endl;

    // Test 2: Serve a patient
    std::cout << "Serving patient: " << clinicQueue.servePatient() << std::endl;
    std::cout << "Queue after serving: ";
    clinicQueue.displayQueue();
    std::cout<<std::endl;

    // Test 3: Serve more until the queue is empty
    std::cout << "Serving patient: " << clinicQueue.servePatient() << std::endl;
    std::cout << "Serving patient: " << clinicQueue.servePatient() << std::endl;
    std::cout<<std::endl;

    // Test 4: Check if it is empty
    if (clinicQueue.isEmpty()) {
        std::cout << "No patient in the queue now" << std::endl;
    }
    std::cout << "Serving patient: " << clinicQueue.servePatient() << std::endl;

    return 0;
}