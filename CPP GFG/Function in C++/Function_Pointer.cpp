// // **************************************Function Pointers****************************************************
// // Syntax of Function Pointers
// //          return_type (*pointer_name)(parameter_types);

// // '''''''''''''''''''''
// #include<iostream>
// using namespace std;
// // 1.Declaring a function pointer

// /* Declare a function pointer named 'add' that can point to a function
// taking two ints and returning an int. */
// int (*add)(int, int);

// // 2. Assigning a function to a pointer
// /* Define a function 'sum' that matches the signature of the 'add' pointer. */
// int sum(int a, int b) {
//     return a + b;
// }

// int main(int argc, char const *argv[])
// {
//     // Assigning the function to pointer
//     /* Assign the 'sum' function to the 'add' pointer. */
//     add = &sum; // or simply 'add = sum;' (both forms are valid)

//     // Call the function 'sum' indirectly through the 'add' pointer.
//     /*Call the function 'sum' indirectly through the 'add' pointer */
//     int result = add(5, 3);
//     cout << result << endl;

//     return 0;
// }


// ''''''''''''''''''''''''''''''''''''''Function Declarations''''''''''''''''''''
// 1.Basic Functions Declarations
//      return_type (*pointer_name)(parameter_types);
//      int (*add)(int, int); // Declaring a function pointer named 'add'.

// 2.Fuction Pointers Declarations with Typedef
//      typedef return_type (*PointerName)(parameter_types);

/*      typedef int (*MathFunction)(int, int); // Declaring a typedef for a function pointer.
        MathFunction operation; // Declaring a function pointer variable using the typedef.
*/

// 3.Function Pointers for Functions with No Parameters
//      return_type (*pointer_name)();
//      void (*noParamFunc)(); // Declaring a function pointer for a function with no parameters.

// 4.Function Pointers for Functions with No Return Types
//      void (*pointer_name)(parameter_types);
//      void (*printMessage)(const char*); // Declaring a function pointer for a function with no return value.

// 5.Function Pointers for Member Functions
//      return_type (ClassName::*pointer_name)(parameter_types);
/*
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
};

int (Calculator::*addPtr)(int, int); // Declaring a function pointer for a member function.
*/

// 6.Declaring Function Pointer as a Member of a Struct or Class:
/*
struct MyStruct {
    return_type (*pointer_name)(parameter_types);
};

// or

class MyClass {
public:
    return_type (*pointer_name)(parameter_types);
};
*/

// struct MathOperations {
//     int (*add)(int, int);
//     int (*subtract)(int, int);
// };

// MathOperations math; // Create an instance of the struct.

// 7.Array of Function Pointers:

// ''''''''''''''''''''''''''''Assigning Using a Typedef''''''''''''''
// typedef int (*Operation)(int, int); // Define a typedef for a function pointer type.
// Operation addPtr = add; // Assign the 'add' function to the 'addPtr' pointer using the typedef.

