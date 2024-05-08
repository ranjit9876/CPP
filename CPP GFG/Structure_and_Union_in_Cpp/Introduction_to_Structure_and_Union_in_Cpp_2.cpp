// // '''''''''''''''''''''''''''''''''''''''''''''''''Introduction to Structures and Unions'''''''''''''''''''''''''''''''''
// // 1.Structures
// /*The structure is a user-defined data type that is available in C++.
// Structures are used to combine different types of data types, just like an array is used to combine the same type of data types.
// A structure is declared by using the keyword “struct“. When we declare a variable of the structure we need to write the keyword “struct in C language but for C++ the keyword is not mandatory*/
// // ''''''''''''''''''''
// #include<iostream>
// using namespace std;
// // Define a structure
// struct Person
// {
//     std::string name;
//     int age;
//     float height;
// };

// int main(int argc, char const *argv[])
// {
//     // Declare a variable of 'Person' structure type
//     Person person_1 ;

//     // Access and asign values to structure Person member
//     person_1.name = "Alice Smith";
//     person_1.age = 22;
//     person_1.height = 5.8;

//     cout << person_1.name << endl;
//     cout << person_1.age << endl;
//     cout << person_1.height << endl;
//     return 0;
// }

// // '''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Define a Structure
// struct Point
// {
//     int x; // Member variable
//     int y; // Member variable

//     // Member Functions
//     void Display() {
//         cout << "Point Co-ordinates:" << endl;
//         cout << " x: " << x << endl;
//         cout << " y: " << y << endl;
//     }

// };

// int main(int argc, char const *argv[])
// {
//     // Declare a variable of 'Point' Structure type
//     Point p1;

//     // Access and asign the variables to structure members
//     p1.x = 10;
//     p1.y = 15;

//     // Access the member using member function
//     p1.Display();
//     cout << "x: " << p1.x << endl;
//     cout << "y: " << p1.y << endl;

//     return 0;
// }

// // '''''''''''''''''''''''''
// #include<bits/stdc++.h>
// using namespace std;

// // Define a Structure
// struct GFG {
//     int G1;
//     char G2;
//     float G3;
// };
// // Driver Code
// int main(int argc, char const *argv[])
// {
//     // Declaring a Structure
//     struct GFG Geek;
//     Geek.G1 = 65;
//     Geek.G2 = 'A';
//     Geek.G3 = 123.56;

//     cout << "The Value of G1: " << Geek.G1 << endl;
//     cout << "The Value of G2: " << Geek.G2 << endl;
//     cout << "The Value of G3: " << Geek.G3 << endl;
//     return 0;
// }

// // ''''''''''''''''
// // C++ program to demonstrate the use
// // of struct using typedef
// #include <bits/stdc++.h>
// using namespace std;

// // Declaration of typedef
// typedef struct GeekForGeeks {

// 	int G1;
// 	char G2;
// 	float G3;

// } GFG;

// // Driver Code
// int main()
// {
// 	GFG Geek;
// 	Geek.G1 = 85;
// 	Geek.G2 = 'G';
// 	Geek.G3 = 989.45;

// 	cout << "The value is : " << Geek.G1 << endl;

// 	cout << "The value is : " << Geek.G2 << endl;

// 	cout << "The value is : " << Geek.G3 << endl;

// 	return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''''''''''Declaring a Structure in all ways''''''''''''''''''''''''''''''''''
// // Method 1: Basic Structure Declaration:
// #include<iostream>
// using namespace std;
// struct MyStruct_1{
//     int field1;
//     double field2;
//     char field3;
// };
// int main(int argc, char const *argv[])
// {

//     return 0;
// }
// // '''''''''''''''''''''
// // Method 2: Using typedef for Structure
// #include<iostream>
// #include<string>
// using namespace std;

// // Define a Structure
// struct MyStruct{
//     int feild1;
//     string feild2;
// };

// // Use typedef to create a alias
// typedef MyStruct AliasStruct;

// // Driver Code
// int main(int argc, char const *argv[])
// {
//     // Create an instance of alised structure 'AliceStruct'
//     AliasStruct my_instance_1;
//     my_instance_1.feild1 = 10;
//     my_instance_1.feild2 = "Alice";

//     // Access and Print the fields of AliasStruct or MyStruct
//     cout << "feild1: " << my_instance_1.feild1 << endl;
//     cout << "feild2: " << my_instance_1.feild2 << endl;
//     return 0;
// }

// // ''''''''''''''''
// #include<iostream>
// using namespace std;
// // Using an anonymous structure with typedef
// typedef  struct MyStruct{
//     int feild1;
//     std::string feild2;

//     void Display() {
//         cout << "feild1: " << feild1 << " feild2: " << feild2 << endl;
//     }
// }AliasStruct;

// int main(int argc, char const *argv[])
// {
//     AliasStruct my_instance;
//     my_instance.feild1 = 10;
//     my_instance.feild2 = "Alice";

