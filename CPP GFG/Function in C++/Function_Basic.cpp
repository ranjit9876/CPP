// #include<iostream>
// using namespace std;

// // Function Declaration
// int add(int a, int b); // Prototype function

// // ''''''''''Function with default parameters''''''''''''''
// void default_function(string str = "Hello, world!"){
//     cout << str << endl;
// }

// // '''''''''''''''Function with Reference Parameters'''''''''''''''''
// // Function that modifies its parameters using Reference
// void modify(int& a, int& b){
//     a *= 2;
//     b *= 2;
// }

// int main(int argc, char const *argv[])
// {
//     // Function Call
//     int result = add(10, 15);

//     // Displaying the Result
//     cout << "Result of add(10, 15): " << result << endl;

//     default_function(); // No Argument Provided, use default value "Hello, world!"
//     default_function("GFG"); // Providing an argument "GFG"

//     int x= 10;
//     int y= 15;

//     modify(x, y); // Pass by reference
//     cout << "Modified x: " << x << endl;
//     cout << "Modified y: " << y << endl;

//     return 0;
// }

// // Function Definition
// int add(int a, int b){ // Function takes two integer parameters
//     return a + b;
// }

// // '''''''''''''''''''''''''''''Function with a User-Defined Type by Value''''''''''''''''''''''''''''''''
// // pass user-defined types (e.g., structs or classes) by value.
// #include <iostream>
// #include <string>

// using namespace std;
// struct Student
// {
//     string name;
//     int age;
// };

// void DisplayInfo(Student student){
//     cout << "Name: " << student.name << endl;
//     cout << "Age: " << student.age << endl;
// }

// int main(int argc, char const *argv[])
// {
//     Student student1;
//     student1.name = "Charlie";
//     student1.age = 22;

//     DisplayInfo(student1);// Passing student1 by value

//     cout << "Name(Outside function): " << student1.name << endl;
//     cout << "Age(Outside function): " << student1.age << endl;

//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''. Multiple Calls Functions'''''''''''''''''''''''
// // ''''''1.. Multiple Calls with Different Arguments:''''''''''''
// #include<iostream>
// using namespace std;
// void printMessage(const string& message){
//     cout << "message: " << message << endl;
// }
// int main(int argc, char const *argv[])
// {
//     printMessage("Hello, world!");
//     printMessage("How are you?");
//     printMessage("My name is Ranjit! "); 
//     return 0;
// }

// // ''''''''''''''''''''''''''''Function Prototype'''''''''''''''''''''
// // 1.'''''''''''''''''Basic Function Prototype''''''''''''
// #include <iostream>

// // Function prototype
// int square(int num);

// int main() {
//     int x = 5;
//     int result = square(x);  // Calling the function
//     std::cout << "Square of " << x << " is " << result << std::endl;
//     return 0;
// }

// // Function definition
// int square(int num) {
//     return num * num;
// }

// // '''''''''''''''''''2.Using Header File''''''''''''''''''''''''
// // main.cpp (Source File)
// #include<iostream>
// #include "square.h"

// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int x = 5;
//     int result = square(x);
//     cout << result << endl;
//     return 0;
// }

// int square(int num) {
//     return num * num;
// }

// // '''''''''3. Multiple Functions with Prototypes:''''''''''
// #include <iostream>

// // Function prototypes
// int add(int a, int b);
// int subtract(int a, int b);

// int main() {
//     int x = 8, y = 3;
//     int result1 = add(x, y);
//     int result2 = subtract(x, y);
    
//     std::cout << "Addition: " << result1 << std::endl;
//     std::cout << "Subtraction: " << result2 << std::endl;
//     return 0;
// }

// // Function definitions
// int add(int a, int b) {
//     return a + b;
// }

// int subtract(int a, int b) {
//     return a - b;
// }

// *********************************************************************************************************************************
// *********************************************************************************************************************************
// *********************************************************************************************************************************
// *********************************************************************************************************************************
// ****************************************************Function Prototypes *********************************************************
// ''''''''''''''''''''''''''1.Basic Function Prototypes''''''''''''''''
// #include <iostream>

