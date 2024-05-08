// // '''''''''''''''''''''''Pointer to Data Type'''''''''''''''''''''''''''''
// // 1.Pointer to Integer(int)
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int num = 10;
//     int* intPtr;

//     intPtr = &num; 
//     cout << "Value of num: " << *intPtr << endl;    
//     *intPtr = 50;

//     cout << "Updated Value of num by *intPtr: " << *intPtr  << endl;
//     cout << "Updated Value of num: " << num  << endl;
//     return 0;
// }

// // ''''''''''''''''''''2.Pointer to Floating-Point Number''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// int main() {
//     float myFloat = 3.14;  // Create a float variable and initialize it with a value
//     float* floatPtr;      // Declare a pointer to a float
    
//     floatPtr = &myFloat;  // Assign the address of myFloat to floatPtr
    
//     cout << (floatPtr == &myFloat) << endl; // 1(true)

//     // Accessing the value using the pointer
//     cout << "Value of myFloat: " << *floatPtr << endl;

//     // Modifying the value through the pointer
//     *floatPtr = 2.718;    // Change the value of myFloat through the pointer

//     cout << "Updated value of myFloat: " << *floatPtr << endl;

//     return 0;
// }

// // '''''''''''''''''''''3.Pointer to Character(char)''''''''''''''''''''''''
// #include <iostream>

// int main() {
//     char myChar = 'A';     // Create a char variable and initialize it with a character
//     char* charPtr;         // Declare a pointer to a char
    
//     charPtr = &myChar;     // Assign the address of myChar to charPtr
    
//     // Accessing the value using the pointer
//     std::cout << "Value of myChar: " << *charPtr << std::endl;

//     // Modifying the value through the pointer
//     *charPtr = 'B';        // Change the value of myChar through the pointer

//     std::cout << "Updated value of myChar: " << *charPtr << std::endl;

//     return 0;
// }

// // ''''''''''''''''''''''''4.Pointer to Boolean(bool)''''''''''''''''''''
// #include <iostream>

// int main() {
//     bool myBool = true;  // Create a boolean variable and initialize it with a value
//     bool* boolPtr;       // Declare a pointer to a boolean
    
//     boolPtr = &myBool;   // Assign the address of myBool to boolPtr
    
//     // Accessing the value using the pointer
//     std::cout << "Value of myBool: " << *boolPtr << std::endl;

//     // Modifying the value through the pointer
//     *boolPtr = false;    // Change the value of myBool through the pointer

//     std::cout << "Updated value of myBool: " << *boolPtr << std::endl;

//     return 0;
// }

// // '''''''''''''''''''5.Pointer to custom data type (struct or class)'''''''''''''''''''''
// #include<iostream>
// #include<string>

// using namespace std;

// // Define a custom Struct
// struct MyStruct {
//     string name;
//     int age;
// };

// int main(int argc, char const *argv[])
// {
//     // MyStruct myStruct_1 = {"Alice", 22};

//     MyStruct myStruct_1, myStruct_2; // Create an instance of the custom struct
//     myStruct_1.name = "Alice";
//     myStruct_1.age = 20;

//     // Declare a pointer to the custom struct
//     MyStruct* MyStruct_Ptr;

//     // Assign the address of the custom struct instance to the pointer
//     MyStruct_Ptr = &myStruct_1;
//     cout << "Name: " << MyStruct_Ptr->name << endl;
//     cout << "Age: " << MyStruct_Ptr->age << endl;

//     // Modify the Information through the pointer
//     MyStruct_Ptr->name = "Charlie";
//     MyStruct_Ptr->age = 25;

//     // Access and print the modified values
//     cout << "After Modification:" << endl;
//     cout << "Name: " << MyStruct_Ptr->name << endl;
//     cout << "Age: " << MyStruct_Ptr->age << endl;
//     return 0;
// }

// // '''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Define a Struct
// struct Point
// {
//     int x;
//     int y;
// };

// int main(int argc, char const *argv[])
// {
//     Point myPoint = {10, 15}; // Create instance of custom struct
//     Point* myPoint_Ptr; // Declare a pointer to custom struct 
    
