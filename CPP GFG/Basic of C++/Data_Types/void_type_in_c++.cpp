// // ''''''''''''''''''''''''''''''''''''''''''''''''''incomplete type''''''''''''''''''''''''''''''''''''''''
// /*An incomplete type is a type that has been declared but not yet defined. For example:*/
// #include <iostream>
// using namespace std;

// // Incomplet Function types
// void fun_1();

// // Forward Declaration of class
// class MyClass; // MyClass is incomplete
// class MyClass
// {
// public:
//     void fun(); // incomplet function type
// };

// // ''''''''''''
// // Incomplete array type
// int arr[];

// // Later in the code, complete type and size are provided
// int arr[5];
// // '''''''''
// // Pointers to incomplete types
// // Pointers can be declared to point to incomplete types. However, you must provide the complete type before dereferencing the pointer.
// struct MyStruct;
// MyStruct* ptr;

// // Later in code, provide the complete type
// struct MyStruct {
//     // Structure Details
// };
// // ''''''''''''''''''
// // Incomplete type in Template
// template <typename T>
// class MyClass_2;

// //  Pointer to Function with Incomplete Parameter Types:
// // Incomplete function pointer declaration
// typedef void (*MyFunctionPtr)();

// // Later in the code, provide the complete function signature
// void myFunction(int) {
//     cout << "Hello World!" << endl;
// }

// // MyFunctionPtr ptr = &myFunction;
// // ''''''''''''''''''
// // Incomplete Union Type
// // Forward declaration of a union
// union MyUnion;

// // Later in the code, provide the complete definition
// union MyUnion {
//     int intValue;
//     float floatValue;
// };

// int main(int argc, char const *argv[])
// {
//     // Incomplete array Types
//     int arr[5];

//     // Pointer to incomlete Structure
//     MyClass *p; // Pointer to incomplete type
//     // MyClass& r; // Reference to incomplete type

//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // '''''''''''''''''''''''''''''''''''''''''void as a Return Type'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // 1.Basic Function with void Return Type:
// #include<iostream>
// using namespace std;

// // Function with void return type
// void fun() {
//     cout << "Hello World!" << endl;
// }

// int main(int argc, char const *argv[])
// {
//     fun(); // Calling the function
//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // Function with void Return Type and Parameters:
// #include <iostream>
// using namespace std;

// // Function with void return type and parameters
// void fun(int a, int b)
// {
//     cout << "Sum: " << (a + b) << endl;
// }
// int main(int argc, char const *argv[])
// {
//     fun(10, 15); // Calling the function
//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''''
// // Using void with function Pointers
// #include <iostream>
// using namespace std;

// // Function with void return type and parameters
// void fun()
// {
//     cout << "Hello, World!" << endl;
// }

// int main(int argc, char const *argv[])
// {
//     cout << fun << endl;  // output: 1
//     cout << &fun << endl; // output: 1

//     void (*ptr)() = &fun;

//     // Calling the function using function pointer
//     cout << *ptr << endl;          // output: 1
//     cout << (*ptr == fun) << endl; // output: 1
//     ptr();
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // Function with void Return Type in Class
// #include <iostream>

// // Class with member function having void return type
// class MyClass
// {
// public:
//     void displayMessage()
//     {
//         std::cout << "This is a message from MyClass." << std::endl;
//     }
// };

// int main()
// {
//     // Creating object of class
//     MyClass obj;

//     // Calling member function with void return type
//     obj.displayMessage();

//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''Void Pointer'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     void *ptr;
//     int val = 10;
//     // ptr = &val;
//     cout << &ptr << endl; // 0x546cfffa88 -> address of void pointer ptr
//     cout << ptr << endl; // 0x207a0d116b0 -> address stored(Garbage memory address) by void pointer ptr
//     // cout << *ptr << endl; // error: 'void*' is not a pointer-to-object type
//     cout << (int *)ptr << endl;  // 0x207a0d116b0 -> address stored by pointer to integer
//     cout << ((int *)ptr == ptr) << endl; // 1
//     cout << *(int *)ptr << endl;         // Deferencing by pointer to integer
//     int num = 10;
//     cout << &num << endl; //

