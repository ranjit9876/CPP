// // '''''''''''''''''''''''''''''''Standard Classes'''''''''''''''''''''''''''''''''''''''''''
// // 1.std::string -- std::string is a class for handling strings in C++.
// #include<iostream>
// #include<string>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     std::string str = "Hello, world!";
//     cout << str << endl;
//     return 0;
// }

// // '''''''''''''''''
// // 2.std::vector - std::vector is a dynamic array that can grow or shrink in size
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // vector<int> numbers;
//     std::vector<int> numbers;
//     numbers.push_back(10);
//     numbers.push_back(20);
//     numbers.push_back(30);
//     numbers.push_back(40);
//     numbers.push_back(50);

//     for (int num : numbers)
//     {
//         cout << num << " ";
//     }
    
//     return 0;
// }

// // ''''''''''''''''''''
// // 3.std::map - std::map is an associative container that stores key - value pairs
// #include<iostream>
// #include<map>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // map<std::string, int> scores;
//     std::map<std::string, int> scores;
//     scores["Alice"] = 95;
//     scores["Bob"] = 97;

//     cout << "Alice's score is " << scores["Alice"] << endl; 
//     cout << "Bob's score is " << scores["Bob"] << endl;
//     return 0;
// }

// // '''''''''''''''''
// // 4.std::set - std::set is an ordered container that stores unique elements
// #include<iostream>
// #include<set>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // set<std::string> words;
//     std::set<std::string> words;
//     words.insert("Hello");
//     words.insert("World");
//     words.insert("Hello");
//     words.insert("GFG");
//     for (std::string word : words)
//     {
//         cout << word << " ";
//     }
    
//     return 0;
// }

// // ''''''''''''''''''''
// // 5.std::ifstream and std::ofstream - These classes are used for reading from and writing to files, respectively
// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     std::ofstream file("output.txt");
//     file << "Hello World!. Welcome to My File";
//     file.close();

//     std::ifstream inFile("input.txt");
//     std::string content;
//     inFile >> content;
//     cout << content << endl;
//     return 0;
// }

// // '''''''''''''''
// // 6.std::chrono - std::chrono class is used for time and date manipulation
// #include<iostream>
// #include<chrono>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     auto start = std::chrono::high_resolution_clock::now();
//     // Code to mesure time 
//     cout << "Hello, world!" << endl;
//     auto num_1 = 10;
//     auto num_2 = "10";
//     auto end = std::chrono::high_resolution_clock::now();
//     auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
//     cout << "Time taken by function: " << duration.count() << " microseconds." << endl;
//     return 0;
// }

// // ''''''''''''''''''''
// // 7.std::queue - Queue (FIFO):
// #include<iostream>
// #include<queue>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     std::queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
    
//     int frontValue = q.front();
//     cout << frontValue << endl;
//     q.pop();
//     return 0;
// }

// // ''''''''''''''''
// // 7.std::stack - Stack (LIFO):
// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     std::stack<std::string> myStack;
//     myStack.push("Hello");
//     myStack.push("World");
//     myStack.push("GFG");
//     myStack.push("Hello World!- top value");

//     std::string topString = myStack.top();
//     cout << topString << endl;
//     return 0;
// }

// // ''''''''''''''''''
// // 8.std::list - std::list is doubly-linked list 
// #include<iostream>
// #include<list>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     std::list<int> mylist;
    
//     // Insert elements
//     mylist.push_back(10); // Add the element to the end
//     mylist.push_back(20);
//     mylist.push_front(30); // Add the element to the beginning
//     mylist.push_front(40);
//     mylist.push_back(50);

//     // Iterate through the list
//     for (int num : mylist)
//     {
//         cout << num << " ";
//     }
    
//     return 0;
// }

// // '''''''''''''''
// // 6.std::deque -  double-ended queue container 
// #include <iostream>
// #include <deque>
// using namespace std;

// int main() {
//     std::deque<int> myDeque;