//     myPoint_Ptr = &myPoint; // Accessing the address of myPoint to struct

//     // Accessing the value using pointer
//     cout << "x: " << myPoint_Ptr->x << " and y: " << myPoint_Ptr->y << endl;

//     // Modify the value through pointer
//     myPoint_Ptr->x = 25;
//     myPoint_Ptr->y = 35;

//     cout << "x: " << myPoint_Ptr->x << " and y: " << myPoint.y << endl;


//     return 0;
// }

// // '''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Define a Struct
// struct Point
// {
//     int x;
//     int y;
// };

// int main(int argc, char const *argv[])
// {
//     Point myPoint_Array[3]; // Create an array of Point struct
//     myPoint_Array[0] = {10, 20}; // first instance of Point struct
//     myPoint_Array[1] = {15, 25}; // second instance of Point struct
//     myPoint_Array[2] = {30, 50}; // third instance of Point struct

//     Point* myPoint_Ptr;
//     // 1.Method for initialization of Pointer to stuct myPoint_Ptr
//     // myPoint_Ptr = myPoint_Array;
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     cout << "x: " <<(myPoint_Ptr + i)->x << " and y: " << (myPoint_Ptr + i)->y <<endl ; 
//     // }
//     // cout<<endl;

//     // for (Point mypoint : myPoint_Array)
//     // {
//     //     cout << "x: " <<mypoint.x << " and y: " << mypoint.y << endl;
//     // }
//     // cout<<endl;

//     // 2.Method for initialization of Pointer to stuct myPoint_Ptr
//     for (int i = 0; i < 3; ++i)
//     {
//         myPoint_Ptr = &myPoint_Array[i];
//         cout << "x: " << myPoint_Ptr->x << " y: " << myPoint_Ptr->y << endl;
//     }
//     cout<<endl;
    
//     return 0;
// }

// // ''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// struct Point {
//     int x;
//     int y;
// };

// int main(int argc, char const *argv[])
// {
//     Point myPoint;
//     Point* myPoint_Ptr;
//     myPoint_Ptr = &myPoint;
//     // cout << "myPoint: " << myPoint << endl; // error : no type named 'type' in 'struct std::enable_if<false, void>'
//     // cout << " *myPoint_Ptr: " << *myPoint_Ptr << endl; // error : no type named 'type' in 'struct std::enable_if<false, void>'

//     cout << "Address of instance of Struct Point, which is myPoint = "<< &myPoint<< endl;
//     cout << "Address stored in Pointer myPoint_Ptr point to Point = "<< myPoint_Ptr<< endl;
//     cout << (myPoint_Ptr == &myPoint) << endl; // output: 1 (true)
//     return 0;
// }

// // '''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// struct Point {
//     int x;
//     int y;
// };

// int main(int argc, char const *argv[])
// {
//     Point myPoint[5];
//     for (int i = 0; i < 5; ++i) 
//     {
//         myPoint[i].x = i;
//         myPoint[i].y = i + 5;
//     }

//     Point* myPoint_Ptr[5];
//     for (int i = 0; i < 5; ++i)
//     {
//         myPoint_Ptr[i] = &myPoint[i];
//     }

//     for (int i = 0; i < 5; ++i)
//     {
//         cout << "Point " << i + 1 << ", x: " << myPoint_Ptr[i]->x << ", y: " << myPoint_Ptr[i]->y << endl;
//     }
//     cout<< endl;
//     for (int i = 0; i < 5; ++i)
//     {
//         myPoint_Ptr[i]->x = i + 10;
//         myPoint_Ptr[i]->y = i + 15;
//     }

//     cout << "After Modifing the points" << endl;
//     for (int i = 0; i < 5; ++i)
//     {
//         cout << "Point " << i + 1 << ", x: " << myPoint_Ptr[i]->x << ", y: " << myPoint_Ptr[i]->y << endl;
//     }
    
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// struct Point
// {
//     int x;
//     int y;
// };

