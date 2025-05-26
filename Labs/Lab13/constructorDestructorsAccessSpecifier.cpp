/*1. (Class Constructors, Destructors and Access Specifier) [10 marks] 
Suppose you are asked to implement a class called Product to manage the information of different
products in an online shopping platform. Below are the detailed members of the class

Product:
• Private Members:
    o string name: the name of the product,
    o double price: the price of the product.
• Public Members:
    o Constructor that initializes name and price, and print out necessary information.
    o Destructor that prints a message when an object is deleted.
    o Getters:
        § getName() that returns the private attribute name.
        § getPrice() that returns the private attribute price.
    o Setter:
        § setPrice(double newPrice) that updates price but only if non-negative
*/

#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;

public:
    // Constructor
    Product(string productName, double productPrice) {
        //TO-DO: Write Your Code Here
        name = productName;
        price = productPrice;
        cout << "Product created: " << name << " ($" << price << ")" << endl;

    }

    // Destructor
    //TO-DO: Write Your Code Here
    ~Product() {
        cout << "Product deleted: " << name << endl;
    }

    // Getters
    //TO-DO: Write Your Code Here
    string getName() const {
        return name;
    }

    double getPrice() const {
        return price;
    }


    // Setter for price (ensures non-negative value)
    void setPrice(double newPrice) {
        //TO-DO: Write Your Code Here
        if (newPrice >= 0){
            price = newPrice;
        }else {
            cout << "Error: Price input is negative" << endl;
        }

    }
};


int main() {
    // Creating Product objects
    Product product1("Laptop", 999.99);
    Product product2("Phone", 499.50);

    // Displaying product details
    cout<<endl;
    cout << "The name of Product 1: " << product1.getName() << endl;
    cout<< "The price of Product 1: $" << product1.getPrice() << endl;
    cout<<endl;

    // Modifying product price with setter
    product2.setPrice(550.00);
    cout << "Updated Price of Product 2: $" << product2.getPrice() << endl;

    return 0;
}
