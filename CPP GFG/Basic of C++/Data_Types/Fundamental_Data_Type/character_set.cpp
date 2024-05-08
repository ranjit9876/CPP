// ''''''''''''''''''''''''''''''''''''''''''''''''''Character Set''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
/*Character types are integer types used for a character representation.*/
/*Basic Source Character Set: This set includes the characters required to write C++ source code. It typically includes the following:

Letters: A to Z (both uppercase and lowercase)
Digits: 0 to 9
Special Characters: ~ ! @ # $ % ^ & * ( ) - + = { } [ ] | \ : ; " ' < > , . ? /
Space (whitespace)
Escape Sequences: such as \n for newline, \t for tab, etc.*/

/*Character Set:
1.ASCII
2.Unicode*/

// ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 128; i++){
        cout << "Character: " << static_cast<char>(i) << " Decimal: " << i << " Hexadecimal: 0x" << hex << i << dec << " Octal: " << oct << i << dec << "Binary: " << ((static_cast<char>(i) >> i) & 1) << endl;
    }
    
    return 0;
}

