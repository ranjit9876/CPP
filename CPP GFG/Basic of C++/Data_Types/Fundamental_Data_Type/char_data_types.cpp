/*char data type is used to store a single character. It's the smallest integer type in terms of storage size, typically occupying 1 byte of memory. It can store both characters and small integer values.*/
/*Key Points:
1.Character Representation: char is commonly used to store ASCII characters, which include letters, digits, punctuation marks, and control characters. For example, 'A', '7', '$', '\n', etc.
2.Conversion to Integers: In C++, char is considered an integer type. You can perform arithmetic operations on char variables, and they'll be implicitly converted to integer values.
char myChar = 'A';
int charValue = myChar; // implicit conversion from char to int
3.String Handling: In C++, char is often used in conjunction with arrays to represent strings. A string in C++ is essentially an array of characters terminated by a null character '\0'.
char myString[] = "Hello";
4.C-Style String Functions: C++ provides a set of functions in the <cstring> header for working with C-style strings (arrays of char). Examples include strlen, strcpy, strcat, etc.
#include <cstring>
char str1[] = "Hello";
char str2[] = "World";
strcat(str1, str2); // Concatenates str2 to str1
*/

// // ''''''''''''''''''''''''''''''''''''''''''''''''''''''''1.Basic Usage''''''''''''''''''''''''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     cout << "Hello, World!" << endl;
//     // Declaring a char data variable
//     char myChar = 'A';

//     // Output the character
//     cout << "Character: " << myChar << endl;

//     // Output the ASCII value of character
//     cout << "ASCII value: " << static_cast<int>(myChar) << endl; // 65

//     // Using Arithmetic Operations with char
//     char nextChar = myChar + 1;
//     cout << "Next character: " << nextChar << endl;                // B
//     cout << "ASCII value: " << static_cast<int>(nextChar) << endl; // 66

//     // Using char in conditions
//     if (myChar >= 'A' && myChar <= 'Z')
//     {
//         cout << "Upper Case Character" << endl;
//     }
//     else if (myChar >= 'a' && myChar <= 'z')
//     {
//         cout << "Lower Case Character" << endl;
//     }
//     else
//     {
//         cout << "Not a Character" << endl;
//     }

//     // Using Char in Loop
//     for (char ch = 'a'; ch < 'z'; ch++)
//     {
//         cout << ch << " ";
//     }
//     cout << endl;

//     // // Inputing Character
//     // char input_char;
//     // cout << "Input a Character" << endl;
//     // cin >> input_char;
//     // cout << "You Entered Character: " << input_char << endl;

//     // Looping through char Arrays
//     char myString[] = "Hello";
//     for (int i = 0; myString[i] != '\0'; i++)
//     {
//         cout << myString[i] << " ";
//     }
//     cout << endl;

//     // Char as a part of String
//     const char *greeting = "Hello, world!";
//     cout << greeting << endl;

//     // Using char with array
//     char charArray[] = {'H', 'e', 'l', 'l', 'o', '!'};
//     cout << charArray << endl;

//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''''Character Set'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
/*Character types are integer types used for a character representation.*/
// /*Basic Source Character Set: This set includes the characters required to write C++ source code. It typically includes the following:

// Letters: A to Z (both uppercase and lowercase)
// Digits: 0 to 9
// Special Characters: ~ ! @ # $ % ^ & * ( ) - + = { } [ ] | \ : ; " ' < > , . ? /
// Space (whitespace)
// Escape Sequences: such as \n for newline, \t for tab, etc.*/

// // ''''''''''''''''''''''''''''''''''ASCII Characters:- Printable(32 - 126)''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // 1.With Decimal System:
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     /*Characters: ! " # $ % & ' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ? @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//     [ \ ] ^ _ ` a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~*/
//     for (char ch = 32; ch < 127; ch++)
//     {
//         cout << ch << " ";
//     }
//     cout << endl;

//     return 0;
// }

