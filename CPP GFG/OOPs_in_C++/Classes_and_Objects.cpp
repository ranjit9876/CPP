/*Access Control and Constraints of Structures, Classes and Unions
Structures	Classes	Unions
class key is struct	class key is class	class key is union
Default access is public	Default access is private	Default access is public
No usage constraints	No usage constraints	Use only one member at a time*/

// Syntax of Cpp Class
/*
[template-spec]
class [ms-decl-spec] [tag [: base-list ]]
{
   member-list
} [declarators];
[ class ] tag declarators;
*/

// // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// template<typename T>
// T minimum(const T& a, const T& b) {
//    return a < b ? a : b;
// }

// class MyClass {
//    public:
//       int num = 10;
// };

// int main(int argc, char const *argv[])
// {

//    return 0;
// }

// '''''''''''''''''''''''''''''''''''''Classes and Objects''''''''''''''''''''''''''''
#include<iostream>
using namespace std;
class MyClass {
private:
   // Private data members
   int private_data = 25;

public:
   // public data members
   int public_data = 50;

   // Constructor
   MyClass () {
      // Constructor code
   }

   // Constructor
   MyClass (int Private_data, int Public_data) {
      // Constructor code
      this->private_data = Private_data;
      this->public_data = Public_data;
   }

   // Member Functions
   int Member_Function() {
      // Code for member functions
      return private_data + public_data;
   }
};

int main(int argc, char const *argv[])
{
   MyClass myClass_1; // Call Default Constructor
   cout << &myClass_1 << endl;
   int result = myClass_1.Member_Function();
   cout << result << endl;
   // Accessing data members
   cout << myClass_1.public_data << endl;
   // cout << myClass_1.private_data << endl; // error: 'int MyClass::private_data' is private within this context

   MyClass myClass_2(10, 15); // Call Custom Constructor
   int result_2 = myClass_2.Member_Function();
   cout << result_2 << endl;
   cout<< myClass_2.public_data << endl;
   // cout << myClass_2.private_data << endl; // error: 'int MyClass::private_data' is private within this context

   return 0;
}

// // ''''''''''''''''''''''''''''''Class and Object in Competitive Programming''''''''''''''''''''''''''''
// #include<iostream>
// #include<cmath>
// using namespace std;

// class Point {
//    private:
//       double x, y;

//    public:
//       // // Constructor
//       // Point(double x, double y) {
//       //    this->x = x;
//       //    this->y = y;
//       // };

//       Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {};

//       // Member function to calculate the distance between two points
//       double distanceTo(Point otherPoint) {
//          return sqrt(pow(x - otherPoint.x, 2) + pow(y - otherPoint.y, 2));
//       }
// };

// int main(int argc, char const *argv[])
// {
//    // Creating Objects
//    Point p1(10,15);
//    Point p2(5, 10);

//    // Calculating and Printing the distance between Points p1 and p2
//    double distance = p1.distanceTo(p2);
//    cout << "The Distance between two points p1 and p2 is " << p1.distanceTo(p2) << endl;
//    return 0;
// }

// // '''''''''''''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// class Car
// {
// public:
//    // Data members (attributes)
//    string brand = "BMW";
//    int year = 2002;

//    // Member function (method)
//    void displayInfo()
//    {
//       cout << "Brand: " << brand << ", Year: " << year << endl;
//    }
// };

// int main()
// {
//    // Object creation
//    Car myCar;

//    // Before accessing and modifying the object members
//    myCar.displayInfo();

//    // Accessing and modifying object members
//    myCar.brand = "Toyota";
//    myCar.year = 2022;

//    // Calling a member function
//    myCar.displayInfo();

//    return 0;
// }

// // '''''''''''''''''''''''''Constants Objects and Member Functions'''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// class Circle {
//    private:
//       const double pi = 3.14;
//       double r;

//    public:
//       // Constructor
//       Circle(double radius) : r(radius) {};

//       // Member function to calculate area of circle
//       double Area() const{
//          return pi * r * r;
//       }

//       void fun() {
//          cout << "This is a method inside Circle" << endl;
//       }

// };
// int main(int argc, char const *argv[])
// {
//    // Constant Object Creation
//    const Circle c1(10);

//    double area = c1.Area(); // Calling a constant member function
//    cout << "Area of Circle of Radius 10 is " << area << endl;
//    // c1.fun(); // error: passing 'const Circle' as 'this' argument discards qualifiers [-fpermissive]

