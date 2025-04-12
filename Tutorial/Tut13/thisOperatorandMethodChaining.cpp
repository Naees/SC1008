/*3. (this Operator and Method Chaining) You are asked to implement a class called Pen
to manage the records of pens in an online shopping platform. It allows the setting of the
color and price of a pen, as well as display them. Below are the detailed members of this
class.

    • Private members
        o std::string color: the color of the pen
        o double price: the price of the pen
    • Public members
        o Constructor that initializes the color to black and price to 10
        o setColor(), the method to set the color of the pen
        o setPrice(), the method to set the price of the pen
        o display(), the method to display the pen details*/

        #include <iostream>
        #include <string>
        
        class Pen {
        private:
            std::string color;
            double price;
        
        public:
            Pen(std::string initialColor, double initialPrice) {
                color = initialColor;
                price = initialPrice;
            }
        
            Pen& setColor(std::string newColor) {
                // TO-DO: Write your code here
                color = newColor;
                return *this;
        
        
            }
        
            Pen& setPrice(double newPrice) {
                // TO-DO: Write your code here
                price = newPrice;
                return *this;
            }
        
            void display() const {
                // TO-DO: Write your code here
                std::cout << "Pen color: " << color << std::endl;
                std::cout << "Price: $" << price << std::endl;
            }
        };
        
        int main() {
            // Creating a Pen object and using method chaining
            Pen myPen("Blue", 1.5);
            std::cout<< "The original color and price of the pen: " << std::endl;
            myPen.display();
        
            std::cout<< std::endl<<"The color and price of the pen after setting: " << std::endl;
            myPen.setColor("Red")
                 .setPrice(2.0)
                 .display();
        
            return 0;
        }
        