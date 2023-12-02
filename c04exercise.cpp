#include <iostream>
#include <format>
using namespace std;

int main() {
    /*exercise 4-1. Write a program that prompts for two integers to be entered and then uses an if-else statement to output a message that states 
    whether the integers are the same.*/
    int first_1 {}, second_1 {};
    cout << "Enter two space-sperated integers: ";//Enter two space-sperated integers: 5 5 | //Enter two space-sperated integers: 5 6
    cin >> first_1 >> second_1;
    cout << format("The first and second integers are {}.\n", first_1 == second_1 ? "thesamme" : "not thesame");//The first and second integers are thesamme. | The first and second integers are not thesame.

    /*exercise 4-2. Write another program that prompts for two integers to be entered. this time, any negative number or zero is to be rejected. next, check whether one of
    the (strictly positive) numbers is an exact multiple of the other. For example, 63 is a multiple of 1, 3, 7, 9, 21, or 63. note that the user should be allowed to enter
    the numbers in any order. that is, it does not matter whether the user enters the largest number first or the smaller one; both should work correctly!*/
    unsigned first_2 {}, second_2 {}, zero {0};
    cout << "Enter two space-sperated positive(strictly) integers: "; //Enter two space-sperated positive(strictly) integers: 4 16
    cin >> first_2 >> second_2;
    if (first_2 && second_2 < 0) 
        cout << "Inavlid integer, you entered a negative integer" << endl;
    else
        cout << format("Your first integer is {} multiple of your second integer.\n", ((first_2 % second_2 == 0)) ? "a" : "not");//Your first integer is not multiple of your second integer.
        cout << format("Your second integer is {} multiple of your first integer.\n", ((second_2 % first_2 == 0)) ? "a" : "not");//Your second integer is a multiple of your first integer.
    
    /*exercise 4-3. Create a program that prompts for input of a number (nonintegral numbers are allowed) between 1 and 100. Use a nested if, first to verify that the number is within this
    range and then, if it is, to determine whether it is greater than, less than, or equal to 50. the program should output information about what was found. */
    int input_1 {};
    cout << "Input a integer: ";// Input a integer: f
    cin >> input_1;
    if (input_1 < 0)
        cout << format ("Your integer is less that 0. \n");
    else if (input_1 > 100)
        cout << format("Your input is greater than 100\n");
    else
        cout << format("Your input is {} than 50\n", input_1 < 50 ? "less than" : "greater than"); //Your input is less than than 50

    /*exercise 4-4. it’s time to make good on a promise. somewhere in this chapter we said we’d look for someone “who is older than 21, younger than 35, is female, has a 
    bachelor’s or master’s degree, is unmarried, and speaks hindi or Urdu.” Write a program that prompts the user for these qualifications and then outputs whether they 
    qualify for these very specific requirements. to this end, you should define an integer variable age, a character variable gender (to hold 'm' for male, 'f' for female,
    etc.), a variable degree of an enumeration type AcademicDegree (possible values: none, associate, bachelor, professional, master, doctor), 
    and three Boolean variables: married, speaksHindi, and speaksUrdu. emulate a trivial online job interview and query your applicant for input on all these variables. 
    people who enter invalid values do not qualify, of course, and should be ruled out as early as possible (that is, immediately after entering any invalid value; ruling 
    them out precognitively prior to entering invalid values, sadly, is not possible yet in standard C++). */
    int age {};; char gender {}, qualification {}, relaionship {}, language {};
    
    cout << "Please answer the following appropaitely to complete your interview proccess\n" << "Enter your age: ";
    cin >> age;

    if ((age > 21) && (age < 35)) {
        cout << "What is your gender, enter one of the following: f for female, m for male: ";
        cin >> gender;
    }    

    if (gender == 'f') {
        cout << "What is your qualification, enter one of the following: n for none, a for associate, b for bachelor, p for professional, m for master, d for doctor: ";
        cin >> qualification;
    }
   

    if ((qualification == 'm') || (qualification == 'b')) {
        cout << "What is your relationship status, enter one of the following: s for single, m for married, u for unmarried, & o for others: ";
        cin >> relaionship;
    }
    

    if (relaionship == 'u') {
        cout << "Which language are you fluent in, enter one of the following: h for hindi, u for urdu, e for english, f for french & o for others: ";
        cin >> language;
    }

    if ((language == 'h') || (language == 'u'))
        cout << "Congratulations, you have been hired, please follow the mail we have sent you!!!" << endl;
    else 
        cout << "We are sorry, your answer is not in line with our requirement. We wish you luck in your future Applications!!!" << endl;

    /*exercise 4-5. add some code to the end of the main() function of Ex4_07.cpp to print an additional message. if you have exactly one mouse, output a message of the
    form “it is a brown/white mouse.” otherwise, if you have multiple mice, compose a grammatically correct message of the form “of these mice, n is a/are brown mouse/mice.”
    if you have no mice, no new message needs to be printed. Use an appropriate mixture of conditional operators and if/else statements */
    int brown {}, white {};
    cout << "Input a space-seperated integer show how many brown and white mice you have respectively: ";//Input a space-seperated integer show how many brown and white mice you have respectively: 1 0 |  4 5
    cin >>  brown >> white;

    cout << format("You have {} {}.\n", brown + white, brown + white > 1 ? "mice" : "mouse");//You have 1 mouse.You have 1 mouse. | You have 9 mice.

    if (brown + white > 0)
        if ((brown + white) == 1) cout << format("It is a {} mice.\n", brown == 1 ? "brown" : "white" );//You have 1 mouse.
        else cout << format("Of these mice, {} {} and {} is a white mice.", brown, brown > 1 ? "are brown mice" : "is a brown mouse", white, white > 1 ? "are white mice" : "is a white mouse");//Of these mice, 4 are brown mice and 5 is a white mice.

    /*exercise 4-6. Write a program that determines, using only the conditional operator, if an integer that is entered has a value that is 20 or less, is greater than 20 
    but not greater than 30, is greater than 30 but not exceeding 100, or is greater than 100. */
    int randInt {};
    cout << "\nEnter an integer: ";
    cin >> randInt;
    cout << format("Your integer is {}.\n", (randInt <= 20) ? "less than or equal to 20" :"greater than 20");
    cout << format("Your integer is {}.\n", (randInt > 20) && (randInt < 30) ? "greater than 20 but not greater than 30" :"less than 20 or greater than 30");
    cout << format("Your integer is {}.\n", (randInt > 30) && (randInt <= 100) ? "greater than 30 but not exceeding 100" :"less than 30 or greater than 100");

    /*exercise 4-7. implement a program that prompts for the input of a letter. Use a library function to determine whether the letter is a vowel and whether it is
    lowercase or not, and output the result. Finally, output the lowercase letter together with its character code as a binary value. as a bonus exercise, you could try to
    do the latter without the use of std::format()?
    hint: even though C++ supports binary integral literals (of the form 0b11001010; see Chapter 2), C++ streams do not support outputting integral values in binary format.
    Besides the default decimal formatting, they only support hexadecimal and octal formatting (for std::cout, for instance, you can use the std::hex and std::oct output 
    manipulators defined in <ios>). so, to output a character in binary format without std::format(), you’ll have to write some code yourself. it shouldn’t be too hard, 
    though: a char only has eight bits, remember? You can just stream these bits one by one, even without knowing loops (see the next chapter). perhaps binary integer 
    literals can be helpful—why else would we have mentioned them at the start of this hint?*/
    char letter{};
    cout << "Input a letter: ";
    cin >> letter;

    switch (letter) {
        case 'A': case 'E': case 'I': case 'O': case 'U': case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << format("You enetered a {} vowel character.\n", islower(letter) ? "lowercase" : "uppercase");
            cout << format("{:} => binary: {:b}.\n", static_cast<char>(tolower(letter)), tolower(letter));
            break;
        default:
            cout << "You enter a non-vowel character." << endl;
    }



    /*exercise 4-8. Create a program that prompts the user to enter an amount of money between $0 and $10 (decimal places allowed). any other value is to be rejected 
    politely. Determine how many quarters (25c), dimes (10c), nickels (5c), and pennies (1c) are needed to make up that amount. For our non-american readers, one dollar ($)
    equals 100 cents (c). output this information to the screen and ensure that the output makes grammatical sense (for example, if you need only one dime, then the output 
    should be “1 dime” and not “1 dimes”)*/
    double amount {};
    cout << "Enter an amount between $0 - $10: $";
    cin >> amount;

    if ((amount >= 0.0) && (amount <= 10.0)) {
        cout << format("You need {:.1f} quaters to reach that amount.\n", (amount*100)/25);
        cout << format("You need {:.1f} dimes to reach that amount.\n", (amount*100)/10);
        cout << format("You need {:.1f} nickels to reach that amount.\n", (amount*100)/5);
        cout << format("You need {:.1f} pennies to reach that amount.\n", (amount*100)/1);
    } else {
        cout << "You entered an invalid input." << endl;
    }
}