//    Circle c2(20);
//    double area2 = c2.Area(); // Calling a constant member function
//    cout << "Area of Circle of Radius 20 is " << area2 << endl;
//    c2.fun();
//    return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''All Types of Objects''''''''''''''''''''''''''''''''''''''''''''''''''
// // '''''''''''''''''''''''''''''''''''1.Simple Object'''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;
// class MyClass{
//    public:
//       int data = 10;
// };
// MyClass obj1;
// int main(int argc, char const *argv[])
// {
//    cout << "Data Value: " << obj1.data << endl;
//    return 0;
// }

// //'''''''''''''''''''''''''''''''''''''''''2.Object with Constructors'''''''''''''''''''''''''''''''''''
// /*Objects created using a constructors to initialize data member*/
// #include <iostream>
// using namespace std;
// class Rectangle
// {
// private:
//    int length, width;

// public:
//    Rectangle(int l, int w) : length(l), width(w){};
// };

// int main(int argc, char const *argv[])
// {
//    // Create a Rectangle's Object with Constructor- Rectangle_1
//    Rectangle Rectangle_1(10, 5);

//    return 0;
// }

// // '''''''''''''''''''''''''''''''''''''3.Objects with Destructor''''''''''''''''''''''''''''''''''''''''
// /*Objects with constructors and destructors for resourse management*/
// #include <iostream>
// #include <string>
// using namespace std;

// class FileHandler
// {
// private:
//    string File_Name;

// public:
//    // Constructor for resourse allocation
//    FileHandler(const char *filename)
//    {
//       this->File_Name = filename;
//    }

//    // Member function before destructor
//    void displayInfo_1()
//    {
//       cout << "File_Name: " << File_Name << endl;
//    }

//    // Destructor for resourse allocation
//    ~FileHandler()
//    {
//    }

//    // Member function after destructor
//    void displayInfo_2()
//    {
//       cout << "File_Name: " << File_Name << endl;
//    }
// };
// int main()
// {
//    // Object with constructor and destructor
//    FileHandler file_1("example.txt");
//    file_1.displayInfo_1();
//    file_1.displayInfo_2();
//    return 0;
// }

// ''''''''''''''''''''''''''''''''''''''''''''''''Constant Objects''''''''''''''''''''''''''''''''''
// // '''''''''''''1.Constants Integer''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//    const int num = 10;

//    // Trying to modify contant variables
//    // num = 15; // error: assignment of read-only variable 'num'
//    cout << num << endl;
//    return 0;
// }

// // '''''''''''''''''''''''''Static Member Objects''''''''''''''''''''''''''''''''''''''''
// /*Objects that are shared among all instances of a class.*/
// #include<iostream>
// using namespace std;

// class MyClass {
//    public:
//       static int integerValue;
   
// };

// int MyClass::integerValue = 10;
// MyClass obj1, obj2; // Objects sharing a static member
// int main(int argc, char const *argv[])
// {
//    cout << "MyClass::integerValue" << MyClass::integerValue << endl;
//    cout << obj1.integerValue << endl; // Objects sharing a static member
//    cout << obj2.integerValue << endl; // Objects sharing a static member
//    return 0;
// }

// // ''''''''''''''''''''''Objects with a static member function'''''''''''''''''''''
// /*Objects calling a static member function shared among all instances*/
// #include<iostream>
// using namespace std;
// class MathUtility {
//    public:
//       static int add(int x, int y) {
//          return x + y; 
//       }
// };

// int sum = MathUtility::add(10, 15); // Object-independent static member function call
// MathUtility obj1, obj2;
// int main(int argc, char const *argv[])
// {

//    return 0;
// }

// // ''''''''''''''''''''''''''''''''''''''''Objects with friend functions'''''''''''''''''''''''''''''''''
// /*Objects declaring friend functions with access to private members.*/
// #include<iostream>
// using namespace std;
// class MyClass {
// private:
//     int privateVar;
// public:
//     friend void friendFunction(MyClass obj);
// };

// void friendFunction(MyClass obj) {
//     cout << "Accessing private variable: " << obj.privateVar << endl;
// }
// int main(int argc, char const *argv[])
// {
//    MyClass obj1;
//    friendFunction(obj1);
//    return 0;
// }

