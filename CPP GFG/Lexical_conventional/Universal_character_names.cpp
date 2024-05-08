
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     cout << "Hello &World " << endl;
//     int num_2 = 42;
//     auto \u30AD = 42; // \u30AD is 'キ'
//     int num = 42;
//     if (キ == 42) // \u30AD and キ are the same to the compiler
//     { 
//         // cout << "\u30AD == # " << endl;
//         cout << "they are identical" << endl;
//     };

//     if (キ == \u30AD) // \u30AD and キ are the same to the compiler
//     { 
//         // cout << "\u30AD == # " << endl;
//         cout << "they are identical" << endl;
//     };

//     cout << &\u30AD << endl;
//     cout << &キ << endl;
//     cout << &num << endl;
//     cout << &num_2 << endl;
//     return 0;
// }

// // ''''''''''''''''''''''
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int abs123 = 10;
//     cout << abs123 << endl;
    
//     return 0;
// }

// ''''''''''''''''''''''
#include<iostream>
using namespace std;

// extended_identifier.cpp
// In Visual Studio, use File, Advanced Save Options to set
// the file encoding to Unicode codepage 1200
struct テスト         // Japanese 'test'
{
    void トスト() {}  // Japanese 'toast'
};

int main() {
    テスト \u30D1\u30F3;  // Japanese パン 'bread' in UCN form
    パン.トスト();        // compiler recognizes UCN or literal form
}





