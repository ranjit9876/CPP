// /*Character Types: Character types are integer types used for a character representation.
// */
// #include <iostream>
// using namespace std; 
// int main(int argc, char const *argv[])
// {
//     char myChar = 'A';
//     wchar_t myWideChar = L'€';
//     // cout << int(myChar) << endl;
//     cout << myWideChar << endl;

//     char16_t myUTF16Char = u'\u20AC'; // Euro sign (€) in UTF-16
//     char32_t myUTF32Char = U'\U0001F600'; // Grinning face emoji (😀) in UTF-32
//     cout << myUTF16Char << endl;
//     cout << myUTF32Char << endl;

//     return 0;
// }

// ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// '''''''''''''''''''''Representation of characters in memory''''''''''''''''''''''''''''''''''''''''''''''''
/*In C++, characters are represented in memory using character data types such as char, wchar_t, char16_t, and char32_t. The representation depends on the character encoding being used.*/


#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // char representation in memory
    char ch = 'A'; // ASCII value of 'A' is 65
    cout << "Memory Representation of 'A': " << static_cast<int>(ch) << endl;

    // wchar_t representation in memory
    wchar_t wideChar = L'€';     // Euro sign (U+20AC)
    cout << L"Memory Representation of '€': " << static_cast<int>(wideChar) << endl; 

    // char_16_t representation in memory
    // char16_t myUTF16Char = u'\u20AC'; // Euro sign (€) in UTF-16 
    char16_t myUTF16Char = u'€';  
    cout << "";
    return 0;
}