// int main(int argc, char const *argv[])
// {
//     int num = 5; // Number of points
//     Point* points = new Point[num]; // Allocate an array of Point struct dynamically

//     // Initialize the array of points
//     for (int i = 0; i < 5; ++i)
//     {
//         points[i].x = i;
//         points[i].y = i * 2;
//     }

//     // Access and print the points using pointer
//     for (int i = 0; i < 5; ++i)
//     {
//         cout << "Point " << i + 1 << ": x = " << points[i].x << ", y = " << points[i].y << endl;
//     }
    
//     // Deallocate the memory to prevent memory leaks
//     delete[] points;
    
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// struct Point {
//     int x;
//     int y;
// };

// bool custom_Comparison(const Point &p1, const Point &p2) {
//     return (p1.x < p2.x);
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n; // Number of points

//     // Create a vector of Point structs to store the points
//     vector<Point> points(n);

//     // Read the points and store them in the vector
//     for (int i = 0; i < n ; ++i)
//     {
//         cin >> points[i].x >> points[i].y;
//     }

//     // sort the points by x-coordinate using custom_Comparison function
//     sort(points.begin(), points.end(), custom_Comparison);

//     // Access and process the points in the sorted order
//     for (int i = 0; i < n; i++) {
//         std::cout << "Point " << i + 1 << ": x = " << points[i].x << ", y = " << points[i].y << std::endl;
//     }
    
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''Structure Pointer''''''''''''''''''''''''''''''''''''
// /* A structure Pointer in C++ is defined as the pointer which points to the address of the memory block that stores a structure.*/
// // C++ program to demonstrate Pointer to Structure
// #include <iostream>

// using namespace std;

// struct MyStruct {
// 	int value;
// };

// int main()
// {

// 	struct MyStruct myStruct = {10};
// 	// Initialization of the structure pointer
// 	struct MyStruct* myStruct_Ptr = &myStruct;
//     cout << "myStruct_Ptr: " << myStruct_Ptr->value << endl;

// 	return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // '''''''''''''''''''''''''''''''''''''''''''''Pointer to Class'''''''''''''''''''''''''
// #include<iostream>
// #include<string>
// using namespace std;

// class MyClass {
//     public:
//         string name;
//         int age;

//     MyClass(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     void display(){
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     MyClass myClass("Alice", 22); // Create instance of MyClass

//     MyClass* myClass_Ptr; // Declaring a Pointer to Class

//     myClass_Ptr = &myClass; // Assign the address of the object to the Pointer

//     // Accessing the Member Functions and Data using the Pointer
//     myClass_Ptr->display();
//     cout << "Name: " << myClass_Ptr->name << endl;
//     cout << "Age: " << myClass_Ptr->age << endl;
//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''
// #include<iostream>
// #include<string>
// using namespace std;

// class MyClass {
//     public:
//         string name;
//         int age;

//     MyClass(string name, int age) {
//         this->name = name;  
//         this->age = age; 
//     }   

//     void displayInfo() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }      
// };
// int main(int argc, char const *argv[])
// {
//     int num; 
//     cin >> num; // Read the number of objects

//     // Create an array of class objects dynammically using pointer 
//     MyClass** classArray = new MyClass* [num];

//     // Create objects and store pointers in the array
//     for (int i = 0; i < num; i++)
//     {
//         string name;
//         int age;
//         cin >> name >> age;
//         classArray[i] = new MyClass(name, age);
//     }

//     // Access and process the objects using the pointers
//     for (int i = 0; i < num; i++)
//     {
//         classArray[i]->displayInfo();
//     }
//     // Don't forget to free the dynamically allocated memory
//     for (int i = 0; i < num; i++)
//     {
//         delete classArray[i];
//     }

//     delete[] classArray;
    
//     return 0;
// }


// // ''''''''''''''''''''''''''''''''''Pointer to Enumeration(enum)'''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// enum Colors {
//     RED, 
//     GREEN, 
//     BLUE
// };

// int main(int argc, char const *argv[])
// {   
//     // Declare a variable of the enumeration type
//     Colors selectedColor;
//     selectedColor = GREEN; // Initialize the enum variable

