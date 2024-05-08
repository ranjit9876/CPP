// // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // ''''''''''''''''''''''''''''''''''''''''''Fundamental Types'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // ''''''''''''''''''''''''''''''''1.Void Type''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// /* 1.void data types: void — type with an empty set of values. It is an incomplete type that cannot be completed (consequently,
// objects of type void are disallowed). There are no arrays of void, nor references to void. However, pointers to void and
// functions returning type void (procedures in other languages) are permitted.*/

// /*In C++, the void keyword is used to indicate that a function does not return a value or that a pointer does
// not point to any particular type. There are two main uses of void in C++:*/

// // // ''''''''''''''''''''''''''''''Void as a Function Return Type''''''''''''''''''''''''''''''''''''''''''
// /*When a function does not return any value, you declare its return type as void. */
// #include<iostream>
// using namespace std;

// void printMessage() {
//     std::cout << "Hello, World!" << std::endl;
// }

// int main(int argc, char const *argv[])
// {
//     printMessage();
//     return 0;
// }

// // ''''''''''''''''''''''''''Void Pointer''''''''''''''''''''''''''''''''''''''''''
// /*A pointer of type void* is a generic pointer that can point to any type of data. It does not have a specific data
// type associated with it. However, when you dereference a void* pointer, you need to cast it to the appropriate type.*/
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int integer_value = 10;
//     float float_value = 3.14;
//     char char_value = 'A';
//     std::string string_value = "John";

//     void *generic_pointer;

//     // Pointing the void pointer to an integer_value
//     generic_pointer = &integer_value;
//     std::cout << "Address of the generic_pointer = &generic_pointer: " << &generic_pointer << std::endl;                                             // 0xb62a1ffe48
//     std::cout << "Address stored by the generic_pointer or Value stored by the generic_pointer = generic_pointer: " << generic_pointer << std::endl; // 0xb62a1ffe78
//     std::cout << "Address of the integer_value = &integer_value: " << &integer_value << std::endl;                                                   // 0xb62a1ffe78
//     std::cout << "Value stored by the integer_value = integer_value: " << integer_value << std::endl;                                                // 10

//     std::cout << "Address stored of 'integer_value' or Value stored by the 'generic_pointer' in the pointer-to-integer formate = (int *)generic_pointer = " << (int *)generic_pointer << std::endl;         // 0xb62a1ffe78
//     std::cout << "Address stored of 'integer_value' or Value stored by the 'generic_pointer' in the floating-point-pointer formate = (float *)generic_pointer = " << (float *)generic_pointer << std::endl; // 0xb62a1ffe78
//     std::cout << "Address stored of integer_value or Value stored by the 'generic_pointer' in the character-pointer formate = (char16_t *)generic_pointer = " << (char16_t *)generic_pointer << std::endl;  // 0xb62a1ffe78
//     std::cout << "Address stored of integer_value or Value stored by the 'generic_pointer' in the string-pointer formate = (string *)generic_pointer = " << (string *)generic_pointer << std::endl;         // 0xb62a1ffe78
//     std::cout << "Address stored of integer_value or Value stored by the 'generic_pointer' in the character-pointer formate = (int **)generic_pointer =  " << (int **)generic_pointer << std::endl;         // 0xb62a1ffe78
//     std::cout << "Address stored of integer_value or Value stored by the 'generic_pointer' in the character-pointer formate = (string **)generic_pointer =  " << (string **)generic_pointer << std::endl;   // 0xb62a1ffe78
//     std::cout << "(int ***)generic_pointer = " << (int ***)generic_pointer << std::endl;                                                                                                                    // 0xb62a1ffe78
//     std::cout << "(bool *)generic_pointer = " << (bool *)generic_pointer << std::endl;                                                                                                                      // 0xb62a1ffe78
//     std::cout << "(bool **)generic_pointer = " << (bool **)generic_pointer << std::endl;                                                                                                                    // 0xb62a1ffe78

