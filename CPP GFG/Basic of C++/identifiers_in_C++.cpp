// // '''''''''''''''''Declarations of identifiers''''''''''''''''''''''''''
// // 1.the identifiers that are alternative representations for certain operators and punctuators cannot be used for other purposes;
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // ''''''''''''''''''1.Ternary Operator (? :): It is a shorthand for an if-else statement.
//     // Traditional if-else statement
//     int x = 10;
//     int result;

//     if (x > 5)
//     {
//         result = 1;
//     }
//     else
//     {
//         result = 0;
//     }

//     // Equivalent ternary operator
//     result = (x > 5) ? 1 : 0;

//     // ''''''''''''2.Compound Assignment Operators: These operators combine an operation with an
//     int a = 5;

//     // Traditional way
//     a = a + 3;

//     // Equivalent compound assignment operator
//     a += 3;

//     // ''''''''''''''''3.Increment and Decrement Operators (++ and --): These operators increment or decrement the value of a variable.
//     int b = 7;

//     // Traditional way
//     b = b + 1; // Increment
//     b = b - 1; // Decrement

//     // Equivalent increment and decrement operators
//     b++; // Increment
//     b--; // Decrement

//     // '''''''''''''''4.Logical Operators (&& and ||): These operators are used for logical AND and OR operations.
//     bool condition1 = true;
//     bool condition2 = false;

//     // Traditional way
//     if (condition1 && condition2)
//     {
//         // Code block
//     }

//     // Equivalent logical AND operator
//     if (condition1 and condition2)
//     {
//         // Code block
//     }

//     // Traditional way
//     if (condition1 || condition2)
//     {
//         // Code block
//     }

//     // Equivalent logical OR operator
//     if (condition1 or condition2)
//     {
//         // Code block
//     }

//     // '''''''''''5.Bitwise Operators (&, |, ^, ~, <<, >>): These operators perform bitwise operations.
//     int num1 = 5;
//     int num2 = 3;

//     // Traditional way
//     int resultBitwise = num1 & num2; // Bitwise AND

//     // Equivalent bitwise AND operator
//     int resultBitwise_2 = num1 bitand num2;

//     // Traditional way
//     int resultShift = num1 << 2; // Left shift by 2

//     // Equivalent left shift operator
//     // int resultShift_2 = num1 shl 2;

//     // '''''''''6.
//     return 0;
// }

// // '''''''''''''
// %:include <iostream>

// struct X
// <%
//     compl X() <%%> // destructor
//     X() <%%>
//     X(const X bitand) = delete; // copy constructor
//     // X(X and) = delete; // move constructor

//     bool operator not_eq(const X bitand other)
//     <%
//        return this not_eq bitand other;
//     %>
// %>;

// int main(int argc, char* argv<::>)
// <%
//     // lambda with reference-capture:
//     auto greet = <:bitand:>(const char* name)
//     <%
//         std::cout << "Hello " << name
//                   << " from " << argv<:0:> << '\n';
//     %>;

//     if (argc > 1 and argv<:1:> not_eq nullptr)
//         greet(argv<:1:>);
//     else
//         greet("Anon");
// %>

// // '''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int a =10;
//     void* generic_pointer;
//     void** generic_pointer_2;
//     generic_pointer = &a;
//     generic_pointer_2 = &generic_pointer;
//     cout << (int*) generic_pointer << endl;
//     cout << *(int**) generic_pointer << endl;

//     return 0;
// }

// '''''''''''''''''''''''''''''''''''
// #include <iostream>

// int main(int argc, char const *argv[])
// {
//     int a = 10;
//     int* pointer_to_a = &a;
//     int** pointer_to_pointer_to_a = &pointer_to_a;
//     std::cout << pointer_to_a << std::endl;
//     std::cout << *pointer_to_pointer_to_a << std::endl;

//     return 0;
// }

// // ''''''''''''''''''''''''''''
// #include <iostream>

// int* getIntegerPointer(int* value) {
//     return value;
// }

// int** getIntegerPointerPointer(int** value) {
//     return value;
// }

// int main(int argc, char const *argv[]) {
//     int a = 10;
//     int* integer_pointer = getIntegerPointer(&a);
//     int** integer_pointer_pointer = getIntegerPointerPointer(&integer_pointer);

//     std::cout << integer_pointer << std::endl;
//     std::cout << *integer_pointer_pointer << std::endl;

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''
// #include <iostream>

// int main() {
//     // Using \u for characters within the Basic Multilingual Plane (BMP)
//     std::cout << "\u03B1" << " "; // Greek letter alpha (α)
//     std::cout << "\u03B2" << std::endl; // Greek letter beta (β)