//     // Declare a pointer to the enumeration type
//     Colors* color_Ptr; // color_Ptr hold address of Colors's variable (enumeration data type's variable)

//     // Assign the address of the Colors variable to the pointer (pointer to Colors)
//     color_Ptr = &selectedColor;

//     // Access the value using the pointer
//     cout << "Selected Coloer: " << *color_Ptr << endl;
//     cout << "Address of selectedColor: " << &selectedColor << endl;
//     cout << "Address hold by pointer color_Ptr: " << color_Ptr << endl;
//     cout << "Address of pointer itself color_Ptr: " << &color_Ptr << endl;

//     cout << (&selectedColor == color_Ptr) << endl; // 1(true)

//     Colors ** double_color_Ptr = &color_Ptr;

//     cout << "Address of pointer color_Ptr: " << &color_Ptr << endl;
//     cout << "Address hold by pointer double_color_Ptr: " << double_color_Ptr << endl; 
    
//     cout << (&color_Ptr == double_color_Ptr) << endl; // 1(true)

//     cout << **double_color_Ptr << endl; 
//     // Access the value using the pointer
//     cout << "Selected color: " << *color_Ptr << endl;
//     Colors*** triple_color_Ptr = &double_color_Ptr;

//     cout << "Address of double_color_Ptr: " << &double_color_Ptr << endl;
//     cout << "Address hold by triple_color_Ptr: " << triple_color_Ptr << endl;

//     cout << (&double_color_Ptr == triple_color_Ptr) << endl; // 1(true)

//     cout << *triple_color_Ptr << endl;

//     // You can also use a switch statement with enumeration
//     switch (*color_Ptr) {
//         case RED:
//             cout << "The color is RED" << endl;
//             break;
//         case GREEN:
//             cout << "The color is GREEN" << endl;
//             break;
//         case BLUE:
//             cout << "The color is BLUE" << endl;
//             break;
//         default:
//             cout << "Invalid color" << endl;
//     }

//     // Modifying the value through the pointer
//     *color_Ptr = RED; // Change the value of selectedColor through the pointer color_Ptr
//     cout << "The color is selected: " << selectedColor <<endl;
//     cout << "The color is selected using pointer: " << *color_Ptr <<endl;
//     return 0;
// }

// // '''''''''''''''''''''''''''''''
// #include <iostream>

// // Define an enumeration
// enum Color {
//     RED,
//     GREEN,
//     BLUE
// };

// int main() {
//     Color myColor = Color::RED;
//     // Declare a pointer to the enumeration
//     Color* colorPtr;
//     // Assign the address of an enumeration value to the pointer
//     colorPtr = &myColor;

//     // Access the enumeration value through the pointer
//     if (*colorPtr == RED) {
//         std::cout << "Color is RED AND " << std::endl;
//     } else if (*colorPtr == GREEN) {
//         std::cout << "Color is GREEN" << std::endl;
//     } else if (*colorPtr == BLUE) {
//         std::cout << "Color is BLUE" << std::endl;
//     }

//     // Increment the pointer to access the next enumeration value
//     *colorPtr + 1; // Moves to GREEN

//     // Access the new enumeration value through the pointer
//     if (*colorPtr == RED) {
//         std::cout << "Color is RED" << std::endl;
//     } else if (*colorPtr == GREEN) {
//         std::cout << "Color is GREEN" << std::endl;
//     } else if (*colorPtr == BLUE) {
//         std::cout << "Color is BLUE" << std::endl;
//     }

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// enum Color {
//     RED, 
//     GREEN,
//     BLUE
// };

// int main(int argc, char const *argv[])
// {
//     Color selectedColor;
//     selectedColor = GREEN;

//     Color* color_Ptr;
//     color_Ptr = &selectedColor; 

//     cout <<"1.Selected color: "<< *color_Ptr << endl;

//     *color_Ptr = static_cast <Color> (*color_Ptr + 1);
//     cout <<"2.Selected color: "<< *color_Ptr << endl;

