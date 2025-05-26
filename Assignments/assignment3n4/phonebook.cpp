/*2. (Phonebook) [10 Marks] You are creating a simple phone book application to map a
person’s name (string) to their phone number (string). Users should be able to add
entries, remove entries, and look up phone numbers by name. Create a class
PhoneBook by using STL container map, which has the following members:

    o Private Members:
    o map<string,string> contacts: stores name -> phoneNumber pairs.
    o Public Members:
    o A constructor that initializes an empty map.
    o A function addContact(const string &name, const string &number) that adds or updates a contact in the map.
    o A function removeContact(const string &name) that removes the contact if it exists.
    o A function findContact(const string &name) that returns the phone number if the contact exists, or a reminder message “Not Found!” if it does not.
    o A function displayAllContacts() that prints every name -> phoneNumber pair in the map*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

class PhoneBook {
private:
    map<string, string> contacts; // Maps names to phone numbers

public:
    // TO-DO: Implement the constructor
    PhoneBook() {
        // The map is automatically initialized empty
    };

    // TO-DO: Implement addContact(const string &name, const string &number) 
    void addContact(const string&name, const string &number) {
        contacts[name] = number;
    }


    // TO-DO: Implement removeContact(const string &name) 
    void removeContact(const string &name) {
        contacts.erase(name);
    }


    // TO-DO: Implement findContact(const string &name) 
    string findContact(const string &name) {
        map<string, string>::iterator it;
        it = contacts.find(name);
        if (it != contacts.end()) {
            return it->second;
        } else {
            return "Not Found!";
        }    
    }

    // TO-DO: Implement displayAllContacts()
    void displayAllContacts() {
        // Iterate over the map and print each contact
        map<string, string>::iterator it;
        for (it = contacts.begin(); it != contacts.end(); it++) {
            std::cout << it->first << " -> " << it->second << std::endl;
        }
    }

};

int main() {
    PhoneBook pb;
    pb.addContact("Alice", "12345678");
    pb.addContact("Bob", "23456789");
    pb.addContact("Charlie", "34567890");

    // Display contacts
    cout << "All Contacts:" << endl;
    pb.displayAllContacts();
    cout<<endl;

    // Find a contact
    string searchName = "Charlie";
    cout << "The contact number of " << searchName << ": "
         << pb.findContact(searchName) << endl <<endl;

    searchName = "David";
    cout << "The contact number of " << searchName << ": "
            << pb.findContact(searchName) << endl <<endl;

    // Remove a contact
    pb.removeContact("Bob");
    cout << "After removing Bob, contacts are:" << endl;
    pb.displayAllContacts();

    return 0;
}