//     // Using \U for characters beyond the BMP (e.g., emojis)
//     std::cout << "\U0001F600" << std::endl; // Grinning face emoji (😀)

//     int \u00A8 = 10;
//     std::cout << \u00A8 << std::endl;
//     int __num = 10;
//     int __num_2 = 50;
//     std::cout << __num << std::endl;
//     std::cout << __num_2 << std::endl;

//     return 0;
// }

// '''''''''''''''''''''''''Identifiers with special meanings: final, import, module and override'''''''''''''''''''''''''''''
// // identifier with final keyword:
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int __num = 10;
//     cout << __num + 100 << endl;
//     return 0;
// }

// // '''''''''''''
// #include <iostream>

// // Good practice: Using literal suffix without starting with an underscore.
// constexpr long long operator"" _custom_suffix(unsigned long long value) {
//     return value * 2;
// }

// int main() {
//     // Using the custom literal suffix.
//     long long result = 52_custom_suffix;

//     std::cout << "Result: " << result << std::endl;

//     return 0;
// }

// // ''''''''''''''''''
// #include <iostream>

// void f()
// {
//     float x, &r = x;

//     // [=]
//     {
//         decltype(x) y1;        // y1 has type float
//         decltype((x)) y2 = y1; // y2 has type float const& because this lambda
//                                // is not mutable and x is an lvalue
//         decltype(r) r1 = y1;   // r1 has type float&
//         decltype((r)) r2 = r1; // r2 has type float const&
//     };

//     std::cout << "helo" << std::endl;
// }

// int main() {
//     int x = 5;
//     {
//         int x = 10; // This 'x' shadows the outer 'x'
//         std::cout << x << std::endl; // Prints 10
//     }
//     // The outer 'x' is not accessible here
//     std::cout << x << std::endl; // Prints 5
//     f();
//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // ''''''''''''''''''''''''''''''''''''''''''''''''''Identifiers in C++'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // Valid Identifiers
//     int myVariable;
//     double pi;
//     char _underscore;
//     void myFunction();
//     class MyClass;
//     const int MAX_SIZE = 100;

//     // Invalid Identifiers
//     // int 2variable;       // Can't start with a digit
//     // float my-variable;   // Hyphens are not allowed
//     // bool if;            // Reserved keyword
//     // long long;          // Can't have empty identifier
//     // double __double;     // Reserved for the implementation

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''List of All Identifiers in C++ with code snippets''''''''''''''''''''
// // 1.Variable:
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // 1.Variables
//     int age = 25;
//     float temperature = 98.6f;
//     char grade = 'A';
//     bool isStudent = true;

//     return 0;
// }

// // '''''''2.Functions
// #include<iostream>
// using namespace std;

// int add(int a, int b) {
//     return a + b;
// }

// void greet() {
//     cout << "Hello, World!" << endl;
// }

// int main(int argc, char const *argv[])
// {
//     return 0;
// }

// // '''''''''''''''''''''''''3.Classes
// #include <iostream>
// using namespace std;

// class Car
// {
// private:
//     std::string model;
//     int year;

// public:
//     void setModel(std::string m)
//     {
//         model = m;
//     }
//     std::string getModel()
//     {
//         return model;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     return 0;
// }

// // '''''''''''''''''4.Enum
// #include<iostream>
// using namespace std;

// enum ColorS {
//     RED, GREEN, BLUE
// };
// enum class DirectionS {
//     UP, DOWN, RIGHT, LEFT
// };

// int main(int argc, char const *argv[])
// {
//     return 0;
// }

// // '''''''''''''''''5.constant
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     const int MAX_PRICE = 1000;
//     constexpr double PI = 3.14;

//     return 0;
// }

// // ''''''''''''''''''6.Pointers
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int* ptr = nullptr;
//     char* str = "Hello World";
//     cout << *str << endl;
//     return 0;
// }

// // ''''''''''''''''7.References
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int x = 5;
//     int &ref = x;
//     return 0;
// }

// // '''''''''''''8.Arrays
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int numbers[5] = {1, 2, 3, 4, 5};
//     char name[] = "John";

//     return 0;
// }

// // ''''''''''''''9.Structures
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     struct Point
//     {
//         int x;
//         int y;
//     };

//     return 0;
// }

// // ''''''''''''''''''10.namespace
// #include <iostream>
// using namespace std;

// namespace math
// {
//     int square(int x)
//     {
//         return x * x;
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int result = math::square(10);
//     cout << result << endl; // 100
//     return 0;
// }