//     // std::cout << "Value Pointed by the 'generic_pointer' = *generic_pointer: " << *generic_pointer << std::endl; // error: 'void*' is not a pointer-to-object type
//     std::cout << "Value Pointed by the 'generic_pointer' = *(int *)generic_pointer: " << *(int *)generic_pointer << std::endl;     // 10
//     std::cout << "Value Pointed by the 'generic_pointer' = *(int **)generic_pointer: " << *(int **)generic_pointer << std::endl;   // 0x7ff70000000a
//     std::cout << "Value Pointed by the 'generic_pointer' = *(int ***)generic_pointer: " << *(int ***)generic_pointer << std::endl; // 0x7ff70000000a

//     std::cout << "Type of '*(int *)generic_pointer' = typeid(*(int *)generic_pointer).name(): " << typeid(*(int *)generic_pointer).name() << std::endl;          // i
//     std::cout << "Type of '(int *)generic_pointer' = typeid((int *)generic_pointer).name(): " << typeid((int *)generic_pointer).name() << std::endl;             // pi
//     std::cout << "Type of '*(int **)generic_pointer' = typeid(*(int **)generic_pointer).name(): " << typeid(*(int **)generic_pointer).name() << std::endl;       // pi
//     std::cout << "Type of '(int **)generic_pointer' = typeid((int **)generic_pointer).name(): " << typeid((int **)generic_pointer).name() << std::endl;          // ppi
//     std::cout << "Type of '*(int ***)generic_pointer' = typeid(*(int ***)generic_pointer).name(): " << typeid(*(int ***)generic_pointer).name() << std::endl;    // ppi
//     std::cout << "Type of '(int ****)generic_pointer' = typeid((int ****)generic_pointer).name(): " << typeid((int ****)generic_pointer).name() << std::endl;    // ppppi
//     std::cout << "Type of '*(string *)generic_pointer' = typeid(*(string *)generic_pointer).name(): " << typeid(*(string *)generic_pointer).name() << std::endl; // s

//     std::cout << "((int *)generic_pointer == (int *)&integer_value): " << ((int *)generic_pointer == (int *)&integer_value) << std::endl; // 1(True)
//     std::cout << "((int *)generic_pointer == &integer_value): " << ((int *)generic_pointer == &integer_value) << std::endl;               // 1(True)
//     std::cout << "(generic_pointer == &integer_value): " << (generic_pointer == &integer_value) << std::endl;                             // 1(True)

//     std::cout << "((std::string *)generic_pointer == (std::string *)&integer_value): " << ((std::string *)generic_pointer == (std::string *)&integer_value) << std::endl; // 1(True)

//     // error: comparison between distinct pointer types 'std::string*' {aka 'std::__cxx11::basic_string<char>*'} and 'int*'
//     // std::cout << "((std::string *)generic_pointer == (std::string *)&integer_value): " << ((std::string *)generic_pointer == &integer_value) << std::endl;

//     // error: comparison between distinct pointer types 'std::string*' {aka 'std::__cxx11::basic_string<char>*'} and 'int*'
//     // std::cout << "((std::string *)generic_pointer == (std::string *)&integer_value): " << ((std::string *)generic_pointer == (int *)&integer_value) << std::endl;

//     // Pointing the void pointer to an float_value
//     generic_pointer = &float_value;
//     /*All properties work with pointer-to-float, 'generic_pointer' that work with pointer-to-integer, 'generic_pointer' in above code*/
//     std::cout << "Value pointed by genericPointer: " << *(float *)generic_pointer << std::endl; // 3.14

//     return 0;
// }

// // '''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int a = 10;
//     int *b;
//     b = &a;
//     std::cout << *b << std::endl;

//     int c = 25;
//     void *generic_pointer;
//     generic_pointer = &c;
//     // cout << *generic_pointer << endl; // error: 'void*' is not a pointer-to-object type
//     cout << (int *)generic_pointer << endl; // generic_pointer point to integer type

//     return 0;
// }

// // '''''''''''''''''''''
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

// // '''''''''''''''''''''''''''''''''''
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

// // ''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // void num; // error:  void is an incomplete type and cannot be used to declare variables.
//     return 0;
// }

// // ''''''''''''''''''
// #include <iostream>
// using namespace std;

// void fun()
// {
//     cout << "Hello, world!" << endl;
// }
// int main(int argc, char const *argv[])
// {

