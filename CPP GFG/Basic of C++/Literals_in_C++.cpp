

/*a literal is a notation for representing a fixed value in the source code. 
Literals can represent various types of data, such as integers, floating-point numbers, characters, strings, and boolean values.*/

// 1.Integer Literals
// 2.Floating-Point Literals
// 3.Character Literals
// 4.String Literals
// 5.Boolean Literals
// 6.Pointer Literals
// Raw String Literals
// Digit Seperator
// 7.User-Defined Literals

// Literal Types and Conversions:
// Integral Promotion and Conversion:
// Literal Constants and constexpr:
// Numeric Limits:
// Literal Operators:
// Dependent Types and Literals (C++20 and later):
// Literal Operators:
// Literal Type Deduction:
// Implicit Conversions and Literal Types:
// Limits and Range of Literals:


// ''''''''''''''''''''''''''''''''''''''''''''''''''Integer Literals''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
/*Integer literals in C++ are constants that represent whole numbers without the fractional or decimal part. 
They can be positive or negative and can have different bases such as decimal, octal, or hexadecimal.*/

/*If no suffix is provided, the type of the integer literal is determined based on its value and context.
Suffixes can be combined to specify both the type and sign, e.g., 123ull.
Prefixes determine the base of the integer literal (octal, hexadecimal, or binary).*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // // '''''''''''''''''''''''''''''Integer Prefix - dec, bin, oct, hex'''''''''''''''''''''''''''''''''''''''
    // // Decimal Integer Literals --> To specify a decimal integral literal, begin the specification with a nonzero digit.
    // int decimal_literal = 10; 

    // // Binary Literal --> A binary literal can be specified by the use of the 0B or 0b prefix, followed by a sequence of 1's and 0's:
    // auto x = 0B001101 ; // int 13
    // auto y = 0b001101; // int 13
    // cout << x << " " << y << endl;

    // /* Octal Integer Literals --> To specify an octal integral literal, begin the specification with 0, followed by a sequence of digits in the range 0 through 7. The digits 8 and 9 are errors in specifying an octal literal.*/
    // int octal_literal = 01234567; // 01234567 = 342391
    // // int octal_literal_2 = 0123489;
    // int octal_literal_3 = 0'123'456'7; // 0'123'456 = 342391
    // cout << octal_literal << endl; // 342391
    // cout << (01234567 == 342391) << endl; // 1
    // cout << octal_literal_3 << endl; // 342391

    // // Hexadecimal Integer Literals
    // /*To specify a hexadecimal integral literal, begin the specification with 0x or 0X (the case of the "x" doesn't matter), 
    // followed by a sequence of digits in the range 0 through 9 and a (or A) through f (or F). 
    // Hexadecimal digits a (or A) through f (or F) represent values in the range 10 through 15.*/

    // int hexadecimal_literal_1 = 0x3fff;   // Hexadecimal literal
    // int hexadecimal_literal_2= 0X3FFF;   // Equal to i
    // cout << hexadecimal_literal_1 << " " << hexadecimal_literal_2 << endl; // 16383 16383

    // '''''''''''''''''''''''''''Integer Suffix'''''''''''''''''''''''''''''''''''''''
    int num = 25;
    long int num_2 = 25l; // 4 bytes

    return 0;
}