//     // int* ptr_2;
//     // cout << ptr_2 << endl;

//     cout << "Hello" << endl;
//     return 0;
// }

// // '''''''''''''''''''''''''''Application of void pointer in C++'''''''''''''''
// // Generic code
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // int* ptr;
//     // float f = 10.5;
//     // // ptr = &f; // error: cannot convert 'float*' to 'int*' in assignment
//     // cout << ptr << endl;

//     // Initialize multiple variables of different data type
//     int num = 10;
//     float f = 15.56;
//     char ch = 'A';

//     // Initialize a void pointer
//     void *void_ptr;

//     void_ptr = &num; // Pointing to integer
//     cout << "Value of num = " << num << endl;
//     cout << "address of num = " << &num << endl;
//     cout << "Address pointed by void_ptr or address hold by void_ptr = " << void_ptr << endl;
//     cout << "Address of void_ptr = " << &void_ptr << endl;
//     cout << endl;

//     void_ptr = &f; // Pointing to float f -> Now address of float f hold by void_ptr
//     cout << "Value of f = " << f << endl;
//     cout << "address of f = " << &f << endl;
//     cout << "Address pointed by void_ptr or address hold by void_ptr = " << void_ptr << endl;
//     cout << "Address of void_ptr = " << &void_ptr << endl;
//     cout << endl;

//     void_ptr = &ch; // Pointing to char ch -> Now address of char ch hold by void_ptr
//     cout << "Value of ch = " << ch << endl;
//     cout << "address of ch = " << &ch << endl;
//     cout << "Address pointed by void_ptr or address hold by void_ptr = " << void_ptr << endl;
//     cout << "Address of void_ptr = " << &void_ptr << endl;

//     // Dynamic Memory Allocation
//     // Allocate memory for an integer using new
//     void *void_ptr_2 = new int;

//     // Type Casting the void pointer to int* for usage
//     int *int_ptr = static_cast<int *>(void_ptr_2);
//     // Assign a value to allocate memory
//     *int_ptr = 25;

//     // Deallocate the memory
//     delete int_ptr;
//     cout << *int_ptr << endl;
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''''' CallBack Function'''''''''''''''''''''''''''''''''''
// /*Functions that are passed as arguments to other functions are called callback functions*/
// // void function to pass void pointer as parameter in callback function.
// #include <iostream>
// using namespace std;

// // Callback function definition
// void Callback_fun(void *data, char dataType)
// {
//     switch (dataType)
//     {
//     case 'i':
//         cout << "Callback for integer: " << *(int *)data << endl;
//         break;
//     case 'd':
//         cout << "Callback for double: " << *(double *)data << endl;
//         break;
//     default:
//         cout << "Unsupported data type in callback" << endl;
//     }
// }

// // Function that takes a Callback function
// void perform_operation(void *data, char dataType, void (*callback)(void *, char))
// {
//     // Call the Callback function
//     callback(data, dataType);
// }

// int main(int argc, char const *argv[])
// {
//     int num = 25;
//     double d = 25.5;
//     char charType = 'A';

//     // Perform operation with integer and callback
//     perform_operation(&num, 'i', Callback_fun);

//     // Perform operation with double and callback
//     perform_operation(&d, 'd', Callback_fun);
//     return 0;
// }

// // ''''''''''''''''''''
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[5] = {10, 20, 30, 40, 50};
//     void* voidPtr = &arr;
//     cout << *(int*)voidPtr << endl; // 10

//     voidPtr = voidPtr + sizeof(arr[0]); // Increment the pointer by the size of integer
//     cout << *(int*)voidPtr << endl; // 20
//     return 0;
// }
// ''''''''''''''''''''''''''''''''''''''''''''''''Deferencing of void pointer''''''''''''''''''''''''''''''''''