// // Function prototype
// double calculateArea(double length, double width);

// int main() {
//     double length = 5.0;
//     double width = 3.0;
    
//     // Calling the function using the prototype
//     double area = calculateArea(length, width);
    
//     std::cout << "Area of the rectangle: " << area << std::endl;
//     return 0;
// }

// // Function definition
// double calculateArea(double length, double width) {
//     return length * width;
// }

// // ''''''''''''''''''''''''''''''''''''2.Header Files and Prototypes''''''''''''''''''''''''''''''''''''
// // '''''''''''''''''''''''''source file''''''''''''''''''''''''
// #include<iostream>
// #include "myfunction.h" // Include the function Header Files
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int x = 10;
//     int y = 20;

//     // Calling the function declared in the header file
//     int sum = add(x, y);
//     int difference = substract(x, y);

//     cout << "sum = " << sum << endl;
//     cout << "difference = " << difference << endl;

//     return 0;
// }

// // '''''''''Function Prototype with default parameters''''''''''
// #include <iostream>

// // Function prototype with default arguments
// int calculate(int a, int b, int c = 0, int d = 0) {
//     return a + b + c + d;
// }

// int main() {
//     int result1 = calculate(5, 3);
//     int result2 = calculate(2, 3, 1);
//     int result3 = calculate(2, 3, 1, 4);

//     std::cout << "Result 1: " << result1 << std::endl;
//     std::cout << "Result 2: " << result2 << std::endl;
//     std::cout << "Result 3: " << result3 << std::endl;

//     return 0;
// }
// // *****************************************************Function Overloading*********************************************************
// /*. Rules for Function Overloading:

// Functions must have the same name.
// Functions must be declared in the same scope.
// Functions must differ in at least one of the following:
//     1. The number of parameters.
//     2. The types of parameters.
//     3. The order of parameters.*/
// #include<iostream>
// using namespace std;

// int add(int x, int y) {
//     return (x + y);
// }

// int add(int x, int y, int z) {
//     return (x + y + z);
// }

// // // cannot overload functions distinguished by return type aloneC
// // double add(int x, int y) { 
// //     return (x + y);
// // }

// double add(double x, double y) {
//     return (x + y);
// }
// int main(int argc, char const *argv[])
// {
//     int x = 10;
//     int y = 20;
//     int z = 30;

//     double a = 2.5;
//     double b = 4.2;
//     int sum1 = add(x, y);
//     int sum2 = add(x, y, z);
//     int sum3 = add(a, b);
//     double sum4 = add(a, b);

//     cout<< "sum1 = "<< sum1<<" sum2 = "<< sum2<<" sum3 = "<< sum3<<" sum4 = "<< sum4<<endl;

    
//     return 0;
// }


// // '''''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Function to add two integers (non-const parameters)
// int add(int a, int b) {
//     cout << "Using non-const parameters" << endl;
//     a = 100; // Modifying the original value
//     b = 200; // Modifying the original value
//     return a + b;
// }

// // Function to add two integers (const parameters)
// int multiplay(const int& a, const int& b) {
//     cout << "Using const parameters" << endl;
//     // a = 200; // Error: you can not modify const reference
//     // b = 400; // Error: you can not modify const reference
//     return a + b;
// }


// int main(int argc, char const *argv[])
// {
//     int x = 10;
//     int y = 20;

//     // Call the non-const version of add() method
//     int result1 = add(x, y);
//     cout << x <<" " << y << endl;

//     // Call the const version of multiplay() method
//     const int& a = x;
//     const int& b = y;

//     int result2 = multiplay(a, b);

//     cout << result1 << endl;
//     cout << x <<" " << y << endl;
//     cout << result2 << endl;
//     cout << x << " " << y << endl;
//     return 0;
// }

// // ''''''''''''''''''''
// #include <iostream>

// // Function that takes an integer by reference
// void manipulate(int& num) {
//     num *= 2;
// }