//     // Access and print the updated enumeration value using the pointer
//     cout << "Updated value pointed by color_Ptr: " << *color_Ptr << endl;
//     // You can also change the pointer to point to a different enumeration value
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // '''''''''''''''''''''''''''''''''''Pointer to Void(Generic Pointer)'''''''''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int x = 10;
//     double y = 3.14;
//     // Creating void pointers
//     void* ptr1= &x;
//     void* ptr2= &y;

//     cout << "Address hold by pointer ptr1: " << ptr1 << endl;
//     cout << "Address of variable x: " << &x << endl;
//     cout << (&x == ptr1) << endl; // 1(true)

//     // You can't dereference a void pointer directly
//     // You need to cast it to the appropriate type.
//     // cout << "Value pointed by ptr1 to int: " << *ptr1 << endl; // error: 'void*' is not a pointer-to-object type
//     int* intPtr = static_cast<int*>(ptr1);
//     double* doublePtr = static_cast<double*>(ptr2);

//     cout << "Address hold by pointer intPtr: " << intPtr<< endl;
//     cout << "Address of  x: " << intPtr<< endl;
//     cout << (&x == intPtr)<< endl; // 1(true)
//     cout << "Value of x (via void pointer ptr1): " << *intPtr<< endl;
//     cout << "Value of y (via void pointer ptr2): " << *doublePtr<< endl;

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int x = 10;
//     double y = 20;
//     char z = 'A';
//     const char* message = "Hello, World";

//     void* genericPointer;
//     genericPointer = &x; // pointer to int
//     cout << "Addrees of x: " << &x << endl;
//     cout << "Address hold by pointer genericPoinnter to void: " << genericPointer << endl;
//     cout << "Address hold by pointer genericPoinnter to int(by typecasting): " << (int*)genericPointer << endl;
//     cout << (&x == genericPointer) << endl; // 1(true)
//     cout << (genericPointer == (int*)genericPointer) << endl;

//     cout << "Value pointed by (int*)genericPointer via genericPointer: " << *(int*)genericPointer << endl;

//     genericPointer = &y; // pointer to double
//     cout << "Value pointed by (int*)genericPointer via genericPointer: " << *(int*)genericPointer << endl; // output: *(int*)genericPointer = 0
//     cout << "Value pointed by (double*)genericPointer via genericPointer: " << *(double*)genericPointer << endl; // output: *(double*)genericPointer = 20

//     genericPointer = &z; // pointer to char
//     cout << "Value pointed by (double*)genericPointer via genericPointer: " << *(double*)genericPointer << endl; // output: *(double*)genericPointer = 3.18618e-58
//     cout << "Value pointed by (char*)genericPointer via genericPointer: " << *(char*)genericPointer << endl; // output: *(char*)genericPointer = A

//     // genericPointer = message; // error: invalid conversion from 'const void*' to 'void*' [-fpermissive]
//     // cout << "Value pointed by (char*)genericPointer via genericPointer: " << *(char*)genericPointer << endl; // output: *(char*)genericPointer = 
//     // cout << "Value pointed by (char*)genericPointer via genericPointer: " << *(char*)genericPointer << endl; // output: *(char*)genericPointer = 

//     genericPointer = &message;
//     cout << "Value pointed by (char*)genericPointer via genericPointer: " << *(char*)genericPointer << endl; // output: *(char*)genericPointer = 

//     genericPointer = (void*)message; // Pointing to a string
//     cout << "Value pointed by (char*)genericPointer via genericPointer: " << (char*)genericPointer << endl; // output: *(char*)genericPointer = Hello, World
//     cout << "Value pointed by (char*)genericPointer via genericPointer: " << *(char*)genericPointer << endl; // output: *(char*)genericPointer = H

//     return 0;
// }

// // ''''''''''''''''''''''''''''''Use Cases for void* (Generic Pointers)'''''''''''''''''''''''''
// // '''''''''''''''''''''1.Function Callbacks in C++'''''''''''''''''''''''''''''''''
// /*You can use function pointers to represent functions. Define a function pointer type and pass it as an argument to another function.*/
// #include<iostream>
// using namespace std;