//     // Insert elements
//     myDeque.push_back(1);
//     myDeque.push_back(2);
//     myDeque.push_front(0);

//     // Access elements
//     cout << "Front element: " << myDeque.front() << endl;
//     cout << "Back element: " << myDeque.back() << endl;

//     // Iterate through the deque
//     for (int value : myDeque) {
//         cout << value << " ";
//     }

//     // Output: Front element: 0
//     //         Back element: 2
//     //         0 1 2

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // '''''''''''''''''''''''''''''''''''''''''''''''''''''''2.Abstract Classes'''''''''''''''''''''''''''''''''''''
// // ''''''''''Creating an Abstract Class with a Pure Virtual function 
// #include<iostream>
// using namespace std;

// class AbstractShape {
//     public:
//         // Pure Virtual functions - no implementation in the base class(AbstractShape)
//         virtual void area() const = 0;

//         // Regular member functions - implementation in the base class(AbstractShape)
//         void printInfo() {
//             cout << "This is a shape" << endl;
//         }

// };

// // Derived class with a concrete implementation
// class Circle : public AbstractShape {
// public:
//     double radius;

// public:
//     Circle(double r) : radius(r) {};

//     // Implementate the pure virtual function
//     void area() const override {
//         double  result = 3.14159 * radius * radius;
//         cout << "Area of the circle: " << result << endl;
//     }

// };

// int main(int argc, char const *argv[])
// {
//     // AbstractShape shape; // error: cannot declare variable 'shape' to be of abstract type 'AbstractShape' because the following virtual functions are pure within 'AbstractShape':
//     Circle circle1(10);
//     circle1.printInfo();
//     circle1.area();


//     return 0;
// }

// // '''''''''''''''''''Polymorphism with Abstract Classes''''''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// #include<vector>
// using namespace std;

// // Abstract Base Class
// class AbstractBaseClass {
//     public:
//         virtual void DisplayInfo() = 0;
//         void PrintInfo() {
//             cout << "This is printInfo() function in Abstract Class" << endl;
//         }
// };

// // Derived classes
// class DerivedClass_1 : public AbstractBaseClass {
//     public:
//         void DisplayInfo() override {
//             cout << "This is DerivedClass_1" << endl;
//         }
// };

// class DerivedClass_2 : public AbstractBaseClass {
//     public:
//         void DisplayInfo() override {
//             cout << "This is DerivedClass_2" << endl;
//         }
// };

// int main(int argc, char const *argv[])
// {
//     // // AbstractBaseClass baseClass = new AbstractBaseClass(); // error: cannot declare variable 'baseClass_1' to be of abstract type 'AbstractBaseClass'
//     // AbstractBaseClass* baseClass_1 = new DerivedClass_1(); 
//     // baseClass_1->DisplayInfo();
//     // cout << new DerivedClass_1() << endl; // Output : 0x1d8b27b1aa0 (Address of object variable of DerivedClass_1)
//     // baseClass_1->PrintInfo();

//     std::vector<AbstractBaseClass*> baseClasses;
//     baseClasses.push_back(new DerivedClass_1());
//     baseClasses.push_back(new DerivedClass_2());

//     for (AbstractBaseClass* baseClass : baseClasses)
//     {
//         baseClass->DisplayInfo(); // Polymorphic Call
//     }

//     // Clean up dynamically
//     for (AbstractBaseClass* baseClass : baseClasses) {
//         delete baseClass;
//     }      
//     return 0;
// }

// // ''''''''''''''''''''''''1.Regular Classes''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// class Person {
//     public:
//         // Data Members 
//         std::string name;
//         int age;

//     // Member functions
//     void DisplayInfo() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Person person_1;
//     person_1.name = "John";
//     person_1.age = 22;
//     person_1.DisplayInfo();
//     return 0;
// }

// // ''''''''''''''''''''''''Inheritance and Polymorphism''''''''''''''''''''''''''''''''''''''''''''''''''''''
// #include <iostream>