// // Function that takes an integer by const reference
// void display(const int& num) {
//     std::cout << "Value: " << num << std::endl;
//     // num *= 5; //Not modified
// }

// int main() {
//     int x = 5;

//     manipulate(x);  // Calls manipulate(int& num)
//     display(x);     // Calls display(const int& num)

//     return 0;
// }
// // ''''''''''''''''''''''''''Function Overloading with Different Return Types '''''''''
// #include <iostream>

// // Attempting to overload functions based on return type
// int calculate(int a, int b) {
//     return a + b;
// }

// double calculate(int a, int b) {
//     return static_cast<double>(a + b);
// }

// int main() {
//     int x = 5, y = 3;

//     int result1 = calculate(x, y);      // Error: Ambiguous call
//     double result2 = calculate(x, y);    // Error: Ambiguous call

//     return 0;
// }

// // ''''''''''''''''''Handling Ambiguity in Function Overloading''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Function 1: Overloaded function with int parameters
// void printValue(int value) {
//     cout << "value: " << value << endl;
// }

// // Function 2: Overloaded function with double parameters
// void printValue(double value) {
//     cout << "value: " << value << endl;
// }

// int main(int argc, char const *argv[])
// {
//     int x = 5;
//     double y = 3.15;

//     printValue(x);
//     printValue(y);

//     printValue(static_cast<int>(x)); // Call printValue(int);
//     printValue(static_cast<double>(y)); // Call printValue(double);
//     return 0;
// }

// // '''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// // Function with two integer parameters
// void printValue(int a, int b) {
//     cout << "Printing two integers: " << a << " and " << b << endl;
// }

// // Function with two double parameters
// void printValue(double a, double b) {
//     cout << "Printing two doubles: " << a << " and " << b << endl;
// }

// int main() {
//     int x = 5, y = 3;
//     double p = 2.5, q = 1.5;

//     // Ambiguous function call
//     printValue(x, y);  // Error: Ambiguous call

//     // Explicit type casting to resolve ambiguity
//     printValue(static_cast<double>(x), static_cast<double>(y));

//     // Calling without ambiguity
//     printValue(p, q);

//     return 0;
// }

// // ''''''''''''''''''''''''''''''''Use Cases for Function Overloading in C++''''''''''''''''
// // 1. Constructors in Classes:
// /*Overloading constructors to provide different ways to initialize objects.*/
// #include <iostream>

// class Rectangle {
// public:
//     int width;
//     int height;

//     // Default constructor
//     Rectangle() : width(0), height(0) {}

//     // Constructor with width and height
//     Rectangle(int w, int h) : width(w), height(h) {}

//     // Constructor with only one dimension (square)
//     Rectangle(int side) : width(side), height(side) {}
// };

// int main() {
//     Rectangle rect1;           // Calls default constructor
//     Rectangle rect2(5, 3);     // Calls constructor with width and height
//     Rectangle square(4);       // Calls constructor with one dimension

//     return 0;
// }


// **********************************************Default Argument******************************************
// // ''''''''''''''''''''''''''''1.Simple Default Argument'''''''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// // Function with a default argument
// void greet(string name = "Guest") {
//     cout << "Hello, " << name << "!" << endl;
// }

// int main() {
//     greet();           // Uses the default argument "Guest"
//     greet("Alice");    // Uses the provided argument "Alice"

//     return 0;
// }

// // '''''''''''''''''2.Default Argument with multiple parameters'''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// // Function with default arguments for two parameters
// int calculate(int a, int b = 0, bool add = true) {
//     if (add) {
//         return a + b;
//     } else {
//         return a - b;
//     }
// }

// int main() {
//     cout << calculate(5) << endl;         // Uses defaults for b and add
//     cout << calculate(5, 3) << endl;      // Uses default for add
//     cout << calculate(5, 3, false) << endl;

//     return 0;
// }

// // '''''''''''''''''''''3.Default Argument with Function Oveloading''''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// // Function with default argument
// void display(int num, bool newline = true) {
//     // cout << "Number: " << num;
//     if (newline) {
//         cout << "Inside display(int num, bool newline = true) method, num: " << num <<endl;
//     }
// }