// // Define a function pointer type
// typedef int(* CallbackFunction) (int);

// // Function that takes a CallbackFunction as an argument
// int PerformOperation(int value, CallbackFunction callback){
//     return callback(value);
// }

// // Callback function
// int DoubleValue(int value){
//     return value * 2;
// }

// int main(int argc, char const *argv[])
// {
//     int num = 12;
//     // Pass the callback function as an argument
//     int result = PerformOperation(num, DoubleValue);  
//     return 0;
// }






















































// // ''''''''''''''''''''''''''''''''''''''''''''''''''''''Pointer to Function''''''''''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Define two sample functions
// int add(int x, int y) {
//     return x + y;
// }

// int subtract(int x, int y) {
//     return x - y;
// }

// int main(int argc, char const *argv[])
// {
//     // Declare a pointer to a function that takes two int arguments and return an int
//     int (*funPtr)(int, int);

//     // Assing the pointer to 'add' function
//     funPtr = add;

//     // Use Pointer to call add function
//     int result = funPtr(10, 15);
//     cout << "Result of add function: " << result << endl;  

//     // Assign pointer to 'substract' function
//     funPtr = subtract;
//     result = funPtr(15, 10);
//     cout << "Result of subtract function: " << result << endl;

//     return 0;
// }


// // ''''''''''''''''''''''''''''''''''''''''Pointer to function''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Define two sample functions
// int add(int a, int b){
//     return (a + b);
// }

// int product(int a, int b){
//     return (a * b);
// }
// int main(int argc, char const *argv[])
// {
//     // Declare a pointer to a function taking two int parameters and returning int
//     int (*funPtr)(int, int);
//     cout <<"funPtr: " << funPtr << endl;
//     cout <<"*funPtr: " << *funPtr << endl;

//     // funPtr = &add;
//     funPtr = add;
//     cout <<"funPtr: " << funPtr << endl;
//     cout << (funPtr == add) << endl; //1(true)
//     cout << (funPtr == &add) << endl; //1(true)

//     cout <<"Result of add function: " << funPtr(15, 10) << endl;

//     funPtr = product;
//     cout << "Result of product function: " << funPtr(15, 10) << endl;
    
    
//     return 0;
// }

// // '''''''''''''''''''''''''Functions Pointer array''''''''''''''''''''''''''''''''''''''''''
// #include <iostream>

// // Function prototypes
// int add(int a, int b);
// int subtract(int a, int b);

// int main() {
//     // Declare an array of function pointers
//     int (*operation[])(int, int) = {add, subtract};

//     // Call functions using function pointers
//     int result1 = operation[0](5, 3);  // Calls the 'add' function
//     int result2 = operation[1](5, 3);  // Calls the 'subtract' function

//     std::cout << "Result of add: " << result1 << std::endl;
//     std::cout << "Result of subtract: " << result2 << std::endl;

//     return 0;
// }

// int add(int a, int b) {
//     return a + b;
// }

// int subtract(int a, int b) {
//     return a - b;
// }


// // ''''''''''''''''''''''''''''''''''''Function Pointers as Arguments:''''''''''''''''''''''''''''''''
// #include <iostream>

// // Function prototypes
// int add(int a, int b);
// int subtract(int a, int b);

// // Function that takes a function pointer as an argument
// int operate(int x, int y, int (*operation)(int, int)) {
//     return operation(x, y);
// }

// int main() {
//     int result1 = operate(5, 3, add);       // Pass the 'add' function
//     int result2 = operate(5, 3, subtract);  // Pass the 'subtract' function

//     std::cout << "Result of add: " << result1 << std::endl;
//     std::cout << "Result of subtract: " << result2 << std::endl;

//     return 0;
// }

// int add(int a, int b) {
//     return a + b;
// }

// int subtract(int a, int b) {
//     return a - b;
// }

// // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // '''''''''''''''''''''''''''''''''''''''''''''''Pointer to Function''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // '''''''''''''''''1.Declaring a funtion pointer''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// int add(int a, int b) {
//     return a + b;
// }