// // '''''''''''''''''''''''2. With Binary System:
// // '''''''''''Printable Character
// #include <iostream>
// using namespace std;

// int main()
// {

//     // // Uppercase letters
//     // char uppercaseLetterA = 0b01000001; // 'A' in binary

//     // // Lowercase letters
//     // char lowercaseLetterA = 0b01100001; // 'a' in binary

//     // // Digits
//     // char digit5 = 0b00110101; // '5' in binary

//     // // Special characters
//     // char dollarSign = 0b00100100; // '$' in binary

//     // // Space character
//     // char space = 0b00100000; // Space in binary

//     // cout << uppercaseLetterA << " " << lowercaseLetterA << " " << digit5 << " " << dollarSign << " " << space << endl;

//     // '''''''''''''

//     // Iterate over the ASCII printable characters (32 to 126)
//     for (int i = 32; i <= 126; ++i)
//     {
//         char character = static_cast<char>(i);
//         std::cout << "Character: " << character << ", Binary: ";

//         // Convert character to binary representation (8 bits)
//         for (int j = 7; j >= 0; --j)
//         {
//             cout << ((character >> j) & 1);
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // '''''''''''''''Control Character
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     char newline = 0b00001010; // new line in binary
//     char tab = 0b00001001; // tab in binary
//     char carriageReturn = 0b00001101; // carriage return in binary
//     cout << "Hello " << newline << tab << "world" << endl;
//     cout << "C++ Programming..." << endl;
//     cout << "Goodbye " << carriageReturn << "John" << endl; 

//     return 0;
// }

// // ''''''''''''''''''''''Escape Sequence
// #include <iostream>
// using namespace std;

// int main() {
//     // Escape sequences
//     char backslash = 0b00101100; // Backslash in binary
//     char doubleQuote = 0b00100010; // Double quote in binary
//     char singleQuote = 0b00100111; // Single quote in binary

//     cout << "This is a backslash: " << backslash << endl;
//     cout << "This is a double quote: " << doubleQuote << endl;
//     cout << "This is a single quote: " << singleQuote << endl;

//     return 0;
// }


// // ''''''''''''''''''''''''''''''''''''''List of All Topics of Character Operations''''''''''''''''''''''''''''''''''''''''''''
// #include <iostream>
// #include <cctype>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     // 1.Checking if a Character is Uppercase
//     char myChar_1 = 'A';
//     if (std::isupper(myChar_1)){
//         cout << "Character is Uppercase" << endl;
//     }
//     else{
//         cout << "Character is not Uppercase" << endl;
//     }

//     // 2.Checking if a Character is LowerCase
//     char myChar_2 = 'a';
//     if (std::islower(myChar_2)){
//         cout << "Character is LowerCase" << endl;
//     }

//     // 3.Chacking if a Character is Digit
//     char myChar_3 = '5';
//     if (isdigit(myChar_3)){
//         cout << "Character is digit" << endl;
//     }

//     // 4.Checking if a Character is Aplhabet(Letter)
//     char myChar_4 = 'A';
//     if (isalpha(myChar_4)){
//         cout << "Character is Aplhabet" << endl;
//     }

//     // 5.Checking if a Character is Alphanumeric (Letter or Digit)
//     char myChar_5 = 'A';
//     if (std::isalnum(myChar_5)){
//         cout << "Character is alphanumeric" << endl;
//     }

//     // 6.Cheking if a Character is Whitespace
//     char myChar_6 = ' ';
//     if (std::isspace(myChar_6)){
//         cout << "Character is Whitespace" << endl;
//     }
//     // 7.Checking if a character is Punctuation
//     char myChar_7 = '.';
//     if (ispunct(myChar_7)){
//         cout << "Character is punctuation" << endl;
//     }