// // ''''''''''''''''''''''''''''''''''''''1. Basic Deferencing of void pointer'''''''''''''''''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     void *ptr;
//     int num =  10;
//     ptr = &num;// Assigning address of int variable to void pointer

//     // Dereferencing void pointer after casting to int pointer
//     int *num_ptr = static_cast<int *>(ptr); // Casting void ptr to int ptr

//     return 0;
// }

// // '''''''''''''''''''''''''''''''2. Dereferncing in function'''''''''''''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// void process(void *voidPtr)
// {
//     cout << "Dereferenced Value inside function by *(int*)voidPtr= " << *(int *)voidPtr << endl;
//     cout << "Address hold by pointer to inside function by static_cast<int*>(voidPtr)= " << static_cast<int *>(voidPtr) << endl;
//     cout << "Address hold by pointer to void inside function by voidPtr= " << voidPtr << endl;
//     cout << "Dereferenced Value inside function by *static_cast<int*>(voidPtr)= " << *static_cast<int *>(voidPtr) << endl;
//     int *intPtr = static_cast<int *>(voidPtr);
//     cout << "Dereferenced Value inside function by *intPtr" << *intPtr << endl;

//     int value = *static_cast<int *>(voidPtr);
//     cout << "Dereferenced value assigning to variable value = " << value << endl;
//     cout << endl;
// }
// int main(int argc, char const *argv[])
// {
//     int num = 10;
//     void *ptr = &num;

//     process(&num); // Passing a Reference to integer
//     process(ptr);  // Passing a void pointer to function

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''''''Dynamic Memory Allocation and void pointer''''''''''''''''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     void *voidPtr = malloc(sizeof(char));
//     if (voidPtr != nullptr)
//     {
//         // Casting void pointer to int pointer
//         int *intPtr = static_cast<int *>(voidPtr);
//         *intPtr = 25; // Dereferencing and assigning the value
//         cout << "Value after Dereferncing = " << *intPtr << endl;

//         // Free allocated memory
//         free(intPtr);
//     }

//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''''''''''Dereferncing an Array of void pointer''''''''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int num =  15;
//     float f = 12.23;
//     char ch = 'A';

//     // Array of void pointer
//     void* arrayPtr[3];
//     arrayPtr[0] =  &num; // Assigning the address of int variable to void pointer arrayPtr[0]
//     arrayPtr[1] =  &f; // Assigning the address of float variable to void pointer arrayPtr[1]
//     arrayPtr[2] =  &ch; // Assigning the address of char variable to void pointer arrayPtr[2]

//     // Dereferencing the void pointer after casting to appropriate types
//     int* intPtr = static_cast<int*>(arrayPtr[0]);
//     float* floatPtr = static_cast<float*>(arrayPtr[1]);
//     char* charPtr = static_cast<char*>(arrayPtr[2]);

//     cout << "Dereferenced int value = " << *intPtr << endl;
//     cout << "Dereferenced float value = " << *floatPtr << endl;
//     cout << "Dereferenced char value = " << *charPtr << endl;

//     return 0;
// }

// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // ''''''''''''''''''''''''''''''''''''void parameters''''''''''''''''''''''''''
// /*In C++, you can define functions that accept parameters of type void. This indicates that the function does not expect any arguments.*/
// // 1.Function with void parameters
// #include <iostream>
// using namespace std;

// // Function with void parameters
// void great(void) {
//     cout << "great" << endl;
// }

// int main(int argc, char const *argv[])
// {
//     great(); // Call the function without passing any arguments

//     return 0;
// }

// '''''''''''''''''''''''
// // 2.Using void in Function prototype
// #include <iostream>
// using namespace std;

// // Function prototype with void parameters
// void great(void);

// int main(int argc, char const *argv[])
// {
//     great(); // Call the function without passing any arguments

//     return 0;
// }

// // Function Definition with void parameters
// void great(void) {
//     cout << "great function with void parameters" << endl;
// }

// // ''''''3.Function with multiparameters and void:
// #include <iostream>