// int substract(int a, int b) {
//     return a - b;
// }

// int main(int argc, char const *argv[])
// {
//     // Declare a pointer to a function 
//     int (*funcPtr) (int, int);

//     // Initialize the function pointer with the address of the "add" function
//     funcPtr = &add; // or simply funcPtr = add
//     int result = funcPtr(10, 15);
//     cout << "Result of add function: " << result << endl;

//     // Change the function pointer to point to the "subtract" function
//     funcPtr = substract; // or simply funcPtr = subtract
//     result = funcPtr(15, 10); 
//     cout << "Result of subtract function: " << result << endl;
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''2.Pointer to function using typedef''''''''''''''''''''
// #include<iostream>
// using namespace std;

// int add(int a, int b) {
//     return a + b;
// }

// int product(int a, int b) {
//     return a * b; 
// }

// // Define a type alias for a function pointer with the same signature as our function 
// typedef int (*OperationFunction) (int a, int b); 

// int main(int argc, char const *argv[])
// {
//     //Declaring a function pointer using type alias
//     OperationFunction operation;

//     // Initialize the function pointer with the address of the "add" function
//     operation = add;

//     // Use the function pointer to call the add function
//     int result = operation(10, 5);
//     cout << "Result of add function: " << result << endl;

//     // Change the function pointer to point to the product function
//     operation = product;
//     result = operation(10, 5);
//     cout << "Result of product function: " << result << endl; 
//     return 0;
// }

// // ''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Function that multiply two numbers
// int multiply(int a, int b) {
//     return a * b;
// }

// // Function that divide two numbers
// int divide(int a, int b) {
//     if (b != 0) {
//         return a / b;
//     } 
//     else {
//         cerr << "Error: Division by zero" << endl;
//         return 0;  // Error Handling
//     }
    
// }
// int main(int argc, char const *argv[])
// {
//     // Define a typedef for a function pointer
//     typedef int (* MathFunction) (int, int);

//     // Declare function pointers using typedef
//     MathFunction multiplyPtr = multiply;
//     MathFunction dividePtr = divide;

//     // Use the function pointers to call the respective functions
//     int result1 = multiplyPtr(10, 5);
//     cout << "Result of multiply function: " << result1 << endl;

//     int result2 = dividePtr(20, 4);
//     cout << "Result of divide function: " << result2 << endl;
    
//     return 0;
// }

// // ''''''''''''''''''''''Using 'using''''''''''''''''''''''''''''
// #include <iostream>

// // Function that adds two numbers
// int add(int a, int b) {
//     return a + b;
// }

// // Function that subtracts two numbers
// int subtract(int a, int b) {
//     return a - b;
// }

// int main() {
//     // Define a type alias for a function pointer
//     using MathFunction = int (*)(int, int);

//     // Declare function pointers using the type alias
//     MathFunction addPtr = add;
//     MathFunction subtractPtr = subtract;

//     // Use the function pointers to call the respective functions
//     int result1 = addPtr(5, 3);
//     int result2 = subtractPtr(10, 2);

//     // Display the results
//     std::cout << "Result of addition: " << result1 << std::endl;
//     std::cout << "Result of subtraction: " << result2 << std::endl;

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''
// #include <iostream>

// // Function that adds two integers
// int add(int a, int b) {
//     return a + b;
// }

// // Function that subtracts two integers
// int subtract(int a, int b) {
//     return a - b;
// }

// int main() {
//     // Define a type alias for a function pointer using 'using'
//     using MathOperation = int(*)(int, int);

//     // Declare function pointers using the type alias
//     MathOperation addition = add;
//     MathOperation subtraction = subtract;

//     // Use the function pointers to call the respective functions
//     int result1 = addition(5, 3);
//     int result2 = subtraction(8, 2);