// // Overloaded function without default argument
// void display(double num) {
//     cout << "Double: " << num << endl;
// }

// int main() {
//     display(42);         // Uses the default newline (true)
//     display(3.14);       // Calls the overloaded function

//     return 0;
// }


// // ''''''''''''''''3.Default Argument in Class Constructor''''''''''''''''''
// #include <iostream>
// using namespace std;

// class Person {
// public:
//     // Constructor
//     Person(string n = "Guest", int a = 0) : name(n), age(a) {}

//     void displayInfo() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }

//     // Class private instance variables (name, age)
// private:
//     string name;
//     int age;
// };

// int main() {
//     Person p1;          // Calls Person("Guest", 0)
//     Person p2("Alice"); // Calls Person("Alice", 0)
//     Person p3("Bob", 25);

//     p1.displayInfo();
//     p2.displayInfo();
//     p3.displayInfo();
    
//     return 0;
// }
// // *****************************************Recursive***********************************************
// '''''''''''1.Factorial Calculation'''''''''''''''''''''''
// #include <iostream>
// using namespace std;
// // Recursive function to calculate factorial
// int factorial(int n) {
//     // Base case: factorial of 0 is 1
//     if (n == 0) {
//         return 1;
//     }
//     // Recursive case: factorial(n) = n * factorial(n-1)
//     else {
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     int num = 5;
//     int result = factorial(num);
//     cout << "Factorial of " << num << " is " << result << endl;
//     return 0;
// }

// //'''''''''''''''''2.Fibonacci Sequence'''''''''''''
// #include <iostream>
// using namespace std;

// // Recursive function to generate Fibonacci numbers
// int fibonacci(int n) {
//     // Base cases: Fibonacci of 0 is 0, and Fibonacci of 1 is 1
//     if (n == 0) {
//         return 0;
//     }
//     if (n == 1) {
//         return 1;
//     }
//     // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
//     else {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// int main() {
//     int num = 7;
//     cout << "Fibonacci sequence up to " << num << ":" << endl;
//     for (int i = 0; i <= num; ++i) {
//         cout << fibonacci(i) << " ";
//     }
//     cout << endl;
//     return 0;
// }

// *******************************************************Function Template*****************************************************
// '''''''''''''''''''''''''Basic Syntax''''''''''''''''''''''''
/*
template <class T>
return_type function_name(T parameter1, T parameter2, ...) {
    // Function body
    // Use parameter1, parameter2, ... of type T
}


    1. template <typename T>: This declares a function template with a type parameter T.
    2. return_type: The return type of the function template.
    3. function_name: The name of the function template.
    4. T parameter: A parameter of type T.
*/

// // 1.Basic Function Template 

// #include<iostream>
// using namespace std;
// // Function template to find maximum of two values
// template <class T>
// T maxValue(T a, T b) {
//     return (a > b) ? a : b;
// }

// int main()
// {
//     int x = 5, y = 10;
//     double d1 = 3.15, d2 = 2.71;

//     int max_int = maxValue(x, y);
//     int max_double = maxValue(d1, d2);

//     cout<<"Max of " << x << " and " << y << " is " << max_int << endl;
//     cout<<"Max of " << d1 << " and " << d2 << " is " << max_double << endl;
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''
// #include<iostream>
// #include<vector>
// using namespace std;

// // Function Template to find maximum element in array or vector
// template <typename T> T findMax(const vector<T>& arr) {
//     T maxElement = arr[0];
//     for (const T& element : arr) 
//     {
//         if (element > maxElement)
//         {
//             maxElement = element;
//         }
//     }
//     return maxElement;
    
// }
// int main()
// {
//     // Using function template with int
//     vector<int> intArray = {5, 10, 8, 7, 15, 2, 6}; 
//     int maxInt = findMax(intArray);
//     cout << "maxInt: " << maxInt << endl;

