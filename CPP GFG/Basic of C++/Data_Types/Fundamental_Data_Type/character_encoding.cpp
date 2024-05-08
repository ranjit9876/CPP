// /*Character encoding tells computers how to interpret digital data into letters, numbers and symbols*/

// // 1. ASCII Encoding
// /*In C++, the char data type is commonly used to represent ASCII characters. Each char variable can hold a single ASCII character.*/
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     char ch_1 = 'A'; // Assigning ASCII character 'A' to ch_1
//     char ch_2 = 65; // Assigning ASCII value 65 (decimal) to ch_2
//     char ch_3 = '\101'; // Assigning ASCII value 101 (octal) to ch_3
//     char ch_4 = 0X41; // Assigning ASCII value 41 (hexadecimal) to ch_4
//     char ch_5 = 0b01000001; // Assigning ASCII value 01000001 (binary) to ch_5
//     cout << ch_1 << " " << ch_2 << " " << ch_3 << " " << ch_4 << " " << ch_5 << endl;
//     cout << (ch_1 == ch_2) << endl; // output: 1
//     cout << (ch_1 == ch_5) << endl; // output: 1
//     // cout << &ch_1 << " " << &ch_2 << " " << &ch_3 << " " << &ch_4 << " " << &ch_5 << endl;

//     return 0;
// }

