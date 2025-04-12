/*4. (Friend Function) You are asked to develop a Box class that allows an external
function to access and display the private dimensions (length, width, and
height) of a box. Since these attributes are private, they cannot be accessed directly
from outside the class. Your task is to:

    - Create a Box class with private members: length, width, and height.
    - Declare and define a friend function displayDimensions() that can access
    private members and display them.
    - Define a member function calculateVolume() that calculates the volume of
    the box.

Below are the details of the members of the class Box:
    • Private Members:
        o double length: the length of the box
        o double width: the width of the box
        o double height: the height of the box
    • Public Members:
        o A constructor function that initializes length, width, and height.
        o A member function calculateVolume() that calculates the volume
        o Friend Function displayDimensions(const Box& b) that accesses and
        prints private attributes*/

#include <iostream>

class Box {
private:
    double length;
    double width;
    double height;

public:
    // Constructor to initialize the box dimensions
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Member function that can access the private members
    void calculateVolume() const {
        // Caclulate and display the volume of the box
        // TODO: Write your code here
        double volume = length * width * height;
        std::cout << "\nBox Volume: " << volume << " cubic units" << std::endl;


    }

    // Declare a friend function to display private members
    // TODO: Write your code here
    friend void displayDimensions(const Box &b);

};


// Define the friend function (that can access private members of Box)
// TODO: Write your code here
void displayDimensions(const Box &b){
    std::cout << "Box Dimension: " << std::endl;
    std::cout << "Length: " << b.length << std::endl;
    std::cout << "Width: " << b.width << std::endl;
    std::cout << "Height: " << b.height << std::endl;
}

int main() {
    // Creating a Box object
    Box myBox(5.0, 3.0, 2.0);

    // Friend function accessing private data
    displayDimensions(myBox);

    // Member function accessing private data
    myBox.calculateVolume();

    return 0;
}