//     // 8. Checks if a character is a hexadecimal digit (0-9, A-F, a-f).
//     char myChar_8 = 'A';
//     if (isxdigit(myChar_8)){
//         cout << "Character is a hexadecimal digit (0-9, A-F, a-f)" << endl;
//     }
//     // 9.Checking if a Character is printable(including space)
//     char myChar_9 = 'A';
//     if (isprint(myChar_9)){
//         cout << "Character is printable" << endl;
//     }
//     // 10.Cheking if a Character is a control character
//     char myChar_10 = '\t'; // Tab Character
//     if (iscntrl(myChar_10)){
//         cout << "Character is a control character" << endl;
//     }

//     // 11.Cheking if a character is blank character(space or tab)
//     char myChar_11 = ' ';
//     if (isblank(myChar_11)){
//         cout << "Character is blank character" << endl;
//     }

//     // 12.Cheking if a character is printable(excluding space)
//     char myChar_12 = 'A';
//     if (isgraph(myChar_12)){
//         cout << "Character is printable(excluding space)" << endl;
//     }
//     if (isprint(myChar_12) && !isspace(myChar_12)){
//         cout << "Character is printable(excluding space)" << endl;
//     }

//     return 0;
// }

// // // ''''''''''''''''''''''''''''''''''''''Character Conversion'''''''''''''''''''''''''''''''''''''''''
// // // 1.tolower()
// // #include<iostream>
// // using namespace std;
// // int main(int argc, char const *argv[])
// // {
// //     char myChar_1 = 'A';
// //     char lowerChar = tolower(myChar_1);
// //     cout << "lowerChar: " << lowerChar << endl;

// //     char myChar_2 = 'a';
// //     char upperChar = toupper(myChar_2);
// //     cout << "Upper Char: " << upperChar << endl;

// //     return 0;
// // }

// // Character to Integer Conversion
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''Character Comparision''''''''''''''''''''''''''''''''''''''''''
// /*character comparison typically involves comparing characters based on their ASCII values or their properties.
// 1.Comparing ASCII Values:
// Comparison using relational operators (==, !=, <, >, <=, >=) directly on character variables or literals.
// Comparing ASCII values of characters using arithmetic operations.

// 2.Using Standard Library Functions:
// strcmp(): Compares two strings (character arrays) lexicographically.
// strncmp(): Compares two strings (character arrays) up to a specified number of characters.
// strcasecmp(): Case-insensitive string comparison.
// strncasecmp(): Case-insensitive string comparison up to a specified number of characters.
// std::lexicographical_compare(): Compares two sequences (e.g., strings) lexicographically.

// 3.Custom Comparisons:
// Writing custom comparison functions or functors to compare characters based on specific criteria.*/
// #include<iostream>
// #include<cstring>
// #include<clocale>
// #include <algorithm>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     // 1.Comparing characters using relational operators
//     char myChar_1 = 'a';
//     char myChar_2 = 'b';
//     if (myChar_1 < myChar_2){
//         cout << "Characters 1 is less than Character 2" << endl;
//     } else {
//         cout << "Character 1 is greater than or equal to Character 2." << endl;
//     }
//     // 2.Comparing Character using standard functions
//     // Comparing Character using strcam()
//     /*std::strcmp:
//         Compares two strings character by character.
//         Returns an integer less than, equal to, or greater than zero if the first string is found to be less than, equal to, or
//         greater than the second string.*/
//     const char* str1 = "Hello, world!";
//     const char* str2 = "Hello, world!";
//     int result = strcmp(str1, str2);
//     if (result < 0){
//         cout << "str1 is less than str2" << endl;
//     } else if (result > 0){
//         cout << "str1 is greater than str2" << endl;
//     } else {
//         cout << "str1 is equal to str2" << endl;
//     }

