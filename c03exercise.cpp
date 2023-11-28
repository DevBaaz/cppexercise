#include <iostream>
#include <format>
using namespace std;
// using std::cout;

int main() {
/* exercise 3-1. Create a program that prompts for input of an integer and store it as an int. invert all the bits in this value and store the result as an int. next, 
convert this inverted value to an unsigned int, and store it. output the original value, the unsigned value with the bits inverted, and that same inverted value plus 1,
each in binary representation and on one line. on the next line, output the original value, the signed inverted value, and the signed inverted value plus 1, 
each in decimal representation. these two lines should be formatted such that they look like a table, where the values in the same column are centered. you can add column 
headers as well if you like. all binary values should have leading zeros so they are all 32 bits long (assuming int values are 32 bits, which they usually are).
note: Flipping all bits and adding one—ring any bells? Can you perhaps already deduce what the decimal output will be before you run the program? */
int input {};
cout << format("Input a random integer: ");
cin >> input;
int inverted_input_bits = ~input;
unsigned int unsigned_inverted_input_bits = static_cast<unsigned int>(inverted_input_bits);
cout << format("Original input: {:^032b}, Unsigned inverted input bits {:^032b}, Inverted input bits + 1: {:^032b}\n", input, unsigned_inverted_input_bits, unsigned_inverted_input_bits + 1);
cout << format("Original input: {:^d}, Signed inverted input bits: {:^d}, Signed inverted input bits + 1: {:^d}\n", input, inverted_input_bits, inverted_input_bits + 1);
/*
Input a random integer: 5
Original input:               101               , Unsigned inverted input bits 11111111111111111111111111111010, Inverted input bits + 1: 11111111111111111111111111111011
Original input: 5, Signed inverted input bits: -6, Signed inverted input bits + 1: -5
*/

/*exercise 3-2. Write a program to calculate how many square boxes can be contained in a single layer on a rectangular shelf, with no overhang. the dimensions of the shelf 
in feet and the dimensions of a side of the box in inches are read from the keyboard. use variables of type double for the length and depth of the shelf and type int for 
the length of the side of a box. define and initialize an integer constant to convert from feet to inches (1 foot equals 12 inches). Calculate the number of boxes that the 
shelf can hold in a single layer of type long and output the result. */
double shelf_length {}, shelf_depth {};
int box_length {};
cout << format("Input the length of the shelf(in feet), the depth of the shelf(in feet), the side of the box(in inches) in spaces-seperated format : ");
cin >> shelf_length >> shelf_depth >> box_length;
cout << format("You can fit {:.0f} box(es) in the shelf\n", ((shelf_depth * shelf_length) / (box_length / 12)));
/*
Input the length of the shelf(in feet), the depth of the shelf(in feet), the side of the box(in inches) in spaces-seperated format : 5 6 66
You can fit 6 box(es) in the shelf
*/

/*
exercise 3-3. Without running it, can you work out what the following code snippet will produce
as output?
auto k {430u};
auto j {(k >> 4) & ~(~0u << 3)};
std::cout << j << std::endl;*/
/*
k >> 4                     01110
~(~0u << 3)                01111
(k >> 4) & ~(~0u << 3)     01110
*/


/*exercise 3-4. Write a program to read four characters from the keyboard and pack them into a single integer variable. display the value of this variable as hexadecimal.
unpack the four bytes of the variable and output them in reverse order, with the low-order byte first. */
char char_1 {}, char_2 {}, char_3 {}, char_4 {};
int packed_char {};
cout << format("Input 4 characters in space seperated format : ");
cin >> char_1 >> char_2 >> char_3 >> char_4;
packed_char = char_1 + char_2 + char_3 + char_4;
cout << format("The integer value of the packed characters you entered is {:x}\n", packed_char);
cout << format("The output of the four characters you entered in reverse order are {}, {}, {} & {}.\n", char_4, char_3, char_2, char_1);
/*
The integer value of the packed characters you entered is 18a
The output of the four characters you entered in reverse order are d, c, b & a.
*/

/*exercise 3-5. Write a program that defines an enumeration of type Color where the enumerators are red, green, yellow, purple, blue, black, and white. define the type for
enumerators as an unsigned integer type and arrange for the integer value of each enumerator to be the rgB combination of the color it represents (you can easily find the 
hexadecimal rgB encoding of any color online). Create variables of type Color initialized with enumerators for yellow, purple, and green. access the enumerator value and 
extract and output the rgB components as separate values. */

enum class Color {Red=0xFF0000, Green=0X008000, Yellow=0XFFFF00, Purple=0X800080, Blue=0X0000FF, Black=0X000000, White=0XFFFFFF};
cout << format("Yellow: #{:x}\n", static_cast<int>(Color::Yellow));//Yellow: #ffff00
cout << format("Purple: #{:x}\n", static_cast<int>(Color::Purple));//Purple: #800080
cout << format("Green: #{:06x}\n", static_cast<int>(Color::Green));//Green: #008000
}