//     // Using function template with double
//     vector<double> doubleArray = {3.14, 2.71, 1.618}; 
//     double maxDouble = findMax(doubleArray);
//     cout << "maxDouble: " << maxDouble << endl;

//     // Using function template with char
//     vector<char> charArray = {'a', 'b', 'z', 'm'};
//     char maxChar = findMax(charArray);
//     cout << "maxChar: " << maxChar << endl;

//     //
    
//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''Type inference in function template'''''''''''''''''''''''
// /*Type inference, also known as type deduction, is the process by which the compiler determines the appropriate data type for template arguments without explicit user intervention.
// Type inference applies to both function templates and class templates.*/
// #include <iostream>

// // Function template to find the maximum of two values
// template <class T>
// T max(T a, T b) {
//     return (a > b) ? a : b;
// }

// int main() {
//     int x = 5, y = 8;
//     double d1 = 3.14, d2 = 2.71;

//     // //  Explicit Template Argument Specification:
//     // /*If needed, you can explicitly specify template arguments when calling a function template to override type inference. 
//     // This is useful when you want to ensure a specific data type is used.*/
//     // int maxInt = max<int>(x, y);  // Explicitly specify T as int

//     // // auto keyword
//     // /*In C++11 and later, you can use the auto keyword to simplify type inference even further. 
//     // The compiler deduces the data types based on the auto keyword*/

//     // auto maxInt = max(x, y);          // Compiler infers T as int
//     // auto maxDouble = max(d1, d2);     // Compiler infers T as double


//     // Type inference in action
//     int max_int = max(x, y);         // Template argument <int> is inferred
//     double max_double = max(d1, d2); // Template argument <double> is inferred



//     std::cout << "Max int: " << max_int << std::endl;
//     std::cout << "Max double: " << max_double << std::endl;

//     return 0;
// }

// // ''''''''''''''''''''Explicit Template Argument Specification'''''''''''''''''''''''''''
// // Example 1: Explicit Template Argument Specification with max Function Template
// #include <iostream>

// // Function template to find the maximum of two values
// template <class T>
// T max(T a, T b) {
//     return (a > b) ? a : b;
// }

// int main() {
//     int x = 5, y = 8;
//     double d1 = 3.14, d2 = 2.71;

//     // Explicit template argument specification
//     int maxInt = max<int>(x, y);      // Specify T as int
//     double maxDouble = max<double>(d1, d2);  // Specify T as double

//     std::cout << "Max int: " << maxInt << std::endl;
//     std::cout << "Max double: " << maxDouble << std::endl;

//     return 0;
// }

// // Example 2: Explicit Template Argument Specification with print Function Template
// #include <iostream>
// #include <vector>
// using namespace std;

// // Function template to print elements of a container
// template <typename Container> void print(const Container& container) {
//     for (const auto& element : container) {
//         cout << element << " ";
//     }
//     cout << endl;
// }

// int main() {
//     vector<int> intVector = {1, 2, 3, 4, 5};
//     vector<double> doubleVector = {3.14, 2.71, 1.618};

//     // Explicit template argument specification
//     print<vector<int>>(intVector);         // Specify Container as std::vector<int>
//     print<vector<double>>(doubleVector);   // Specify Container as std::vector<double>

//     return 0;
// }

// // ''''''''''''''''''''''''''''
// #include <iostream>

// // Function template to swap two values
// template <typename T1, typename T2>
// void mySwap(T1& a, T2& b) {
//     T1 temp = a;
//     a = static_cast<T1>(b);
//     b = static_cast<T2>(temp);
// }

// int main() {
//     int x = 66;
//     char y = 'A';

//     // Explicitly specify template arguments T1 and T2
//     mySwap<int, char>(x, y);

//     std::cout << "x after swap: " << x << std::endl;
//     std::cout << "y after swap: " << y << std::endl;

//     return 0;
// }

// // ''''''''''''''''''''''''Function Template Specializations'''''''''''''''''''''''
// /*Function template specialization in C++ allows you to provide custom implementations of a function template for specific data types 
// or conditions. It's a way to override the generic template for particular cases, 
// tailoring the behavior of the function to suit those cases. Here are the full details of function template specialization:*/

