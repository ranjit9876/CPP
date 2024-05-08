// '''''''''''''''''''''''''''''''''''All Types of Objects'''''''''''''''''''''''''''''''''''''
// // '''''''''''''''''''''''''''''1.Primary Data Type Object
// // int, float, char, double, bool, etc.
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int integerValue = 10;
//     cout << &integerValue << endl; // 0x149b1ffc8c
//     return 0;
// }

// // '''''''''''''''''''''''2.Arrray Object
// // Arrays are collections of elements of the same data type.       
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int numbers[5] = {1, 2, 3, 4, 5};
//     cout << &numbers << endl; // 0xe7de3ffb60
//     cout << &numbers[0] << endl; // 0xe7de3ffb60
//     cout << &numbers[1] << endl; // 0xe7de3ffb60
//     return 0;
// }

// // '''''''''''''''''''''''''''''3.String Objects'''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     std::string name = "Chat GPT";
//     cout << &name << endl; // 0x27363ff720
//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     // // ''''''''''''''''''4.Object Pointers: Pointers that point to the object''''''''''''''''''''
//     // int num = 10;
//     // int* ptr = &num; 
//     // cout << ptr << endl; // 0xbd243ff854

//     // // '''''''''''''''''''5.Const Object'''''''''''''''''''''''
//     // const int constValue = 10;
//     // cout << &constValue << endl; // 0xbaf57ff88c

//     return 0;
// }

// ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create an ofstream object for writing to a file
    ofstream outFile("example.txt");
    cout << &outFile << endl; // 0x3c6fdffb20

    // // Check if the file is opened successfully
    // if (outFile.is_open()) {
    //     // Write data to the file
    //     outFile << "Hello, File! This is a sample text.";

    //     // Close the file
    //     outFile.close();
    //     cout << "Data written to the file successfully." << endl;
    // } else {
    //     cerr << "Error opening the file." << endl;
    // }

    

    return 0;
}