//     // void (* fun_ptr) = &fun; // error: invalid conversion from 'void (*)()' to 'void*' [-fpermissive] because &fun is from of void(*)()
//     // void (* fun_ptr) = fun; // error: invalid conversion from 'void (*)()' to 'void*' [-fpermissive] because fun is from of void(*)()
//     // fun_ptr;

//     // Declare a function pointer with no return type
//     void (*fun_ptr)();
//     fun_ptr = &fun;
//     fun_ptr(); // Call the function through the function pointer

//     return 0;
// }

// // '''''''''''''''void in function pointer parameters'''''''''''''''''
// #include <iostream>
// using namespace std;
// void fun(int x, int y)
// {
//     int sum = x + y;
//     cout << "Sum = " << sum << endl;
// }
// int main(int argc, char const *argv[])
// {
//     // Declare a function pointer with parameters
//     void (*fun_ptr)(int, int) = &fun;
//     // Call the function through the function pointer with parameters
//     fun_ptr(10, 15);
//     return 0;
// }

// // ''''''''''''''''''''''''''''''Using typedef for Cleaner Syntax''''''''''''''''''''''''''''
// #include<iostream>
// #include<functional>
// using namespace std;

// typedef void(* void_fun_ptr)();

// void fun() {
//     cout << "Hello World!" << endl;
// }
// int main(int argc, char const *argv[])
// {
//     void_fun_ptr fun_ptr = &fun;
//     fun_ptr();

//     function<void()> function_obj = &fun;
//     function_obj();
//     return 0;
// }

// // ''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// int fun(int x, int y)
// {
//     cout << "Sum = " << x + y << endl;
//     return x + y;
// }
// int main(int argc, char const *argv[])
// {
//     int (*fun_ptr)(int, int) = &fun;
//     int sum = fun_ptr(10, 15);
//     cout << "Resultant Sum: " << sum << endl;

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''Array of void pointers'''''''''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     const int arr_size = 4;

//     // Declare an array of void pointers(pointers to void)
//     void *arr[arr_size];

//     int int_value = 42;
//     float float_value = 3.15;
//     char char_value = 'A';

//     // Assign the addresses of the variables to the elements of the array arr
//     arr[0] = &int_value;
//     arr[1] = &float_value;
//     arr[2] = &char_value;

//     cout << *(int *)arr[0] << " " << *(float *)arr[1] << " " << *(char *)arr[2] << endl;

//     cout << &arr[1] << endl;       // Address of second pointer to void of array : 0xc29c5ffe68
//     cout << &arr[0] << endl;       // Address of first pointer to void of array  : 0xc29c5ffe60
//     cout << arr[0] << endl;        // Address stored by the first pointer to void of array  : 0xc29c5ffe5c
//     cout << (int *)arr[0] << endl; // Address stored by the first pointer to integer of array  : 0xc29c5ffe68
//     cout << ((int *)arr[0] == arr[0]) << endl; // 1
//     cout << ((int *)arr[0] == &int_value) << endl; // 1

//     // Derefrence and print the value
//     for (int i = 0; i < 4; i++)
//     {
//         if (arr[i] != nullptr)
//         {
//             if (i == 0)
//             {
//                 cout << "Integer Value: " << *(int *)arr[i] << endl;
//             }
//             else if (i == 1)
//             {
//                 cout << "Float Value: " << *(float *)arr[i] << endl;
//             }
//             else if (i == 2)
//             {
//                 cout << "Char Value: " << *(char *)arr[i] << endl;
//             }
//             else if (i == 3)
//             {
//                 cout << arr[i] << endl;
//             }
//         }
//     }

//     return 0;
// }

// // ''''''''''''''''''''''''''''''''no reference of void''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int num = 10;

//     // Reference to integer
//     int &referenceToInt = num;
//     referenceToInt += 40;

//     // Using the Referece
//     cout << "Value Through Reference: " << referenceToInt << endl;
//     cout << "Modified Value of num: " << num << endl;

//     // Trying to Reference to void which in not allowed
//     // void &referenceToVoid; // error: cannot declare reference to 'void'
//     return 0;
// }
