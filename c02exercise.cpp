#include <iostream> 
#include <format> 
#include <numbers> 
#include <cmath> 

int main() {
    /*exercise 2-1. Create a program that converts inches to feet and inches. In case you’re unfamiliar with imperial units: 1 foot equals 12 inches. 
    an input of 77 inches, for instance,should thus produce an output of 6 feet and 5 inches. prompt the user to enter an integer value 
    corresponding to the number of inches and then make the conversion and output the result*/
    int inches {};
    std::cout << std::format("Input the nummber of inches you want to convert");
    std::cin >> inches; //66
    std::cout << std::format("The result is {} feet and {} inches\n", inches/12, inches%12);//The result is 5 feet and 6 inches

    /*exercise 2-2. Write a program that will compute the area of a circle. the program should prompt for the radius of the circle to be entered from the keyboard.
    Calculate the area using the formula area = pi * radius * radius, and then display the result.*/
    int radius {};
    std::cout << std::format("Enter the raduis of the circle you want to calculate its area");
    std::cin >> radius;//Enter the raduis of the circle you want to calculate its area 4
    std::cout << std::format("The area of the circle is {:.2f}\n", std::numbers::pi * radius * radius);//The area of the circle is 50.27

    /*exercise 2-3. For your birthday you’ve been given a long tape measure and an instrument that measures angles (the angle between the horizontal and a line to 
    the top of a tree, for instance). If you know the distance, d, you are from a tree, and the height, h, of your eye when peering into your angle-measuring device, 
    you can calculate the height of the tree with the formula h + d*tan(angle). Create a program to read h in inches, d in feet and inches, and angle in
    degrees from the keyboard, and output the height of the tree in feet.*/
    double h {}, angle {};
    int d_feet {}, d_inches {};
    std::cout << std::format("Input the value of your eye height in inches, your feet value of your distance from the tree, the remaining inches and the angle  of your eye in space sperated format");
    std::cin >> h >> d_feet >> d_inches >> angle;//66 5 6 0
    std::cout << std::format("The height of the tree is {:.1f} feet.\n", (h/12) + (static_cast<double>(d_feet + (d_inches / 12)) * std::tan(static_cast<double>(angle))));//The height of the tree is 5.5 feet

    /*exercise 2-4. your body mass index (BmI) is your weight, w, in kilograms divided by the square of your height, h, in meters (w/(h*h)). Write a program to calculate
    the BmI from a weight entered in pounds and a height entered in feet and inches. a kilogram is 2.2 pounds, and a foot is 0.3048 meters*/
    double pounds {}, h_feet {}, h_inches {};
    std::cout << std::format("To get your BmI, enter your weight in pounds, height in feet and remaining inches in space-seperated format");
    std::cin >> pounds >> h_feet >> h_inches;
    std::cout << std::format("Your BmI is {}\n", (pounds/ 2.2)/((d_feet + (d_inches / 12)) * 0.3048));// Your BmI is 26.843235504652824  

    /*exercise 2-5. Knowing your BmI with a precision higher than one decimal digit after the decimal point is, well, pointless. adjust the program of exercise 2-4 accordingly*/
    std::cout << std::format("Your BmI is {:.2}\n", (pounds/ 2.2)/((d_feet + (d_inches / 12)) * 0.3048));// Your BmI is 26

    /*exercise 2-6. reproduce table 2-6 with a program, without hard-coding the numeric values or filling spaces, of course. If your command-line interface does not 
    support unicode characters (perfectly possible), you can replace π with “pi” and omit φ (the greek letter “phi,” in case you were wondering).*/
    std::cout << std::format("{:30}{:35}{:20}\n", "Constant", "Description", "Approximate Value");
    std::cout << std::format("{:30}{:35}{:20}\n", "std::numbers::e", "The base of the natural logarithm", "2.71828...");
    std::cout << std::format("{:30}{:35}{:20}\n", "std::numbers::pi", "pi", "3.14159...");
    std::cout << std::format("{:30}{:35}{:20}\n", "std::numbers::sqrt2", "Square root  of 2", "1.41421...");
    std::cout << std::format("{:30}{:35}{:20}\n", "std::numbers::phi", "The golden ratio constant ", "1.618...");
    /*
    Constant            Description                        Approximate Value
    std::numbers::e     The base of the natural logarithm  2.71828...
    std::numbers::pi    pi                                 3.14159...
    std::numbers::sqrt2 Square root  of 2                  1.41421...
    std::numbers::phi   The golden ratio constant          1.618...
    */

    /*exercise 2-7. add a row to your table of exercise 2-6 for sin(π/4), showing the result with exponent notation and five digits after the decimal point. make sure the
    exponent component begins with a capital e, not a lowercase e*/
    std::cout << std::format("{:30}{:35}{:.4E}\n", "std::sin(std::numbers::pi/4)", "sin(pi/4)", std::sin(std::numbers::pi/4));
    /*
    std::sin(std::numbers::pi/4)  sin(pi/4)                          7.0711E-01
    */
}