// //  Function Template Specialization Syntax:
// /*
// template <>
// return_type function_name<data_type>(parameter1_type parameter1, parameter2_type parameter2, ...) {
//     // Specialized function body
//     // Custom implementation for data_type
// }
// */
// #include <iostream>

// // Generic function template for finding the maximum of two values
// template <class T>
// T max(T a, T b) {
//     return (a > b) ? a : b;
// }

// // Function template specialization for char data type
// template <>
// char max<char>(char a, char b) {
//     return (std::toupper(a) > std::toupper(b)) ? a : b;
// }

// int main() {
//     char char1 = 'a', char2 = 'B';

//     char result = max(char1, char2);

//     std::cout << "Max char (case insensitive): " << result << std::endl;

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''
// #include <iostream>
// #include <cstring>

// // Generic template for finding the maximum of two values
// template <class T>
// T max(T a, T b) {
//     std::cout << "Generic max function" << std::endl;
//     return (a > b) ? a : b;
// }

// // Specialization for const char* type
// template <>
// const char* max<const char*>(const char* a, const char* b) {
//     std::cout << "Specialized max function for const char*" << std::endl;
//     return strcmp(a, b) > 0 ? a : b;
// }

// int main() {
//     int x = 5, y = 8;
//     const char* str1 = "apple";
//     const char* str2 = "banana";

//     int maxInt = max(x, y);               // Calls generic max function
//     const char* maxStr = max(str1, str2); // Calls specialized max function

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''
// #include <iostream>
// #include <vector>
// using namespace std;

// // Generic template for finding the maximum of two values
// template <typename T>
// T max(T a, T b) {
//     return (a > b) ? a : b;
// }

// // Specialization for vectors of integers
// template <>
// vector<int> max<vector<int>>(const vector<int>& a, const vector<int>& b) {
//     if (a.size() > b.size()) {
//         return a;
//     } else {
//         return b;
//     }
// }

// int main() {
//     int x = 5, y = 8;
//     vector<int> vec1 = {1, 2, 3};
//     vector<int> vec2 = {4, 5, 6, 7};

//     // Using the generic max function
//     int maxInt = max(x, y);
//     cout << "Max int: " << maxInt << std::endl;

//     // Using the specialized max function for vectors of integers
//     vector<int> maxVec = max(vec1, vec2);
//     cout << "Max vector: ";
//     for (const auto& element : maxVec) {
//         cout << element << " ";
//     }
//     cout << endl;

//     return 0;
// }

// '''''''''''''''''''''''Constrainst and Concept(C++20 and later) in C++'''''''''''''''''''''''''''''''
/*Constraints and Concepts are language features introduced in C++20 to improve template metaprogramming and 
make templates more expressive and safe.*/ 

/*
    1. Constraints specify conditions that must be satisfied by template arguments.
    2. Constraints can be applied to template parameters using the requires keyword.*/

// Syntax of Constraints

// template <typename T>
// concept MyConcept = /* constraint expression */;

// template <typename T>
// requires /* constraint expression */
// return_type function_name(T parameter1, T parameter2, ...);

// concept MyConcept: Defines a concept named MyConcept.
// requires /* constraint expression */: Specifies constraints on template parameters or function arguments.

// // ''''''''''''''''''''''''''
// #include <iostream>
// #include <vector>

// template <typename T>
// concept Integral = std::is_integral<T>::value;

// template <Integral T>
// T add(T a, T b) {
//     return a + b;
// }

// int main() {
//     int x = 5, y = 8;
//     std::cout << "Sum: " << add(x, y) << std::endl;

//     // Error: double is not an integral type
//     double d1 = 3.14, d2 = 2.71;
//     // std::cout << "Sum: " << add(d1, d2) << std::endl; // Compilation error

//     return 0;
// }

// '''''''''''''''''''''''''Common Use Cases for Function Template''''''''''''''''''''''''''''
// // 1.Generic Mathematic Functions
// #include <iostream>

