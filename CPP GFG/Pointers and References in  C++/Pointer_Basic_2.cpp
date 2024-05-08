// #include<iostream>
// using namespace std;
// int add(int a, int b) {
//     return a + b;
// }

// int main(int argc, char const *argv[])
// {
//     int num = 10;
//     // Declaring Pointer
//     int* myPointer;  // Declares a pointer to an integer

//     // Initialize Pointer
//     /*Pointers should be initialized to point to a valid memory address for example int* point to only int data type */
//     int x = 10;
//     int* pointerToX = &x;  // Initializes pointerToX to point to the memory address of x

//     // Using the new operator to allocate memory:
//     int* dynamicPtr = new int; // Allocates memory for an integer and assigns the address to dynamicPtr
//     cout << "dynamicPtr: " << dynamicPtr << endl; // output: dynamicPtr: 0x208649e1ab0

//     int* dynamicPtr2 = new int[5]; // Allocates memory for 5 integer and assigns the address to dynamicPtr2
//     cout << "dynamicPtr2:" << dynamicPtr2 << endl; // output: dynamicPtr2: 0x208649e1ab0

//     // Accessing Values Through Pointers:
//     /*access the value pointed to by a pointer using the dereference operator '*' */
//     int y = *pointerToX;  // Retrieves the value of x through the pointer
//     cout << "y = " << y << endl;
//     cout << &y << endl; // 0x6a05ffa48
//     cout << &x << endl; // 0x6a05ffa4c
//     cout << pointerToX << endl; // 0x6a05ffa4c

//     // Pointer Arithmetic:
//     /*Pointers can be manipulated using arithmetic operations like addition and subtraction. This is often used when working with arrays:*/
//     int myArray[5] = {1, 2, 3, 4, 5};
//     /* myArray is int* (Pointer to Integer)*/
//     int* ptr = myArray;  // Points to the first element of the array
//     int thirdElement = *(ptr + 2);  // Accesses the third element (3)
    
//     // int* ptr2[5] = &myArray; // Points to the second element
//     /* int* ptr2 is int * which is (Pointer to Integer) but &myArray is int (*)[5] which is (Pointer to int array)*/
//     cout << "Address of myArray: " << myArray << endl;
//     cout << "Address of &myArray: " << &myArray << endl;

//     if (ptr == myArray)
//     {
//         cout << "Address of myArray == Address of ptr: " << ptr << endl;
//     }
//     // if (ptr2 == &myArray)
//     // {
//     //     cout << "Address of &myArray == Address of ptr: " << ptr << endl;
//     // }
//     // if (myArray == &myArray)
//     // {
//     //     /* code */
//     // }

//     // // Pointer and Arrays:
//     // /*In C++, arrays are essentially pointers to their first elements. So, you can use pointers to iterate through array elements.*/
//     // int myArray_2[3] = {10, 20, 30};
//     // int* ptr_2 = myArray_2;  // Points to the first element of the array

//     // // Access elements using pointer and loop
//     // for (int i = 0; i < 3; i++) {
//     //     // cout << * (ptr_2 + i) << " ";  // Prints 10 20 30

//     //     cout << * ptr_2 << " ";  // Prints 10 20 30
//     //     ptr_2++;  // Move to the next element
//     // }

//     // Pointer to Pointer (Double Pointer)
//     int num_2 = 10;
//     int* ptr_3 = &num_2; // Pointer to int
//     int**  ptr_4 = &ptr_3; // Pointer to Pointer to int

//     // Pointer to Function
//     int(* function_ptr) (int, int) = add; // Pointer to a function
//     int result = function_ptr(5, 8); // Calls the add function through the pointer


//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''Address-of operator (&)'''''''''''''''''''''''''''''
// // 1.Obtaining the address of variable(using pointer variable)
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 10;
//     int *ptr = &x; // ptr now holds the address of the variable x

//     // Print the address of x and its value
//     cout << "Address of x: " << &x << endl;
//     cout << "Value of x: " << x << endl;

//     // Print the address stored in the pointer ptr and the value it points to
//     cout << "Address stored in ptr: " << ptr << endl;
//     cout << "Value pointed to by ptr: " << *ptr << endl;

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''''''''
// // 2.Using Reference
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int x = 10;
//     int &y = x; // y is reference to x
//     int* ptr = &y; // pointer ptr now hold the address of the reference y, which is same as the address of x

//     cout << "Value of x: " << x << endl; // Value of x
//     cout << "Address of x: " << &x << endl; // Address of x 

//     cout << "y: " << y << endl; // Value of y
//     cout << "&y: " << &y << endl; // Address of y

//     // Print the address stored in the pointer ptr and the value it point to
//     cout << "Address stored in ptr, which is address of x: " << ptr << endl; // Address stored in ptr, which is address of x
//     cout << "Value pointed to by ptr: " << *ptr << endl; // Value pointed to by ptr: 10
//     return 0;
// }

// // '''''''''''''''''''''2.Using Reference''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int x = 10;
//     int &y = x;
//     y = 15;
//     cout << x << " " << y << endl; // Value of x changed due to point to same address
//     x = 20;
//     cout << x << " " << y << endl; // Value of x changed due to point to same address

//     return 0;
// }

// // '''''''''''''''' Using Pointer''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int x = 10;
//     int* ptr = &x;
//     *ptr = 15;
//     cout << x << " " << *ptr << endl; // Value of x changed due to ptr point to same address
//     x = 20;
//     cout << x << " " << *ptr << endl; // Value of x changed due to ptr point to same address

//     return 0;
// }

// // '''''''''''''''''''''''''''''''3.Using the Address in Function Calls''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// void modify(int &num) {
//     cout << "&num: " << &num << endl;
//     num += 25;
// }
// int main(int argc, char const *argv[])
// {
//     int x = 10;
//     cout << "Before calling modify(x), x: " << x << "and address of x: " << &x <<endl;
//     modify(x);
//     cout << "After calling modify function, x = " << x << "and address of x: " << &x <<endl;
//     return 0;
// }

// '''''''''''''''''''''''''''''''''''
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int myVar = 10;
    int *foo = &myVar; // foo store the address of myVar
    // int baz = myVar; // baz eqaul to myVar
    // int baz = *foo; // baz equal to value pointed to by foo"
    int *baz = foo; //  baz equal to foo (1776)


    return 0;
}