//     // Access the member function of AliasStruct
//     my_instance.Display();
//     cout << "feild1: " << my_instance.feild1 << endl;
//     cout << "feild2: " << my_instance.feild2 << endl;
//     return 0;
// }

// // ''''''''''''''''
// #include<iostream>
// using namespace std;
// // Using an anonymous structure with typedef
// typedef  struct{
//     int feild1;
//     std::string feild2;

//     void Display() {
//         cout << "feild1: " << feild1 << " feild2: " << feild2 << endl;
//     }
// }MyStruct;

// int main(int argc, char const *argv[])
// {
//     MyStruct my_instance;
//     my_instance.feild1 = 10;
//     my_instance.feild2 = "Alice";

//     // Access the member function of AliasStruct
//     my_instance.Display();
//     cout << "feild1: " << my_instance.feild1 << endl;
//     cout << "feild2: " << my_instance.feild2 << endl;
//     return 0;
// }

// // '''''''''''''
// // Method 3: Using C++11 'class' Keyword:
// /*You can use the class keyword instead of struct in C++ to declare a structure, and the default access specifier will be private rather than public*/
// #include<iostream>
// using namespace std;

// // Using C++11 'class' Keyword
// class MyClass {
//     public:
//         int field1;
//         std::string field2;
    
//     void Display() {
//         cout << "feild1: " << field1 << " and feild2: " << field2 << endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     // Create an instance of variable of class MyClass
//     MyClass myClass;
//     myClass.field1 = 10;
//     myClass.field2 = "Alice";
//     myClass.Display();
//     cout << myClass.field1 << endl;
//     cout << myClass.field2 << endl;
//     return 0;
// }

// // ''''''''''''''
// // Method 4: Using a Constructor
// /*You can define a constructor for the structure to initialize its members.*/
// #include<iostream>
// using namespace std;

// struct MyStruct{
//     int field1;
//     std::string field2;

//     // Constructor
//     MyStruct(int f1, const std::string& f2) : field1(f1), field2(f2) {};
// };

// // Driver Code
// int main(int argc, char const *argv[])
// {
//     MyStruct my_instance(10, "Alice");
    
//     // Access the member of MyStruct
//     cout << my_instance.field1 << endl;
//     cout << my_instance.field2 << endl;
//     return 0;
// }

// // '''''''''''''''''''''''''''''''''
// // Method 5: Using 'class' with C++11 In-Class Member Initializers:
// #include<iostream>
// using namespace std;
// struct MyStruct{
//     int feild1 = 15;
//     std::string feild2 = "Alice";
// };

// int main(int argc, char const *argv[])
// {
//     // Create an instance of Structure MyStruct
//     MyStruct my_instance;
//     cout << my_instance.feild1 << " " << my_instance.feild2 << endl; 
//     return 0;
// }

// // ''''''''''''''''
// #include<iostream>
// using namespace std;

// struct MyStruct
// {
//     int feild1;
//     std::string feild2;
// };

// int main(int argc, char const *argv[])
// {
//     // MyStruct my_instance{10, "Hello"};
//     MyStruct my_instance = {10, "Hello"};
//     cout << my_instance.feild1 << " " << my_instance.feild2 << endl;
//     return 0;
// }

// // '''''''''''''''''''''''Pointer to Structure'''''''''''''''''''''''''
// #include<iostream>
// using namespace std;
// struct MyStruct{
//     int feild1;
//     std::string feild2;
// };
// int main(int argc, char const *argv[])
// {
//     // Declaring a Pointer to Structure MyStruct
//     MyStruct* structPtr = nullptr;
    
//     // Allocate memory for the structure using dynamic allocation (new keyword)
//     structPtr = new MyStruct;

//     // Access and modify the structure members through the pointer
//     structPtr->feild1 = 15;
//     structPtr->feild2 = "Hello, world!";

//     // Access and print the structure members
//     cout << structPtr->feild1 << endl;
//     cout << structPtr->feild2 << endl;

//     // Don't forget to release the allocated memory
//     delete structPtr;

//     return 0;
// }

// // '''''''''''''''''''''''''
// // Method 7: Array of Structure
// #include<iostream>
// using namespace std;

// struct MyStruct{
//     int feild1;
//     std::string feild2;
// };

// int main(int argc, char const *argv[])
// {
//     // Declare an Array of MyStruct with three elements
//     MyStruct structArray[3];

//     structArray[0].feild1 = 10;
//     structArray[0].feild2 = "Hello";

//     structArray[1].feild1 = 15;
//     structArray[1].feild2 = "World";

//     structArray[2].feild1 = 25;
//     structArray[2].feild2 = "Hello, World!";

//     // Access and print the structure members in array
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Element " << i << "- feild1 " << structArray[i].feild1 << endl;
//         cout << "Element " << i << "- feild2 " << structArray[i].feild2 << endl;
//     }
    
//     return 0;
// }

// ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // ''''''''''''''''''''''''''''''''''''''''''''Accessing Structure Members'''''''''''''''''''''
// // Method 1: Scope Resolution Operator (::) - Used to access static members of a structure.
// #include<iostream>
// using namespace std;

// struct MyStruct
// {
//     static int staticVar;
// };

// int MyStruct::staticVar = 25;
// int main(int argc, char const *argv[])
// {
    
//     int value = MyStruct::staticVar;
//     cout << value << endl;
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''Friend Function''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// class MyClass {
// private:
//     int privateVar;
// public:
//     MyClass(int val) : privateVar(val) {}

//     friend void AccessPrivateVar(MyClass& obj);
// };

// void AccessPrivateVar(MyClass& obj) {
//     obj.privateVar = 42;
// }

// int main() {
//     MyClass obj(10);
//     AccessPrivateVar(obj);
//     return 0;
// }

// // ''''''''''''''''''''''''Member Functions - You can define member functions to access private members'''''''''''''''''''''
// #include<iostream>
// using namespace std;

// class MyClass {
// private:
//     int privateVar;
// public:
//     MyClass(int val) : privateVar(val) {}

//     int GetPrivateVar() {
//         return privateVar;
//     }
// };

// int main() {
//     MyClass obj(10);
//     int val = obj.GetPrivateVar();
//     cout << val << endl;
//     return 0;
// }

// // ''''''''''''''''''''''''''''Accessing Nested Structures''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// struct OuterStruct
// {
//     struct InnerStruct {
//         int innerValue;
//     };
// };

// int main(int argc, char const *argv[])
// {
//     OuterStruct::InnerStruct nested_Obj;
//     nested_Obj.innerValue = 15; // Accessing a member of the nested structure using ::
//     cout << nested_Obj.innerValue << endl;
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''Accessing Enum Inside a Structure''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// struct MyStruct{
//     enum Color { RED, GREEN, BLUE};
// };

// int main(int argc, char const *argv[])
// {
//     MyStruct::Color color_1 = MyStruct::GREEN; // Accessing an enum inside a structure using ::
//     cout << color_1 << endl; // Output: 1(GREEN)
//     return 0;
// }

// '''''''''''''''''''''''''''''''''''''''''''''Initialization with Aggregate Initialization (C++11 and later)''''''''''''''''''
// struct Point {
//     int x;
//     int y;
// };

// Point p1 = {2, 3}; // Initialize with values
// Point p2{};        // Initialize with default values (0, 0)

// // '''''''''''''''''''''''''''''''Memberwise Initialization''''''''''''''''''''''
// struct Student {
//     int id;
//     std::string name;
// };

// Student s;
// s.id = 1;
// s.name = "John Doe";

// // '''''''''''''''''''''''''Designated Initializers (C++20 and later)'''''''''''''''''''''
// struct Color {
//     int red;
//     int green;
//     int blue;
// };

// Color c = {.red = 255, .green = 0, .blue = 0};

// // ''''''''''''''''''''''Uniform Initialization (C++11 and later)''''''''''''''''''''
// struct Vector {
//     double x;
//     double y;
// };

// Vector v1{1.0, 2.0};
// Vector v2{3.0}; // Initializes x=3.0, y=0.0

// // ''''''''''''''''''''''''Brace-Enclosed Initialization (C++11 and later):''''''''''''''''''''''''''
// struct Car {
//     std::string make;
//     int year;
// };

// Car c{"Toyota", 2022};

// // ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // ''''''''''''''''''''''''''''Structure as Function Parameters''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Define a Structure
// struct Point {
//     int x;
//     int y;
// };

// // Function that takes a structure as a parameter

// void printPoint(Point p) {
//     cout << "Point p.x: " << p.x << endl;
//     cout << "Point p.y: " << p.y << endl;
// }
// int main(int argc, char const *argv[])
// {
//     // Create an instance of Point Structure
//     Point myPoint;
//     myPoint.x = 15;
//     myPoint.y = 25;

//     // Call the function with the Point Structure as a parameter
//     printPoint(myPoint);
//     return 0;
// }
// // ''''''''''''''''''''''''''''''''Structures as Function Parameters''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Define the structure
// struct Point{
//     int x;
//     int y;
// };

// // Function to pass a structure by value
// void passByValue(Point p) {
//     cout << "Pass by Value: X = " << p.x << " ,Y = " << p.y << endl;
// }

// // Function to pass a structure by Reference
// void passByReference(const Point& p) {
//     cout << "Pass By Reference: X = " << p.x << " ,Y = " << p.y << endl;
// }

// // Function to pass a structure by Pointer 
// void passByPointer(const Point* p) {
//     cout << "Pass By Pointer: X = " << p->x << " ,Y = " << p->y << endl;
// }

// int main(int argc, char const *argv[])
// {
//     Point p1;
//     p1.x = 15;
//     p1.y = 25;

//     // Pass by Value
//     passByValue(p1);

//     // Pass by Reference
//     passByReference(p1);