// class Vehicle {
// protected:
//     int numWheels;
// public:
//     Vehicle(int wheels) : numWheels(wheels) {}

//     virtual void start() {
//         std::cout << "Vehicle started." << std::endl;
//     }

// // protected:
// //     int numWheels;

// };

// class Car : public Vehicle {
// public:
//     Car() : Vehicle(4) {}

//     void start() override {
//         std::cout << "Car started." << std::endl;
//     }
// };

// class Bike : public Vehicle {
// public:
//     Bike() : Vehicle(2) {}
// };

// int main() {
//     Vehicle* vehicle1 = new Car();
//     Vehicle* vehicle2 = new Bike();

//     vehicle1->start(); // Calls Car's start() due to polymorphism
//     vehicle2->start(); // Calls Vehicle's start() as Bike does not override it

//     delete vehicle1;
//     delete vehicle2;

//     return 0;
// }

// // '''''''''''''''''''''''''''Multiple Inheritance'''''''''''''''''''''''''''''''''''''''''''
// #include <iostream>

// class Engine {
// public:
//     void start() {
//         std::cout << "Engine started." << std::endl;
//     }
// };

// class Wheels {
// public:
//     void roll() {
//         std::cout << "Wheels are rolling." << std::endl;
//     }
// };

// class Car : public Engine, public Wheels {
// public:
//     void drive() {
//         start();
//         roll();
//         std::cout << "Car is moving." << std::endl;
//     }
// };

// int main() {
//     Car car;
//     car.drive();

//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''Derived Classes''''''''''''''''''''''''''''''''''''''
// #include <iostream>
// #include <cmath>

// // Base class
// class Shape {
// public:
//     virtual double area() const {
//         return 0.0; // Base class provides a default implementation
//     }

//     virtual void printInfo() const {
//         std::cout << "This is a generic shape." << std::endl;
//     }
// };

// // Derived class 1: Rectangle
// class Rectangle : public Shape {
// private:
//     double length;
//     double width;

// public:
//     Rectangle(double l, double w) : length(l), width(w) {}

//     double area() const override {
//         return length * width;
//     }

//     void printInfo() const override {
//         std::cout << "This is a rectangle with length " << length << " and width " << width << "." << std::endl;
//     }
// };

// // Derived class 2: Circle
// class Circle : public Shape {
// private:
//     double radius;

// public:
//     Circle(double r) : radius(r) {}

//     double area() const override {
//         return 3.14159 * radius * radius;
//     }

//     void printInfo() const override {
//         std::cout << "This is a circle with radius " << radius << "." << std::endl;
//     }
// };

// int main() {
//     Shape* shapes[] = {new Rectangle(4.0, 5.0), new Circle(3.0)};

//     for (const auto& shape : shapes) {
//         shape->printInfo();
//         std::cout << "Area: " << shape->area() << std::endl;
//         std::cout << std::endl;
//     }

//     for (auto shape : shapes) {
//         delete shape;
//     }

//     return 0;
// }

// // ''''''''''''''''''''''''''''''Friend Classes'''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// class MyData {
//     private:
//         int private_data;
//     public:
//          MyData(int val) : private_data(val) {};
//         friend class DataModifier; // Friend Declaration
// };

// class DataModifier {
//     public:
//         void modify(MyData& obj, int value) {
//             obj.private_data = value;
//         }
// };

// int main(int argc, char const *argv[])
// {
//     MyData myData(25);
//     DataModifier dataModifier;
//     // cout << "Original data: " << myData.private_data << endl; // error: 'int MyData::private_data' is private within this context
//     dataModifier.modify(myData, 50);
//     // cout << "Modified data: " << myData.private_data << endl; // error: 'int MyData::private_data' is private within this context

//     return 0;
// }

// // '''''''''''''''''''''''Nested Classes''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// class OuterClass {
//     private:
//         int outer_data;
//     public:
//         // Constructor
//         OuterClass(int x) : outer_data(x) {};
//         class NestedClass {
//             private:
//                 int inner_data;
//             public:
//                 NestedClass(int y) : inner_data(y) {};