// // ''''''''''''''''''''''''''''11.typedef
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     typedef int Length;
//     Length width = 10;

//     return 0;
// }

// // '''''''''''''''''''''''12.Macros
// #include <iostream>
// using namespace std;

// #define MAX(a, b) ((a) > (b) ? (a) : (b))
// int maximum = MAX(5, 10);

// int main(int argc, char const *argv[])
// {
//     int max_value = MAX(5, 10);
//     return 0;
// }

// // '''''''''''''''''''''''''13.Labels(used with goto)
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
// start:
//     cout << "Hello World!" << endl;
//     goto start;

//     return 0;
// }

// ''''''''''''''''''''''''''''''14.File-scope identifiers:
// static int count = 0;

// // ''''''''''''''''''''''''''15.Template parameters
// #include <iostream>
// using namespace std;

// template <typename T>

// T add(T a, T b)
// {
//     return a + b;
// }

// int main(int argc, char const *argv[])
// {
//     add(10, 15);

//     return 0;
// }

// // ''''''''''''''''''''''''''''''''16.Lambda Expression
// #include<iostream>
// using namespace std;

// auto sum = [](int a, int b) {
//     return a + b;
// };

// int main(int argc, char const *argv[])
// {
//     std::cout << sum(10, 15) << std::endl;
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''17.Member Access Operators
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     struct Point
//     {
//         int x;
//         int y;
//     };
//     Point p;
//     p.x = 10;

//     return 0;
// }

// // '''''''''''''''''''''''''''18.Function Pointer
// #include <iostream>
// using namespace std;

// int add(int a, int b)
// {
//     return a + b;
// }

// int (*funcPtr)(int, int) = add;
// int result = funcPtr(5, 3);

// int main(int argc, char const *argv[])
// {

//     return 0;
// }

// // '''''''''''''''''''''''''''''''19.Virtual functions
// #include <iostream>
// using namespace std;

// class Shape
// {
// public:
//     virtual void draw() = 0;
// };

// class Circle : public Shape
// {
// public:
//     void draw() override
//     {
//         // Draw circle
//         cout << "Circle" << endl;
//     }
// };

// int main(int argc, char const *argv[])
// {

//     return 0;
// }

// // '''''''''''''''''''''''''''''20.Friend Function
// #include <iostream>
// using namespace std;

// class MyClass
// {
// private:
//     int value;

// public:
//     friend void printValue(const MyClass &obj);
// };

// void printValue(const MyClass &obj)
// {
//     std::cout << obj.value << std::endl;
// }

// int main(int argc, char const *argv[])
// {

//     return 0;
// }

// // ''''''''''''''''''''''21.Iterator Type
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     std::vector<int>::iterator it;
//     std::map<std::string, int>::iterator mapIt;

//     return 0;
// }

// // ''''''''''''''''''''''''''22.Preprocessor Directives
// #include <iostream>
// using namespace std;

// #ifndef MY_HEADER_H
// #define MY_HEADER_H
// // code
// #endif

// int main(int argc, char const *argv[])
// {

//     return 0;
// }

// // ''''''''''''''''''''''''''''''23.Using Statements
// #include <iostream>
// #include <vector>

// using namespace std;
// using std::vector;

// int main(int argc, char const *argv[])
// {

//     return 0;
// }

// // '''''''''''''''''''''''''''''24.Virtual Base Classes
// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     int a;
// };

// class B : virtual public A
// {
// public:
//     int b;
// };

// class C : virtual public A
// {
// public:
//     int c;
// };

// class D : public B, public C
// {
// public:
//     int d;
// };

// int main(int argc, char const *argv[])
// {

//     return 0;
// }

// // '''''''''''''''''''''''''''25.Inline Function
// #include <iostream>
// using namespace std;

// inline int square(int x)
// {
//     return x * x;
// }

// int main(int argc, char const *argv[])
// {

//     return 0;
// }

// // '''''''''''''''''''''''26.Operator Overloading
// #include <iostream>
// #include <iterator>
// using namespace std;

// class Complex
// {
// private:
//     double real;
//     double imag;

// public:
//     Complex operator+(const Complex &other)
//     {
//         Complex result;
//         result.real = this->real + other.real;
//         result.imag = this->imag + other.imag;
//         return result;
//     }
// };

// int main(int argc, char const *argv[])
// {

//     return 0;
// }

// '''''''''''''''''''''''27.

// // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // Unicode code point number ranges are allowed as universal character names for any character in an identifier
// #include <iostream>
// using namespace std;

