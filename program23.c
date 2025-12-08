#include <iostream> 
#include <cmath>   

int main() {
    double radius; 
    const double PI = M_PI; 
    
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius; 

    
    if (std::cin.fail() || radius < 0) {
        std::cerr << "Invalid input. Please enter a non-negative numeric value for the radius." << std::endl;
        return 1; 
    }

    
    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    
    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;

    return 0; 
}