/*1. (Shape Areas) [10 Marks] Implement a simple class hierarchy to represent two-
dimensional (2D) shapes. Your abstract base class, Shape, will define a common
interface through a pure virtual function, calArea(), which will be implemented in the
derived class to compute the area of different 2D shapes. It also has a member variable
called area, and a member function called getArea(). You will then create two derived
classes, Circle and Rectangle, which override the calArea() function to calculate
their specific areas.

Here are the detailed members in each class:
    • Class Shape
        o Attribute: double area
        o Constructor: Shape()
            - It initializes the area as 0.0 and prints out “Shape Constructor!”
        o Destructor: ~Shape()
            - It prints out “Shape Destructor!”
        o A pure virtual function: void calArea()
        o A member function: double getArea()
    • Class Circle (inherits from Shape)
        o Attribute: radius
        o Constructor: Circle(double r)
            - It initializes the radius and prints out “Circle Constructor!”
        o Destructor: ~Circle()
            - It prints out “Circle Destructor!”
        o Function: void calArea()
    • Class Rectangle (inherits from Shape)
        o Attribute: width, height
        o Constructor: Rectangle(double w, double h)
            - It initializes the width and height and prints out “Rectangle Constructor!”
        o Destructor: ~Rectangle()
            - It prints out “Rectangle Destructor!”
        o Function: void calArea()*/

#include <iostream>
#include <cmath>  // For M_PI
#include <type_traits>  // Required for std::is_abstract

// Abstract base class
class Shape {
protected:
    double area;

public:
    // TO-DO: Please implement the constructor, the destructor and the calArea() function here 
    Shape() : area(0.0) {
        std::cout << "Shape Constructor!" << std::endl;
    }
    // Virtual destructor needed
    // without it it will delete an object through a base class pointer would only invoke the bas class destructor.
    virtual ~Shape() {
        std::cout << "Shape Destructor!" << std::endl;
    }
    // Pure virtual function to calculate the area of the shape.
    virtual void calArea() = 0;
    // Member function to get the area
    double getArea() const {
        return area;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    // TO-DO: Please implement the constructor, the destructor and OVERRIDE the calArea() function here 
    Circle (double r): radius(r) {
        std::cout << "Circle Constructor!" << std::endl;
    }
    ~Circle () {
        std::cout << "Circle Destructor!" << std::endl;
    }

    // Overriding calArea() to calculate the area of a circle
    void calArea() override {
        area = M_PI * radius * radius;
    }

};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    // TO-DO: Please implement the constructor, the destructor and OVERRIDE the calArea() function here 
    Rectangle (double w, double h) : width(w), height(h) {
        std::cout << "Rectangle Constructor!" << std::endl;
    }
    ~Rectangle() {
        std::cout << "Rectangle Destructor!" << std::endl;
    }
    // Overriding calArea() to calculate the area of a rectangle
    void calArea() override {
        area = width * height;
    }

};


int main() {
    std::cout << std::boolalpha;
    std::cout << "Is Shape abstract? " << std::is_abstract<Shape>::value << std::endl<< std::endl;
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);
    std::cout<<std::endl;

    shape1->calArea();
    shape2->calArea();

    std::cout << "Area of Circle: " << shape1->getArea() << std::endl;
    std::cout << "Area of Rectangle: " << shape2->getArea() << std::endl;
    std::cout<<std::endl;

    // Clean up
    delete shape1;
    delete shape2;

    return 0;
}