//     // Pass by Pointer 
//     passByPointer(&p1);
//     return 0;
// }

// // '''''''''''''''''''''''''Passing Structue by Value''''''''''''''''''''''''''''''''''''''''''''
/*Passing a structure by value makes a copy of the structure, so changes made inside the function do not affect the original structure.*/
// #include <iostream>
// using namespace std;

// struct Point {
//     int x;
//     int y;
// };

// // Function to pass a structure by value
// void modifyPointByValue(Point p) {
//     p.x += 10;
//     p.y += 10;
//     cout << "Inside modifyPointByValue: X = " << p.x << ", Y = " << p.y << endl;
// }

// int main() {
//     Point myPoint = {5, 10};
//     modifyPointByValue(myPoint);

//     cout << "After function call: X = " << myPoint.x << ", Y = " << myPoint.y << endl;
//     return 0;
// }

// // '''''''''''''''''''''''''''''Passing Structure by Reference''''''''''''''''''''''''''''
// /*Passing a structure by reference allows changes made inside the function to affect the original structure.*/

// #include <iostream>
// using namespace std;

// struct Point {
//     int x;
//     int y;
// };

// // Function to pass a structure by reference
// void modifyPointByReference(Point &p) {
//     p.x += 10;
//     p.y += 10;
//     cout << "Inside modifyPointByReference: X = " << p.x << ", Y = " << p.y << endl;
// }

// int main() {
//     Point myPoint = {5, 10};
//     modifyPointByReference(myPoint);

//     cout << "After function call: X = " << myPoint.x << ", Y = " << myPoint.y << endl;
//     return 0;
// }

// // '''''''''''''''''''''''''''Passing a Structure by Pointer'''''''''''''''''''''''''''''''''
// /*Passing a structure by pointer allows for modification through a pointer to the structure.*/
// #include <iostream>
// using namespace std;

// struct Point {
//     int x;
//     int y;
// };

// // Function to pass a structure by pointer
// void modifyPointByPointer(Point *p) {
//     p->x += 10;
//     p->y += 10;
//     cout << "Inside modifyPointByPointer: X = " << p->x << ", Y = " << p->y << endl;
// }

// int main() {
//     Point myPoint = {5, 10};
//     Point *ptr = &myPoint;
//     modifyPointByPointer(ptr);

//     cout << "After function call: X = " << myPoint.x << ", Y = " << myPoint.y << endl;
//     return 0;
// }

// // ''''''''''''''''''''''Returning Structure by Value''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Define the Structure
// struct Point
// {
//     int x;
//     int y;
// };

// // Function that return a structure by value
// Point createPoint(int x, int y) {
//     Point p;
//     p.x = x;
//     p.y = y;
//     return p;
// }

// int main(int argc, char const *argv[])
// {
//     // Call the function to create a Point structure
//     Point myPoint = createPoint(10, 15);

//     // Access and display the returned Point structure
//     cout << "Point by Returning Structure by Value: X = " << myPoint.x << ", Y = " << myPoint.y << endl; 
//     return 0;
// }

// // ''''''''''''''''''''''''''''Returning Structure by Pointer''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Define the Structure
// struct Point{
//     int x;
//     int y;
// };

// // Function that returns a structure by pointer
// Point* createPoint(int x, int y){
//     Point* p = new Point;
//     p->x = x;
//     p->y = y;
//     return p;
// }

// int main(int argc, char const *argv[])
// {
//     // Call the function to create a Point Structure
//     Point* Point_Ptr = createPoint(10, 15);

//     // Access and display the returned Point structure
//     cout << "X = " << Point_Ptr->x << ", Y = " << Point_Ptr->y << endl;

//     // Don't forget to free the dynamically allocated memory
//     delete Point_Ptr;
//     return 0;
// }

// // '''''''''''''''''''''''''Returning Structures by Reference (be cautious about object lifetimes)'''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Define the structure
// struct Point {
//     int x;
//     int y;
// };

// // Function that returns a reference to a global structure(not recommended in practice)
// Point& create_Point(int x, int y) {
//     static Point global_Point = {10, 15};
//     return global_Point;
// } 

// int main(int argc, char const *argv[])
// {
//     Point& myPoint = create_Point(10, 15);
//     cout << "Point by Returning the Reference to a global structure: X = " << myPoint.x << " and Y = " << myPoint.y << endl;      
//     return 0;
// }

// // '''''''''''''''''''''''''''Using const with Structures'''''''''''''''''''''''''''''''''''''
// // 1.Using const with Structure Variables:
// #include<iostream>
// using namespace std;

// // Define the structure
// struct Point{
//     int x;
//     int y;
// };

// int main(int argc, char const *argv[])
// {
//     // Create a const Point structure 
//     Point myPoint = {10, 15};

//     // Attempting to modify const Point Structure variables will result in a compilation error
//     // myPoint.x = 25; // error: assignment of member 'Point::x' in read-only object
    