// int main() {
//     // Using universal character names to represent special characters
//     // int \U000003C0 = 3; //  π \U000003C0 represent π
//     int \u03C0 = 3; // π \u03C0 represent π
//     int \u03B1 = 5; // α  \u0B1 == α
//     int \u00A8 = 6; //
//     int \u03C0\u00A8 = 7;

//     // Using these identifiers
//     // cout << "Value of \U000003C0: " << \U000003C0 << endl;
//     cout << "Value of \u03C0: " << \u03C0 << endl;
//     cout << (\u03C0 == \U000003C0) << endl; // 1 (true)
//     cout << "Value of \u03B1: " << \u03B1 << endl;
//     cout << "Value of \u00A8: " << \u00A8 << endl;
//     cout << "Value of \u03B1: " << \u03B1 << endl;
//     cout << "Value of \u03C0\u00A8: " << \u03C0\u00A8 << endl;

//     // int \u0300 = 8; //  error: universal character \u0300 is not valid at the start of an identifier
//     // cout << "Value of \u0300: " << \u0300 << endl;

//     int \u03B1\u0300 = 9;
//     cout << "Value of \u03B1\u0300: " << \u03B1\u0300 << endl;

//     return 0;
// }

// // ''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     std::string name = "Hello\u03C0";
//     // char ch = '\u03C0'; // π
//     int ch = '\u03C0';   // π
//     int ch_2 = '\u03C0'; // π

//     cout << name << endl;                  // Helloπ
//     cout << ch << endl;                    // 53120
//     cout << (ch == (int)'\u03C0') << endl; // 1
//     cout << (ch == 'π') << endl;           // 1
//     return 0;
// }

// // '''''''''''''''''''''''''''''Alternatives Tokens
// %:include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// <%
//     int x = 10, y = 15;
//     cout << (x & y) << endl;      // 10
//     cout << (x bitand y) << endl; // 10
//     if ((x & y) == (x bitand y))
//     <%
//         cout << "true" << endl;
//     %>

//     int arr<:5:> = <%1, 2, 3, 4, 5%>;
//     cout << "arr<:3:> -> " << arr<:3:> << endl;
//     if (arr[3] == arr<:3:>)
//     {
//         cout << "arr[3] == arr<:3:> is true." << endl;
//     }

//     return 0;
// %>

// // ''''''''''''''''''''''''''''''Literal Operators''''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// constexpr unsigned long long operator"" _bin(const char *binaryString)
// {
//     unsigned long long result = 0;
//     while (*binaryString != '\0')
//     {
//         if (*binaryString == '0' || *binaryString == '1')
//         {
//             result = (result << 1) + (*binaryString - '0');
//             ++binaryString;
//         }
//         else
//         {
//             throw std::invalid_argument("Invalid binary string");
//         }
//     }
//     return result;
// }
// int main()
// {
//     constexpr unsigned long long num1 = 101010_bin;
//     std::cout << "Binary literal 101010_bin is equivalent to decimal: " << num1 << std::endl;

//     // Will throw an exception for invalid binary string
//     // constexpr unsigned long long num2 = 1234_bin;

//     return 0;
// }

// // '''''''''''''''''''''''''Identifiers with special meanings: final, import, module and override'''''''''''''''''''''''''''''
// // 1.final:
// // Used to indicate that a class cannot be subclassed or that a virtual function cannot be overridden.
// #include <iostream>
// using namespace std;

// class Base
// {
// public:
//     virtual void foo() final; // Prevents further overriding in derived classes
// };

// class Derived : public Base
// {
// public:
//     // Error: Cannot override a final function
//     // void foo() override;
// };

// int main(int argc, char const *argv[])
// {

//     return 0;
// }

// // 2.import
// // Used in module interfaces (introduced in C++20) to import symbols from other modules into the current module.
// #include<iostream>
// using namespace std;

// import std.core;  // Import symbols from the std core module

// int main(int argc, char const *argv[])
// {

//     return 0;
// }

// // 3.module:
// // Used to define a module unit, which is a logical division of code in C++20 modules.
// module mymodule;  // Definition of a module

// export module mymodule;

// export void foo() {
//     // Function definition
// }

// // 4.override:
// // Used to explicitly declare that a function overrides a virtual function in the base class.
// #include <iostream>
// using namespace std;

// class Base
// {
// public:
//     virtual void foo();
// };

// class Derived : public Base
// {
// public:
//     void foo() override {
//         cout << "Derived from Base Calsses" << endl;
//     }; // Indicates that 'foo' overrides 'Base::foo'
// };

// int main(int argc, char const *argv[])
// {

//     return 0;
// }

// '''''''''''