//     /*std::strncmp:
//         Compares the first n characters of two strings.
//         Returns an integer less than, equal to, or greater than zero if the first n characters of the first string are
//         found to be less than, equal to, or greater than the first n characters of the second string.*/
//     const char* str3 = "123456789";
//     const char* str4 = "123459789";
//     int n = 5;
//     int result_2 = strncmp(str3, str4, n);
//     if (result_2 < 0){
//         cout << "first 5 character of str3 is less than first 5 characters of str4" << endl;
//     } else if(result_2 > 0){
//         cout << "first 5 character of str3 is greater than first 5 characters of str4" << endl;
//     } else {
//         cout << "first 5 character of str3 is equal to first 5 characters of str4" << endl;
//     }

//     /*std::strcasecmp():
//         Case-insensitive version of strcmp().
//         Compares two strings lexicographically ignoring case differences.*/
//     const char* str5  = "HELLO, WORLD!";
//     const char* str6  = "hello, world!";
//     int result_3 = strcasecmp(str5, str6);
//     if (result_3 == 0){
//         cout << "str5 and str6 are equal(ignoring case)." << endl;
//     }

//     /*std::strncasecmp():
//         Case-insensitive version of strncmp().
//         Compares specified number of characters of two strings ignoring case differences.*/
//     const char* str7  = "123456789";
//     const char* str8  = "123459789";
//     int n_2 = 5;
//     int result_4 = strncasecmp(str7, str8, n_2);
//     if (result_4 == 0){
//         cout << "first 5 character of str7 is equal to first 5 characters of str8(ignoring case)." << endl;
//     }

//     /*std::memcmp():
//         Compares two blocks of memory.
//         Returns 0 if the first n bytes of both blocks are equal, a negative value if the first differing byte has a l
//         ower value in the memcmp() of the first block compared to the second, and a positive value otherwise.*/
//     const char str9[] = "Hello";
//     const char str10[] = "World";
//     int result_5 = memcmp(str9, str10, sizeof(str9));
//     if (result_5 == 0){
//         cout << "Strings are equal" << endl;
//     } else if(result_5 < 0) {
//         cout << "The first differing character in str9 is less than the corresponding character in str10" << endl;
//     } else {
//         cout << "The first differing character in str9 is greater than the corresponding character in str10." << endl;
//     }

//     /*std::strcoll():
//         Compares two strings using the current locale.
//         Returns an integer indicating the relation between the strings, similar to strcmp(), but considers locale-specific collation rules.*/
//     // Set the locale to the default system locale
//     std::setlocale(LC_ALL, "");
//     const char* str11 = "apple";
//     const char* str12 = "banana";

//     int result = std::strcoll(str11, str12);

//     if (result < 0) {
//         cout << str11 << " comes before " << str12 << " in the current locale." << endl;
//     } else if (result > 0) {
//         cout << str11 << " comes after " << str12 << " in the current locale." << endl;
//     } else {
//         cout << str11 << " and " << str12 << " are equivalent in the current locale." << endl;
//     }

//     //3. Character Encoding based Comparision:
//     char c1 = 'A', c2 = 'B';
//     if(c1 < c2) { // ASCII Comparision
//         cout << "A is less than B" << endl;
//     }

//     // 4.Numerical Value Comparison
//     /*Comparing numeric values of characters*/
//     char c3 = '1', c4 = '2';
//     if (c1 < c2) { // Comparing numeric values of characters
//         cout << " '1' is less than '2' " << endl;
//     }

//     // 5.Iterator Based Comparison
//     std::string str13 = "Hello";
//     // Comparing Character through iterator
//     if (std::find(str13.begin(), str13.end(), 'o') != str13.end()) {
//         cout << " 'o' is found in the string " << str13 << endl;
//     }

//     // 6.Member functions of std::string for C++ strings:
//     std::string str14  = "123456";
//     std::string str15 = "123456";
//     if (str14 == str15){
//         cout << "str14 and str15 are equal" << endl;
//     }

//     // 7.Bitwise Comparison
//     unsigned char byte1 = 0b11001010;
//     unsigned char byte2 = 0b10110101;
//     if (byte1 & byte2) {
//         cout << "Bits Match" << endl;
//     }

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''Other Character Operations''''''''''''''''''''''''''''''''''''