//     // Access and print the values
//     cout << "Point Structure, X = " << myPoint.x << " and Y = " << myPoint.y << endl;
//     return 0;
// }

// // '''''''''''''''''2.Using const with Structure Members''''''''''''''''''''
// #include<iostream>
// using namespace std;

// struct Circle{
//     const double radius;
//     int x;

// };

// int main(int argc, char const *argv[])
// {
//     // Create a Circle Structure with a constant radius
//     Circle circle = {5.0, 15};

//     // Accessing and printing the radius
//     cout << "Radius: " << circle.radius << endl;
//     cout << "X: " << circle.x << endl;

//     // Can not modify the constant member
//     // circle.radius = 10.0; // error: assignment of read-only member 'Circle::radius'  
//     circle.x = 25;
//     cout << "After Modification of X: X = " << circle.x << endl;

//     // circle = {5.0, 40}; // error: non-static const member 'const double Circle::radius', cannot use default assignment operator

//     return 0;
// }

// // ''''''''''''''''''3.Using const with Function Parameters'''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Define a structure
// struct Point{
//     int x;
//     int y;
// };
// void printPoint(const Point& p) {
//     // p.x = 15; // error: assignment of member 'Point::x' in read-only object

//     // You can read from the const structure, but not modify it
//     cout << "X = " << p.x << endl;
//     cout << "Y = " << p.y << endl;

//     // Attempting to modify the structure inside the function will result in a compilation error
//     p.xa = 25; // error: assignment of member 'Point::x' in read-only object
// }
// int main(int argc, char const *argv[])
// {
//     // Create a Point Structure 
//     Point myPoint = {10, 15};

//     // Call the function with the Point Structure as a const reference
//     printPoint(myPoint);

//     // Attempting to modify the structure inside the function will result in a compilation error
//     myPoint.x = 25;
//     myPoint = {35, 55};
    
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''''''''''''''''''Scope and Lifetime of Structure'''''''''''''''''''''''''''''''''''''''
// // 1.Local Scope Variable(Function Scope)
// #include<iostream>
// using namespace std;

// struct Point{
//     int x;
//     int y;
// };

// void myFunction() {
//     Point localPoint; // Local Structure Variable
//     localPoint.x = 15;
//     localPoint.y = 25;
//     cout << "X = " << localPoint.x << ", y = " << localPoint.y << endl;
// }

// int main(int argc, char const *argv[])
// {
//     // 'localPoint' Structure Variables in available here
//     // localPoint.x = 30; // error: 'localPoint' was not declared in this scope

//     myFunction(); // call the function
    
//     return 0;
// }

// // ''''''''''''''''''''''''''Global Structure Variable(File Scope)'''''''''''''''''''''
// #include<iostream>
// using namespace std;
// struct Point
// {
//     int x;
//     int y;
// };

// Point globalPoint; // Global Structure Variable

// void myFunction() {
//     globalPoint.x = 5;
//     globalPoint.y = 10;
//     cout<< "In myFunction Method"<<endl;
//     cout << "X = " << globalPoint.x << " , Y = " << globalPoint.y << endl;
// }

// int main(int argc, char const *argv[])
// {
//     globalPoint.x = 10;
//     globalPoint.y = 15;
//     cout << "In Main Method" << endl;
//     cout << "X = " << globalPoint.x << " , Y = " << globalPoint.y << endl;// The 'globalPoint' structure variable is accessible throughout the file

//     myFunction(); // Call the function
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''Static Structure Variables'''''''''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// // Define a structure
// struct Point {
//     int x;
//     int y;
// };

// void myFunction() {
//     // Create a static structure variable within a function
//     static Point staticPoint;
//     staticPoint.x = 5;
//     staticPoint.y = 10;

//     // Accessible within the function, persists between function calls
//     cout << "X = " << staticPoint.x << ", Y = " << staticPoint.y << endl;
// }

// int main() {
//     myFunction(); // Call the function

//     // Attempting to access 'staticPoint' here will result in a compilation error
//     // cout << "X = " << staticPoint.x << ", Y = " << staticPoint.y << endl;

//     return 0;
// }

// // '''''''''''''''''''''''Dynamic Memory Allocation of Structure''''''''''''''''''''''''''''
// // 1.Dynamic Allocation Using new and delete:
// #include<iostream>
// using namespace std;

// // Define the structure
// struct Point{
//     int x;
//     int y;
// };

// int main(int argc, char const *argv[])
// {
//     // Dynamically allocate a Point Structure
//     Point* PointPtr = new Point;
//     PointPtr->x = 10;
//     PointPtr->y = 15;

//     // Access and use the dynamically allocated Point structure
//     cout << "Dynamic Memory Allocation" << endl;
//     cout << "X =  " << PointPtr->x << endl;
//     cout << "Y = " << PointPtr->y << endl;

//     // Deallocate the dynamically allocated memory to prevent memory leaks
//     delete PointPtr;
//     return 0;
// }

// // '''''''''''''''''''''''Dynamic Allocation Using malloc and free (C-style):'''''''''''''''''''''''''
// #include<iostream>
// #include<cstdlib> // Include the C library for memory allocation functions
// using namespace std;