//                 void DisplayInfo() {
//                     cout << "Nested Data: " << inner_data << endl;
//                 }
//         };
//         void DisplayInfo2() {
//             cout << "Outer Data: " << outer_data << endl;
//         }
// };

// int main(int argc, char const *argv[])
// {
//     OuterClass outer_obj(50);
//     OuterClass::NestedClass nested_obj(25);
//     outer_obj.DisplayInfo2();
//     nested_obj.DisplayInfo();
//     return 0;
// }

// // '''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// void OuterFunction() {
//     int outerVar = 42;
    
//     // Local Class defined within OuterFunction
//     class LocalClass{
//         public:
//             int LocalClass_Var = 50;
//         public:
//             void DisplayInfo() {
//                 cout << "Local Class Variables: " << LocalClass_Var << endl;
//             }

//             void DisplayOuterVar(int x) {
//                 cout << "OuterFunction Variables: " << x << endl;
//             }
//     };

//     LocalClass local_obj;
//     local_obj.DisplayInfo();
//     local_obj.DisplayOuterVar(outerVar);
// }
// int main(int argc, char const *argv[])
// {
//     OuterFunction();
//     // Attempting to create an object of the local class outside the function is not allowed.
//     // LocalClass localObj_2; // Error: 'LocalClass' was not declared in this scope
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''Lambda Classes'''''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // Lambda expressions to add two numbers
//     auto add = [] (int x, int y) {
//         return x + y;
//     };

//     int sum = add(10, 15);
//     cout << "Result of add method: " << sum << endl;

//     // Lambda expressions with capture
//     int x = 10;
//     auto multiply = [x] (int y) {
//         return x * y;
//     };

//     int product = multiply(15);
//     cout << "Result of multiply method: " << product << endl;
//     return 0;
// }

// // '''''''''''''''''''''''''''''''''Union Classes''''''''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// union MyUnion
// {
//     int intValue;
//     double doubleValue;
//     float floatValue;
// };

// int main(int argc, char const *argv[])
// {
//     MyUnion U;
//     U.intValue = 10;
//     cout << "intValue: " << U.intValue << endl;
//     cout << "doubleValue: " << U.doubleValue << endl;

//     U.floatValue = 123.45F;
//     cout << "floatValue: " << U.floatValue << endl;
//     cout << "doubleValue: " << U.doubleValue << endl;
//     cout << "intValue: " << U.intValue << endl;

//     U.doubleValue = 123.45;
//     cout << "doubleValue: " << U.doubleValue << endl;
//     cout << "intValue: " << U.intValue << endl;
//     cout << "floatValue: " << U.floatValue << endl;
//     return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std; 

// union DataUnion
// {
//     int intValue;
//     double doubleValue;
//     char charValue;
// };

// int main(int argc, char const *argv[])
// {
//     DataUnion data; // Declare DataUnion Variable

//     data.intValue = 15;
//     cout << "intValue: " << data.intValue << endl;

//     data.doubleValue = 123.45;
//     cout << "doubleValue: " << data.doubleValue << endl;

//     data.charValue = 'R';
//     cout << "charValue: " << data.charValue << endl;

//     // The union can only hold one value at a time, so previous values are overwritten
//     cout << "After changing the  value, integer: " << data.intValue << endl; // output: -858993582
//     cout << "After changing the value, double: " << data.doubleValue << endl; // output: 123.45
//     cout << "After changing the value, char: " << data.charValue << endl; // output: R

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''Template classes'''''''''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// template<typename T>
// class MyContainer {
//     private:
//         T data;
//     public:
//         MyClass(T value): data(value){};

//         T getvalue() {
//             return data;
//         }
// };

// int main(int argc, char const *argv[])
// {
//     MyContainer<int> container_1() ; 
//     return 0;
// }

// '''''''''''''''''''''''''''''''''''