// // Generic template for adding two values
// template <typename T>
// T add(T a, T b) {
//     return a + b;
// }

// int main() {
//     int intSum = add(5, 3);
//     double doubleSum = add(3.14, 2.71);

//     std::cout << "Int sum: " << intSum << std::endl;
//     std::cout << "Double sum: " << doubleSum << std::endl;

//     return 0;
// }

// // 2.Generic Algorithms
// #include<iostream>
// #include<vector>
// using namespace std;

// // Generic functions template to find the maximum element in a container
// template<typename Container>
// typename Container::value_type findMax(const Container& container){
//     typename Container::value_type maxElement = container[0];
//     for (const auto& element : container)
//     {
//         if (element > maxElement)
//         {
//             maxElement = element;
//         }
//         return maxElement;
//     }
    
// }

// int main(int argc, char const *argv[])
// {
//     vector<int> vec1 = {1, 2, 3, 4, 5};
//     vector<double> vec2 = {3.14, 2.71, 1.618};

//     int maxInt = findMax(vec1);
//     double maxDouble = findMax(vec2);

//     cout << "Max Int: " << maxInt << endl;
//     cout << "Max Double: " << maxDouble << endl;
    
//     return 0;
// }

// // 3. Generic Data Structure
// #include<iostream>
// #include<vector>
// using namespace std;

// template<typename T>
// struct Node
// {
//     T data;
//     Node* next;
// };

// template<typename T>
// class LinkedList{
//     public:
//         LinkedList(): head(nullptr) {

//         }
        
//         void insert(T value) {
//             // Insert implementation
//         }
//     private:
//         Node<T>* head;
// };

// int main(int argc, char const *argv[])
// {
    
//     return 0;
// }

// // 4.Generic I/O Functions
// #include<iostream>
// using namespace std;

// template<typename T>
// void print(T value) {
//     cout << value << endl;
// }
// int main(int argc, char const *argv[])
// {
//     int num = 15;
//     float float_value = 3.14;
//     double double_value = 3.14;

//     print(num);
//     print(float_value);
//     print(double_value);

//     return 0;
// }

// // 5. Custom String Operations
// #include <iostream>
// #include <string>
// #include <cstring>

// template <typename StringType>
// bool isPalindrome(const StringType& str) {
//     // Implementation to check if str is a palindrome
// }

// int main() {
//     std::string word = "radar";
//     const char* cStr = "level";

//     bool isWordPalindrome = isPalindrome(word);
//     bool isCStrPalindrome = isPalindrome(cStr);

//     std::cout << "Is word a palindrome? " << isWordPalindrome << std::endl;
//     std::cout << "Is C-string a palindrome? " << isCStrPalindrome << std::endl;

//     return 0;
// }


// // 5.Generic Container and Algorithm
// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// template<typename T>
// void printVector(const vector<T>& vec) {
//     for (const T& element : vec) 
//     {
//         cout<<element<<" ";
//     }
//     cout<<endl;
// }
// int main(int argc, char const *argv[])
// {
//     vector<int> vec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     vector<double> vec2 = {3.14, 2.5, 5.8, 1.7, 4,5};

//     printVector(vec1);
//     printVector(vec2);
    
//     return 0;
// }

// // 6.Generic Comparision Functions
// #include <iostream>
// #include <vector>
// #include<algorithm>

// using namespace std;

// template <typename T>
// bool isGreaterThan(const T& a, const T& b) {
//     return a > b;
// }

// int main() {
//     vector<int> intVector = {4, 2, 7, 1, 9};
//     vector<double> doubleVector = {3.14, 2.71, 1.618};

//     int maxInt = *max_element(intVector.begin(), intVector.end(), isGreaterThan<int>);
//     double maxDouble = *max_element(doubleVector.begin(), doubleVector.end(), isGreaterThan<double>);

//     cout << "Max int: " << maxInt << endl;
//      cout << "Max double: " << maxDouble << endl;

//     return 0;
// }