// // Define the Structure
// struct Point{
//     int x;
//     int y;
// };

// int main(int argc, char const *argv[])
// {
//     // Dynamically allocate a Point structure using malloc
//     Point* dynamicPoint = static_cast<Point*> (malloc(sizeof(Point)));

//     if (dynamicPoint == nullptr)
//     {
//         cout << "Memory allocation failed" << endl;
//         return 1;
//     }

//     dynamicPoint->x = 10;
//     dynamicPoint->y = 15;
//     // Access and use the dynamically allocated Point structure
//     cout << "X = " << dynamicPoint->x << " , Y = " << dynamicPoint->y << endl;

//     // Deallocate the dynamically allocated Point structure memory using free
//     free(dynamicPoint);
        
//     return 0;
// }

// // '''''''''''''''''''''Dynamic allocation of an array of Structures''''''''''''''''''''
// #include <iostream>
// using namespace std;

// // Define a structure
// struct Point {
//     int x;
//     int y;
// };

// int main() {
//     // Dynamic allocation of an array of structures
//     int size = 3;
//     Point* dynamicPoints = new Point[size];

//     // Initialize the structure members in the array
//     for (int i = 0; i < size; ++i) {
//         dynamicPoints[i].x = i * 10;
//         dynamicPoints[i].y = i * 20;
//     }

//     // Access and use the dynamically allocated array of structures
//     for (int i = 0; i < size; ++i) {
//         cout << "X = " << dynamicPoints[i].x << ", Y = " << dynamicPoints[i].y << endl;
//     }

//     // Don't forget to deallocate the memory for the array
//     delete[] dynamicPoints;

//     return 0;
// }

// // '''''''''''''''''''''''Error Handling for Memory Allocation'''''''''''''''''''
// #include <iostream>
// using namespace std;

// int main() {
//     int* dynamicInt = nullptr;

//     // Dynamic memory allocation with error handling
//     try {
//         dynamicInt = new int[10];
//     }
//     catch (bad_alloc& ex) {
//         cerr << "Memory allocation failed: " << ex.what() << endl;
//         return 1;
//     }

//     // Use the dynamically allocated memory

//     // Don't forget to deallocate the memory
//     delete[] dynamicInt;

//     return 0;
// }

// // '''''''''''''''''''''''''''''''Local and Global Scope Interaction''''''''''''''''''''
// 1.Local and Global Variables with Same name
// #include<iostream>
// using namespace std;

// // Define the structure
// struct Point {
//     int x;
//     int y;
// };

// int main(int argc, char const *argv[])
// {
//     // Create a local structure variable with the same name as the global structure variable
//     Point localPoint;    
//     localPoint.x = 5;
//     localPoint.y = 10;

//     // Access the local variables using its name
//     cout << "Local X = " << localPoint.x << " Local Y = " << localPoint.y << endl;

//     // Access the global structure variable using the scope resolution operator
//     ::Point globalPoint;
//     globalPoint.x = 10;
//     globalPoint.y = 15;

//     // Access the global structure variable using the scope resolution operator(::)
//     cout << "Global X = " << globalPoint.x << endl;
//     cout << "Global Y = " << globalPoint.y << endl;
//     return 0;
// }

// // ''''''''''''''''''''''''''''''Local Variables Takes Precedence''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// // Define a global structure
// struct Point {
//     static int x;
//     int y;
// };

// int main() {
//     // Create a local structure variable with the same name as the global one
//     Point localPoint;
//     localPoint.x = 5;
//     localPoint.y = 10;

//     // Access the local variable; it takes precedence within the 'main' function
//     cout << "Local X = " << localPoint.x << ", Local Y = " << localPoint.y << endl;

//     // Access the global variable using the scope resolution operator 
//     // cout << "Global X = " << ::Point::x << endl; // error : undefined reference to `Point::x'
//     // cout << "Global Y = " << ::Point::y << endl; // error: invalid use of non-static data member 'Point::y'

//     return 0;
// }

// // ''''''''''''''''''''''''Local Scope within nested function''''''''''''''''''
// #include<iostream>
// using namespace std;
// // Define a global structure
// struct Point
// {
//     int x;
//     int y;
// };

// void nestedFunction() {
//     // Create a local structure variable within a nested function
//     Point localPoint;
//     localPoint.x = 5;
//     localPoint.y = 10;

//     // Access the local variables within the nested function
//     cout << "In nested function: X = " << localPoint.x << ", Y = " << localPoint.y << endl;
// }

// int main(int argc, char const *argv[])
// {
//     // Create a local structure variable within the main function
//     Point localPoint;
//     localPoint.x = 10;
//     localPoint.y = 15;

//     // Access the local variables within the main function 
//     cout << "In Main Method: X = " << localPoint.x << " , Y = " << localPoint.y << endl;

