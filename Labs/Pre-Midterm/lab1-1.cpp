#include <iostream>

class Box {
    private:
        double length; // Length of a box
        double width;  // Width of a box
        double height; // Height of a box

    public:
        // Constructor to initialize the box
        Box(double len, double wid, double hgt) {
            length = len;
            width = wid;
            height = hgt;
        }

        // Member function to calculate volume of the box
        double calculateVolume() {
            return length * width * height;
        }

        // Function to display the dimensions of the box
        void displayDimensions() {
            std::cout << "Length: " << length 
                      << ", Width: " << width 
                      << ", Height: " << height << std::endl;
        }
};

int main() {
    Box box1(3.0, 4.0, 5.0);
    box1.displayDimensions();
    std::cout << "Volume of box1: " << box1.calculateVolume() << std::endl;
    return 0;
}