//     // Display the results
//     std::cout << "Result of addition: " << result1 << std::endl;
//     std::cout << "Result of subtraction: " << result2 << std::endl;

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''Declaring Function Pointer Variables Directly''''''''''''''''''''''
// #include <iostream>

// // Function that adds two integers
// int add(int a, int b) {
//     return a + b;
// }

// // Function that multiplies two integers
// int multiply(int a, int b) {
//     return a * b;
// }

// int main() {
//     // Declare a function pointer variable for an "add" function and initialize it with nullptr
//     int (*addPtr)(int, int) = nullptr;

//     // Declare a function pointer variable for a "multiply" function and initialize it with the address of the function
//     int (*multiplyPtr)(int, int) = multiply;

//     // Use the function pointer variables
//     if (addPtr == nullptr) {
//         std::cout << "addPtr is nullptr." << std::endl;
//     } else {
//         int result1 = addPtr(5, 3);
//         std::cout << "Result of addition: " << result1 << std::endl;
//     }

//     if (multiplyPtr != nullptr) {
//         int result2 = multiplyPtr(4, 2);
//         std::cout << "Result of multiplication: " << result2 << std::endl;
//     } else {
//         std::cout << "multiplyPtr is nullptr." << std::endl;
//     }

//     return 0;
// }

// // ''''''''''''''''''''''''''''Using auto keyword''''''''''''''''''''''''''''''
// #include <iostream>

// // Function that adds two integers
// int add(int a, int b) {
//     return a + b;
// }

// // Function that multiplies two integers
// int multiply(int a, int b) {
//     return a * b;
// }

// int main() {
//     // Declare a function pointer variable for an "add" function using 'auto' and initialize it with the address of the function
//     auto addPtr = add;

//     // Declare a function pointer variable for a "multiply" function using 'auto' and initialize it with the address of the function
//     auto multiplyPtr = multiply;

//     // Use the function pointer variables
//     int result1 = addPtr(5, 3);
//     int result2 = multiplyPtr(4, 2);

//     // Display the results
//     std::cout << "Result of addition: " << result1 << std::endl;
//     std::cout << "Result of multiplication: " << result2 << std::endl;

//     return 0;
// }

// // '''''''''''''''''''''''''''''''Pointer to Member Functions'''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// class MyClass {
//     public:
//         int add(int a, int b) {
//             return a + b;
//         }

//         int substract(int a, int b) {
//             return a - b;
//         }

//         int product(int a, int b) {
//             return a * b;
//         }
// };

// int main(int argc, char const *argv[])
// {   
//     // Create an instance of MyClass 
//     MyClass obj1;

//     // Declare a pointer to member functions of MyClass
//     int (MyClass::*funcPtr) (int, int);

//     // Initialize the pointer with the address of the 'add' member function
//     funcPtr = &MyClass::add;

//     // Use the pointer to call 'add' member function
//     int result = (obj1.*funcPtr) (10, 15);
//     cout << "Result of 'add' member function: " << result << endl;

//     // Change the pointer to point to 'substract' member function
//     funcPtr = &MyClass::substract;

//     // Use the pointer to call 'substract' member function
//     result = (obj1.*funcPtr) (15, 10);
//     cout << "Result of 'substract' member function: " << result << endl;

//     // Change the pointer to point to 'product' member function
    
//     return 0;
// }

// // ''''''''''''''''''''''''''
// #include <iostream>

// class Calculator {
// public:
//     int add(int a, int b) {
//         return a + b;
//     }

//     int subtract(int a, int b) {
//         return a - b;
//     }
// };

// int main() {
//     // Create an instance of the Calculator class
//     Calculator calculator;

//     // Declare a pointer to a member function for the 'add' method
//     int (Calculator::*addPointer)(int, int) = &Calculator::add;

//     // Declare a pointer to a member function for the 'subtract' method
//     int (Calculator::*subtractPointer)(int, int) = &Calculator::subtract;

//     // Use the member function pointers to call methods
//     int result1 = (calculator.*addPointer)(5, 3);
//     int result2 = (calculator.*subtractPointer)(8, 2);

//     std::cout << "Result of addition: " << result1 << std::endl;
//     std::cout << "Result of subtraction: " << result2 << std::endl;

//     return 0;
// }

// ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