//     // Call the nested function
//     nestedFunction();
//     return 0;
// }


// // ''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// // Define a global structure
// struct Point {
//     int x = 10;
//     int y;
// };

// int x = 10; // Global variable with the same name as the structure member

// int main() {
//     // Create a local structure variable
//     Point point;
//     point.x = 5;
//     point.y = 15;

//     // Access the global 'x' and the structure member 'x'
//     cout << "Global x: " << x << endl;
//     cout << "Global x: " << ::x << endl;
//     cout << "Structure member x: " << point.x << endl;

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''Structure Arrays''''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Define a Structure
// struct Student {
//     int roll_number;
//     std::string name;
//     float marks; 
// };

// int main(int argc, char const *argv[])
// {
//     // Creating a array of Structures
//     /*Declare an array of structures to store information about multiple students.*/
//     Student student[3]; // Create a array of 3 Student structures

//     // Initializing an Array of Structures:
//     // Method 1:
//     student[0].roll_number = 1;
//     student[0].name = "Alice";
//     student[0].marks = 65.4;

//     student[1].roll_number = 2;
//     student[1].name = "Bob";
//     student[1].marks = 70.8;

//     student[2].roll_number = 3;
//     student[2].name = "Charlie";
//     student[2].marks = 80.5;

//     // Method 2:
//     student[0] = {1, "Alice John", 55.6};
//     student[1]=  {2, "Bob John", 60.5};
//     student[2]= {3, "Bob John", 65.5};

//     for (int i = 0; i < 3; i++){
//         cout << "Student " << i << ": " << student[i].roll_number << endl;
//         cout << "Student " << i << ": " << student[i].name << endl;
//         cout << "Student " << i << ": " << student[i].marks << endl;
//     }
//     cout << endl;
//     for (int i = 0; i < 5; i++) {
//     cout << "Roll Number: " << student[i].roll_number << endl;
//     cout << "Name: " << student[i].name << endl;
//     cout << "Marks: " << student[i].marks << endl;
//     cout << "======================" << endl;
//     }

//     // Dynamic memory allocation for an array of structure
//     Student* students = new Student[3];
//     students[0] = {1, "Anil", 56.78};
//     students[1] = {2, "David", 45.89};
//     students[2] = {3, "John", 67.89};

//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Roll Number: " << students[i].roll_number << endl;
//         cout << "Name: " << students[i].name << endl;
//         cout << "Mark: " << students[i].marks << endl;
//     }
    

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''''''''''Initializing an Array of Structures during Declaration'''''''''''''''''''''''
// #include<iostream>
// #include<string>
// using namespace std;

// // Declare Employee Structure
// struct Employee {
//     string name;
//     int employee_id;
// };

// // Initialize the Employee structure (Global Scope)
// Employee employees[] = {
//     {"Alice Global", 1},
//     {"Bob Global", 2},
//     {"Charlie Global", 3}
// };


// // Dynamic Memory Allocation with Initialization(Global Scope)
// Employee* employees_2 = new Employee[4]{
//     {"John Global", 201},
//     {"Jane Global", 202},
//     {"Mike Global", 203}
// };
// int main(int argc, char const *argv[])
// {
//         // Initialize the Employee structure (Local Scope)
//     Employee employees[] = {
//         {"Alice Local", 1},
//         {"Bob Local", 2},
//         {"Charlie Local", 3}
//     };

//         // Dynamic Memory Allocation with Initialization(Local Scope)
//     Employee* employees_2 = new Employee[4]{
//         {"John Local", 201},
//         {"Jane Local", 202},
//         {"Mike Local", 203}
//     };

//     cout << "-------------------Employees Info------------------------" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Employee Name: " << employees[i].name << endl;
//         cout << "Employee Employee id: " << employees[i].employee_id << endl;
//         cout << "===================================" << endl;
//     }
//     cout << endl;

//     cout << "-------------------Employees Info(Dynamic Memory Allocation)------------------------" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Employee Name: " << employees_2[i].name << endl;
//         cout << "Employee Employee id: " << employees_2[i].employee_id << endl;
//         cout << "===================================" << endl;
//     }
    
//     delete[] employees_2;
//     return 0;
// }

// // '''''''''''''''''''''''''''Using Dynamic Memory Allocation'''''''''''''''''''''''''''''
// // Method 1: Using new and delete Operator
// #include <iostream>
// using namespace std;

// struct Student {
//     string name;
//     int rollNumber;
// };

// int main() {
//     int arraySize = 3; // Define the size of the array.

//     // Dynamically allocate memory for an array of structures using the new operator.
//     Student* students = new Student[arraySize];

//     // Initialize the array elements.
//     students[0] = {"Alice", 101};
//     students[1] = {"Bob", 102};
//     students[2] = {"Charlie", 103};

//     // Access and print the array elements.
//     for (int i = 0; i < arraySize; i++) {
//         cout << "Name: " << students[i].name << " | Roll Number: " << students[i].rollNumber << endl;
//     }

//     // Don't forget to release memory.
//     delete[] students;

//     return 0;
// }

// // '''''''''''''''''''''
// // 2. Method 2: Using malloc and free
// #include <iostream>
// #include <cstdlib>
// using namespace std;