// // Function with void parameter and other parameters
// void printSum(int a, int b, void) { // error: invalid use of type 'void' in parameter declaration
//     std::cout << "Sum of " << a << " and " << b << " is: " << (a + b) << std::endl;
// }

// int main() {
//     // Calling the function without passing any arguments for the void parameter
//     printSum(10, 20); // error: too few arguments to function 'void great(int, int, <type error>)'
//     return 0;
// }

// // '''''''''''''''''''''''4.Function Pointer with void parameter
// #include <iostream>
// using namespace std;

// // Function with void parameter
// void fun(void)
// {
//     cout << "Function with void parameter" << endl;
// }
// int main(int argc, char const *argv[])
// {
//     // Function pointer with void parameter
//     void (*ptrFun)(void) = fun;

//     // Calling function using the function pointer
//     ptrFun();
//     return 0;
// }

// // '''''''''''''''''''5.void parameter in Function Template
// #include <iostream>
// using namespace std;

// template<typename T>
// // void funTemp(T message, void) { // a parameter may not have void type
// //     cout << "message: " << message << endl;
// // }

// void funTemp(T message) {
//     cout << "message: " << message << endl;
// }
// int main(int argc, char const *argv[])
// {
//     funTemp("Hello, world!");
//     funTemp(534);
//     funTemp('A');
//     return 0;
// }

// // '''''''''''''''''Template Class with void Template Parameters
// #include <iostream>
// using namespace std;

// template <typename T = void>
// class MyClass
// {
// public:
//     void Display()
//     {
//         cout << "Diaplaying MyClass" << endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     // Create an object of template class with different template parameters
//     MyClass<int> obj1;
//     obj1.Display();

//     MyClass<void> obj2;
//     obj2.Display();
//     return 0;
// }

// // ''''''''''''''''''''''''''''''Specialization with Void Template''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// // Template Class with specialization with Void Template Parameters
// template <typename T>
// class MyClass
// {
// public:
//     void Display()
//     {
//         cout << "Diaplaying MyClass" << endl;
//     }
// };

// template <>
// class MyClass<void>
// {
// public:
//     void Display()
//     {
//         cout << "Diaplaying MyClass<void>" << endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     // Creating object of the template class with different template parameters
//     MyClass<int> obj1;
//     obj1.Display();

//     MyClass<void> obj2;
//     obj2.Display();

//     return 0;
// }

// // '''''''''''''''''''''''''''Template for void parameter
// #include <iostream>
// using namespace std;

// template <void (*func)()>
// // Template with void parameter
// void callFunction()
// {
//     func(); // Call the function with pointer to function
// }

// void MyFunc()
// {
//     cout << "MyFunc" << endl;
// }
// int main(int argc, char const *argv[])
// {
//     // Using a template to call a function with void parameters
//     callFunction<MyFunc>();
//     return 0;
// }

// // '''''''''''''''''''''''Template Function taking void parameters
// #include <iostream>
// using namespace std;

// template<typename T>
// void fun(void* ptr) {
//     cout << "*static_cast<T*>(ptr):  " << *static_cast<T*>(ptr) << endl;
//     cout << "Value from void pointer:  " << *static_cast<T*>(ptr) << endl;
// }
// int main(int argc, char const *argv[])
// {
//     int num = 10;
//     void *voidPtr = &num;

//     // Calling a template function with void pointer
//     fun<int>(voidPtr);
//     fun<int>(&num);
//     return 0;
// }

// ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // '''''''''''''''''''''''''''''''''''void in Function Pointer'''''''''''''''''''
// // 1.Declaration and Usage of Function Pointer with void Return type
// #include <iostream>
// using namespace std;

// // Function with void return type
// void fun()
// {
//     cout << "Hello, world1" << endl;
// }
// int main(int argc, char const *argv[])
// {
//     // Declaration of Function pointer with void return type
//     void (*voidPtr)() = fun;

//     // Calling the function using function pointer
//     voidPtr();

//     return 0;
// }