// /*ASCII Control Characters: ASCII includes control characters that are used to control devices and perform operations. 
// These characters are represented by ASCII values in the range 0 to 31.
// The first 32 characters in the ASCII-table are unprintable control codes and are used to control peripherals such as printers.*/

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     for (int i = 0; i < 32; i++){
//         cout << "ASCII value " << i << ":" << static_cast<char>(i) << endl;
//     }
//     cout << endl;

//     for (char i = 0; i < 32; i++)
//     {
//         cout << "ASCII value " << static_cast<int>(i) << ":" << i << endl; 
//     }
//     cout << endl;

//     cout << static_cast<char>(0) << endl; // output: NUL
//     cout << static_cast<char>('\000') << endl; // output: NUL
//     cout << static_cast<char>(0x00) << endl; // output: NUL
//     cout << static_cast<char>(0b00000000) << endl; // output: NUL 

//     cout << static_cast<char>(31) << endl; // output:  ▼ (Unit Separator)
//     cout << static_cast<char>('\037') << endl; // output:  ▼ (Unit Separator)
//     cout << static_cast<char>(0x1F) << endl; // output: ▼ (Unit Separator)
//     cout << static_cast<char>(0b00011111) << endl; // output: ▼ (Unit Separator)
//     return 0;
// }

// '''''''''''''''''''''''''''''''''''''''''''''''''''''
// /*ASCII printable characters (character code 32-127)
// Codes 32-127 are common for all the different variations of the ASCII table, they are called printable characters, 
// represent letters, digits, punctuation marks, and a few miscellaneous symbols. You will find almost every character on your keyboard. 
// Character 127 represents the command DEL.*/

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     // for (int i = 32; i < 128; i++){
//     //     cout << "ASCII value " << i << ":" << "Character: " <<static_cast<char>(i) << endl;
//     // }
//     // cout << endl;

//     for (char i = 32; i < 127; i++)
//     {
//         cout << "ASCII value " << static_cast<int>(i) << ":" <<  "Character: "<< i << endl; 
//     }
//     cout << endl;
//     cout << static_cast<char>(127) << endl; // 
//     cout << static_cast<char>(128) << endl; // output: Ç

//     cout << static_cast<char>(32) << endl; // output: Space
//     cout << static_cast<char>('\040') << endl; // output: Space
//     cout << static_cast<char>(0x20) << endl; // output: Space
//     cout << static_cast<char>(0b00100000) << endl; // output: Space 

//     cout << static_cast<char>(127) << endl; // output:  ~ (Equivalency sign - tilde)
//     cout << static_cast<char>('\177') << endl; // output:  ~ (Equivalency sign - tilde)
//     cout << static_cast<char>(0x7F) << endl; // output: ~ (Equivalency sign - tilde)
//     cout << static_cast<char>(0b01111111) << endl; // output: ~ (Equivalency sign - tilde)
//     return 0;
// }

// ''''''''''''''''''''''''''''''''''''''''''''''''''''''
// /*The extended ASCII codes (character code 128-255)
// There are several different variations of the 8-bit ASCII table. The table below is according to Windows-1252 (CP-1252) 
// which is a superset of ISO 8859-1, also called ISO Latin-1, in terms of printable characters, but differs from the 
// IANA's ISO-8859-1 by using displayable characters rather than control characters in the 128 to 159 range. 
// Characters that differ from ISO-8859-1 is marked by light blue color.*/

// #include <iostream>
// using namespace std;

// int main() {
//     // Extended ASCII characters (ISO 8859-1)
//     for (int i = 128; i <= 255; ++i) {
//         cout << "ASCII value " << i << ": " << static_cast<char>(i) << endl;
//     }

//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''
// /*ASCII Representation of Digits: In ASCII, the characters '0' to '9' are represented by consecutive ASCII values.*/
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     for (char digit = '0'; digit <= '9'; ++digit) {
//         cout << "ASCII value of " << digit << ": " << static_cast<int>(digit) << endl;
//     }
//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''
// // Cheking for ASCII Characters
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     char inputChar;
//     cout << "Enter a character: ";
//     cin >> inputChar;

//     // Check if the entered character is an ASCII character
//     if (inputChar >= 0 && inputChar <= 127) {
//         cout << "The Entered character " <<inputChar << " is an ASCII character" << endl;
//     } else {
//         cout << "The Entered character " <<inputChar << " is not an ASCII character" << endl;
//     }
    
//     return 0;
// }

// // '''''''''''''''''''''
// // ASCII Art
// #include <iostream>
// using namespace std;

// int main() {
//     // Printing ASCII art
//     cout << R"(
//      _____
//     /     \
//    /       \
//   |  O   O  |
//   |    ∆    |
//    \ _____ /
// )" << endl;

//     return 0;
// }


// // ''''''''''''''''''''''''''''''''''''''''''''''Unicode Encoding''''''''''''''''''''''''''''''''''''''''''''''
// // 1. Using wchar_t for Wide Characters:
// #include <iostream>
// using namespace std;

// int main() {
//     // Representing Unicode characters using wchar_t type
//     wchar_t euroSymbol = L'\u20AC'; // Euro symbol (€)
//     wchar_t grinningFace = L'\U0001F600'; // Grinning face emoji (😀)

//     // Printing Unicode characters
//     wcout << L"Euro Symbol: " << euroSymbol << endl;
//     wcout << L"Grinning Face Emoji: " << grinningFace << endl;

//     return 0;
// }


// // '''''''''''''''''
// // 2. Using UTF-8 Encoded String Literal:
// #include <iostream>
// using namespace std;

// int main() {
//     // Using UTF-8 encoded string literal
//     const char* utf8Str = u8"こんにちは"; // Japanese greeting (Konnichiwa)
//     cout << "UTF-8 String: " << utf8Str << endl;

//     return 0;
// }

// // ''''''''''''''''''''''
// // 3. Using std::wstring for Wide Strings:
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     // Using std::wstring for wide strings (UTF-16 encoded)
//     wstring japaneseGreeting = L"\u3053\u3093\u306B\u3061\u306F"; // Japanese greeting (Konnichiwa)
//     wcout << L"Japanese Greeting: " << japaneseGreeting << endl;

//     return 0;
// }

// // '''''''''''''''''''''
// // 4. Converting UTF-8 String to Wide String:
// #include <iostream>
// #include <string>
// #include <codecvt>
// using namespace std;

// int main() {
//     // Convert UTF-8 string to wide string (UTF-16)
//     string utf8Str = u8"こんにちは"; // Japanese greeting (Konnichiwa)
//     wstring_convert<codecvt_utf8_utf16<wchar_t>, wchar_t> converter;
//     wstring wideStr = converter.from_bytes(utf8Str);

//     // Output wide string
//     wcout << L"UTF-8 to Wide String: " << wideStr << endl;

//     return 0;
// }

// // ''''''''''''''''''''''''
// // 5. Using UTF-16 and UTF-32 Encoded String Literals:
// #include <iostream>
// using namespace std;

// int main() {
//     // Using UTF-16 encoded string literals
//     const char16_t* utf16Str = u"😀こんにちは"; // Grinning face emoji (😀) followed by Japanese greeting (Konnichiwa)
//     cout << "UTF-16 String: " << reinterpret_cast<const char*>(utf16Str) << endl;

//     // Using UTF-32 encoded string literals
//     const char32_t* utf32Str = U"😀こんにちは"; // Grinning face emoji (😀) followed by Japanese greeting (Konnichiwa)
//     cout << "UTF-32 String: " << reinterpret_cast<const char*>(utf32Str) << endl;

//     return 0;
// }

// // ''''''''''''''''''''
// // 6. Unicode String Literals:
// #include <iostream>
// using namespace std;

// int main() {
//     // Using Unicode string literals
//     const wchar_t* unicodeStr = L"Hello, こんにちは";
//     wcout << unicodeStr << endl;
//     wcout << L"Length of Unicode string: " << wcslen(unicodeStr) << endl;
//     // wcout << L"First character: " << *wideStr << endl;
//     // wcout << L"Last character: " << *(wideStr + wcslen(wideStr) - 1) << endl;
//     // wcout << L"Substring: " << wcsstr(wideStr, L"こんにちは") << endl;
//     // wcout << L"Character at index 5: " << *(wideStr + 5) << endl;

//     return 0;
    
// }












// // ''''''''''''''''''''''''''''''''''''''Handling Character Encodings'''''''''''''''''''''''''''''''''''''''''''''''''''
// // 1. Encoding Conversion
// #include <iostream>
// #include <string>
// #include <codecvt>
// #include <locale>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     // UTF-8 encoded string
//     string utf8String = "Hello, こんにちは";

//     // Converted UTF-8 string to wide string( UTF-16) 
//     std::wstring_convert<<std::codecvt_utf8_utf16<wchar_t>, wchar_t> converter;
//     std::wstring wideStr = converter.from_bytes(utf8String);

//     // Output the wide string
//     wcout << wideStr << endl;
//     return 0;
// }

// // ''''''''''''''''''''''''''
// // 2.File I/O with Specific Encoding#include <iostream>
// #include <iostream>
// #include <fstream>
// #include <string>
// #include <locale>
// using namespace std;

// int main() {
//     // Write UTF-8 encoded string to file
//     std::ofstream outFile("output.txt");
//     std::wstring utf8Str = L"Hello, こんにちは";
//     outFile.imbue(locale(locale(), new codecvt_utf8<wchar_t>));
//     outFile << utf8Str;
//     outFile.close();

//     // // Read UTF-8 encoded string from file
//     // std::wifstream inFile("output.txt");
//     // inFile.imbue(std::locale(std::locale(), new std::codecvt_utf8<wchar_t>));
//     // std::wstring readStr;
//     // std::getline(inFile, readStr);
//     // std::wcout << readStr << std::endl;
//     // inFile.close();

//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     std::wstring str = L"Hello World in UTF-16!\nAnother line.\n";
//     UFILE *ufile = u_fopen("out2.txt", "w", 0, "utf-16");
//     u_file_write(str.c_str(), str.size(), ufile);
//     u_fclose(ufile);
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''''''''''''
// // Add code to read the contents of the file "out2.txt" and print it to the console
// #include <iostream>
// #include <fstream>
// #include <string>
// int main()
// {
//     std::wifstream inFile("out2.txt");
//     inFile.imbue(std::locale(std::locale::empty(), new std::codecvt_utf16<wchar_t, 0x10ffff, std::little_endian>));
//     std::wstring readStr;
//     std::getline(inFile, readStr);
//     std::wcout << readStr << std::endl;
//     inFile.close();
//     return 0;
// }

// 
// '''''''''''''''''''''''''''''''''''''''''''''''
// #include <iostream>
// #include <locale>

// int main() {
//     // Creating a locale object using the default constructor
//     std::locale loc;
    
//     // Setting the global locale to the newly created locale object
//     std::locale::global(loc);

//     // Using the locale for input/output
//     std::cout.imbue(loc);
//     std::cout << "Hello, world!" << std::endl;
    

//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''''''''''''
// // Encoding-Aware String Manipulation:
// #include <iostream>
// // #include <string>  
// #include <locale>
// #include <codecvt> 
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     // Converted Lowercase ASCII characters to uppercase 
//     wstring_convert<codecvt_utf8_utf16<wchar_t>, wchar_t> converter;
//     wstring utf16Str = converter.from_bytes(u8"hello, world!");
//     wstring uppersCaseString;
//     locale loc;

//     for (wchar_t ch : utf16Str) {
//         uppersCaseString += toupper(ch, loc);
//     }

//     // Output the uppercase string
//     wcout << uppersCaseString << endl;

//     return 0;
// }

// // '''''''''''''''''''''''''''''''
// #include <iostream>
// #include <codecvt>
// #include <locale>
// int main(int argc, char const *argv[])
// {
//     // Create a UTF-8 String
//     std::string utf8_string = u8"hello world";

//     // Convert the UTF-8 string to a wide string
//     // std::wstring_convert<std::codecvt_utf8<wchar_t> converter;

//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''
// // Detecting Encoding from Byte Order Mark(BOM)
// #include <istream>
// #include <fstream>
// #include <string>
// using namespace std;
// string detectEncoding(const string& fileName) {
//     ifstream file(fileName, ios::binary);
//     if (!file.is_open())
//     {
//         /* code */
//     }
    
// }
// int main(int argc, char const *argv[])
// {
//     string filename = "example.txt";

//     return 0;
// }