// struct Product {
//     string name;
//     double price;
// };

// int main() {
//     int arraySize = 4; // Define the size of the array.

//     // Dynamically allocate memory for an array of structures using malloc.
//     Product* products = (Product*)malloc(arraySize * sizeof(Product));

//     // Initialize the array elements.
//     products[0] = {"Product1", 10.99};
//     products[1] = {"Product2", 15.49};
//     products[2] = {"Product3", 7.99};
//     products[3] = {"Product4", 25.99};

//     cout << products[0].name << endl; // no output
//     // Access and print the array elements.
//     for (int i = 0; i < arraySize; i++) {
//         cout << "Name: " << products[i].name << " | Price: " << products[i].price << endl;
//     }

//     // Don't forget to release memory.
//     free(products);

//     return 0;
// }

// // ''''''''''''''''''''
// // Method 3: Using vector
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;

// struct Book {
//     string title;
//     string author;
// };

// int main(int argc, char const *argv[])
// {
//     int array_size = 4;
//     vector<Book> library; // Create a vector of Book Structure

//     // Add elements to the library(vector<Book>)
//     library.push_back({"Book1", "Author1"});
//     library.push_back({"Book2", "Author2"});
//     library.push_back({"Book3", "Author3"});
//     library.push_back({"Book4", "Author4"});

//     // Access and print the elements of the library(vector<Book>)
//     for (const Book& book : library)
//     {
//         cout << "Title: " << book.title << " | Author: " << book.author << endl;
//     }
        
//     // No need to release memory, as vectors manage memory automatically.


//     return 0;
// }

// // ''''''''''''''''''''''''''''Passing an array of Structures in Function''''''''''''''''''''''''''''''''''''
// // Pass by Reference
// #include <iostream>
// using namespace std;

// struct Student {
//     string name;
//     int rollNumber;
// };

// // Function to print student information from an array of structures.
// void printStudents(const Student students[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << "Name: " << students[i].name << " | Roll Number: " << students[i].rollNumber << endl;
//     }
// }

// int main() {
//     int arraySize = 3;
//     Student students[] = {
//         {"Alice", 101},
//         {"Bob", 102},
//         {"Charlie", 103}
//     };

//     // Call the function and pass the array to it.
//     printStudents(students, arraySize);

//     return 0;
// }

// // ''''''''''
// // 2.pass by Pointer
// #include <iostream>
// using namespace std;

// struct Product {
//     string name;
//     double price;
// };

// // Function to print product information from an array of structures using a pointer.
// void printProducts(const Product* products, int size) {
//     for (int i = 0; i < size; i++) {
//         cout << "Name: " << products[i].name << " | Price: " << products[i].price << endl;
//     }
// }

// int main() {
//     int arraySize = 4;
//     Product products[] = {
//         {"Product1", 10.99},
//         {"Product2", 15.49},
//         {"Product3", 7.99},
//         {"Product4", 25.99}
//     };

//     // Call the function and pass the array as a pointer.
//     printProducts(products, arraySize);

//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''File Handling with an Structure'''''''''''''''''''''''''''
// 1. Writing Data to a File with a Structure
// #include<iostream>
// #include<string>
// #include<fstream>
// using namespace std;

// struct Student
// {
//     int roll_number;
//     string name;
// };

// int main(int argc, char const *argv[])
// {
//     // Create a Student Structure 
//     Student student = {101, "Alice"};

//     // open a file for writing
//     ofstream outputFile("student.txt");

//     // Check if the file is opened successfully.
//     if (outputFile.is_open()) {
//         // Write data from the structure to the file.
//         outputFile << "Name: " << student.name << "\n";
//         outputFile << "Roll Number: " << student.roll_number << "\n";

//         // Close the file.
//         outputFile.close();
//         cout << "Data written to file successfully." << endl;
//     } else {
//         cerr << "Failed to open the file for writing." << endl;
//     }
//     return 0;
// }

// '''''''''''''''''
// 2. Reading Data from a File into a Structure
#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    string name;
    int rollNumber;
};

int main() {
    // Create a Student structure.
    Student student;

    // Open a file for reading.
    ifstream inputFile("student_2.txt");

    // Check if the file is opened successfully.
    if (inputFile.is_open()) {
        // Read data from the file into the structure.
        inputFile >> student.name;
        inputFile >> student.rollNumber;

        // Close the file.
        inputFile.close();

        // Print the data.
        cout << "Name: " << student.name << endl;
        cout << "Roll Number: " << student.rollNumber << endl;
    } else {
        cerr << "Failed to open the file for reading." << endl;
    }

    return 0;
}