// // ''''''''''''''''''2.Passing Function pointer with void return type as a argument
// #include <iostream>
// using namespace std;

// // Function taking a function pointer with void return type as a parameter
// void callFunc(void (*fun)())
// {
//     fun();
// }

// // Function with void return type
// void MyFun()
// {
//     cout << "MyFun" << endl;
// }

// int main(int argc, char const *argv[])
// {
//     callFunc(MyFun); // Passing a function pointer with void return type as a argument
//     return 0;
// }

// // ''''''''''''''''''3.Using typedef for Function Pointer with no return type
// #include <iostream>
// using namespace std;

// void fun()
// {
//     cout << "Hello, world1" << endl;
// }
// int main(int argc, char const *argv[])
// {
//     // typedef for funtion pointer with void return type
//     typedef void (*funPtr)();

//     // Declaration and Initialization of funtion pointer using typedef
//     funPtr ptr = fun;

//     // Calling the function using function pointer
//     ptr();

//     return 0;
// }

// // '''''''''''''''''''''''''4. Array of function pointers with void return types
// #include <iostream>
// using namespace std;

// // Function with void return type
// void fun1()
// {
//     cout << "Hello, world1" << endl;
// }

// // Function with void return type
// void fun2()
// {
//     cout << "Hello, world2" << endl;
// }

// int main(int argc, char const *argv[])
// {
//     // Array of function pointers with void return types
//     void (*voidPtrs[])() = {fun1, fun2};

//     // Calling the function using function pointer with the for loop
//     for (int i = 0; i < 2; i++)
//     {
//         voidPtrs[i]();
//     }
//     return 0;
// }

// // ''''''''''''''''''''''''5.Function Pointer with void pointer
// #include <iostream>
// using namespace std;

// void fun(void *message)
// {
//     cout << "message: " << *static_cast<const char *>(message) << endl; // Output: H
//     cout << "message: " << static_cast<const char *>(message) << endl; // Output: Hello, world!
// }

// int main()
// {
//     // Declaring a function pointer with void pointer
//     void (*voidPtr)(void *) = fun;

//     const char* message = "Hello, world!";
//     // Calling the function using function pointer
//     voidPtr(const_cast<char*>(message));
//     return 0;
// }

// // ''''''''''''''''''''''''''''Functio Pointer as Template Parameter with void* Parameter
// #include <iostream>
// using namespace std;

// // Function template with void parameter
// template <void (*func)(void *)>
// void callFunction(void* message) {
//     func(message);
// }

// // Function to be used with template
// void printMessage(void* message) {
//     cout << "message: " << static_cast<const char*>(message) << endl;
// }
// int main(int argc, char const *argv[])
// {
//     // Using a function pointer template with void parameter
//     const char* msg = "Hello, world!";
//     callFunction<printMessage>(const_cast<char*>(msg));
//     return 0;
// }

// // ''''''''''''''''''''''void Reference in C++'''''''''''''''''''''''''''''''''''
// /*
// In C++, it's not possible to have a reference to void (void&), as references must always refer to a valid object or variable. 
// However, you can have references to pointers, including void*, which can be useful in certain situations.*/

// // 1.Reference to 'void*'
// #include <iostream>
// using namespace std;

// void fun(void*& ptr) {
//     cout << "Address stored by int pointer ptr: "<< static_cast<int*>(ptr) << endl; //0x6d7c7ffb2c
//     cout << "Address stored by void pointer ptr: "<< ptr << endl; // 0x6d7c7ffb2c
//     cout << "Value pointed by int pointer ptr: "<< *static_cast<int*>(ptr) << endl; // 10
// }
// int main(int argc, char const *argv[])
// {
//     int num = 10;
//     void* voidPtr;
//     voidPtr = &num;

//     fun(voidPtr);
//     return 0;
// }

// 2.Reference to pointer to void
#include <iostream>
using namespace std;

void fun(void* ptr) {
    cout <<  "" << endl;
}
int main(int argc, char const *argv[])
{
    
    return 0;
}