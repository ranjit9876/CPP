// // ''''''''''''''''''''''Variable Declaration'''''''''''''''''''''''''''''
// /*variables in C++ must be declared before they are used*/

// #include<iostream>
// using namespace std;

// int global_variable;
// int main(int argc, char const *argv[])
// {
//     // 1.Integer Variable Declaration
//     int age; // Declaring integre variable named 'age'

//     // 2.Float Variable Declaration
//     float tempreture; // Declaring float variable named 'tempreture'

//     // 3.Double Variable Declaration
//     double pi; // 

//     // 4.Character Variable Declaration
//     char grade;

//     // 5.Boolean Variable Declaration
//     bool isRaining;

//     // 6.String Variable Declaration (with <string> header included)

//     #include<string>
//     std::string name;

//     // 7.Multivariable Declarations in One Line
//     int x, y, z;

//     // 8.Constant Variable Declaration
//     // const double pi_2; // const variable "pi_2" requires an initializer

//     // 9.Static Variable Declaration
//     static int count;

//     // 10.Using Modifiers and Qualifiers:
//     static int count_2;
//     volatile double sensor_value;

//     // 11.Declaration with User-Defined Types(using 'typedef' or 'using' keyword)
//     typedef unsigned long long ull;
//     ull l1 = 123;
//     using Distance = float;
//     Distance d1 = 123.45;

//     cout << l1 << " " << d1 << endl;

//     // 12.Declaration with 'auto' keyword
//     // auto result; // error: declaration of 'auto result' has no initializer

//     // 13.Constant variable Declaration
//         const int MAX_VALUE = 100;
//         const float PI = 3.14159;

//     // 14.Variable Declaration with Pointer
//     // Pointer variable declaration
//     int* ptr;

//     // Initializing a pointer variable
//     int value = 42;
//     int* ptrValue = &value;  // ptrValue now holds the address of 'value'

//     // 15.Refrence Variable Declaration
//     int original = 50;
//     int& ref = original; // 'ref' is a reference to 'original' variable

//     // 16.Variable Declaration with Initializers
//     int count{0};
//     float price{123.562f};
//     char symbol{'$'};

//     return 0;
// }












// // '''''''''''''''''''''''Naming Conventions for Variables''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // Use Descriptive Names: Choose names that clearly convey the purpose or meaning of the variable.
//     int studentAge;
//     float averageTempreture;

//     // Use Descriptive Names: Choose names that clearly convey the purpose or meaning of the variable.
//     int numberOfScore;
//     float totalScore;

//     // Avoid Underscore: While underscores are allowed in variable names, they are typically avoided in modern C++ code in favor of camel case.
//     int num_student; // Avoid

//     // Use All Uppercase for Constants: Constants are often named using all uppercase letters, with underscores to separate words.
//     const float PI = 3.14;
    
//     // Prefix Boolean Variables with "is", "has", or "can": This helps to make the purpose of the variable clear.
//     bool isRaining;
//     bool hasPassedExam;

//     // Prefix Pointers with "p": This makes it clear that the variable is a pointer.
//     int*ptrNumber;

//     // Prefix Reference Variables with "ref": This helps distinguish reference variables from regular variables.
//     int numStudent = 10;
//     int& refNumStudent_ = numStudent;

//     // Avoid Single-letter Variable Names (Except for Loop Counters): While single-letter variable names like i, j, and k are commonly used as loop counters, they should generally be avoided for other purposes unless they have a clear and established meaning within the context of the code.
//     for (int i = 0; i < 10; ++i) {
//     // Loop code
//     }

    
//     return 0;
// }


// '''''''''''''''''''''''''''''''''''''Constants in C++'''''''''''''''''''''''''''''''''''''''''''''''''''
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // 1.Using 'const' keyword
    const int num = 10; // Integer Constant

    // 2.Using 'constexpr' keyword
    constexpr int num_2 = 10;
    cout << num_2 << endl;

    // Enumeration Keyword
    enum Weekday { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
    const Weekday Today = Monday; //Enumeration Constant
    cout << "Today: " << Today << endl;

    // Pointer Constant
    int x = 25;
    int* const ptr_to_x = &x;

    cout << "The Value of x: " << ptr_to_x << endl;

    // Array Constants
    const int size = 5;
    const int numbers[size] = {1, 2, 3, 4, 5};
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}

