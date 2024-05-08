// // ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// // ''''''''''''''''''''''''''''''''''''''''''''''''''''1.Structure''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// /*
// 1.A structure is a composite data type that groups together variables of different data types under a single name.
// 2.Each member of a structure can have its own data type and a name.
// 3.The members of a structure are stored in memory in a contiguous manner.
// 4.You can access structure members using the dot (.) operator.*/
// #include<iostream>
// #include<string>
// using namespace std;

// struct Person
// {
//     string name;
//     int age;
// };

// // Initializing Structure
// /*Structures can be initialized during declaration:*/


// int main(int argc, char const *argv[])
// {
//     Person person_1;
//     person_1.name = "Alice";
//     person_1.age = 23;

//     cout << "Name: " << person_1.name << endl;
//     cout << "Age: " << person_1.age << endl;

//     // Initializing Structure
//     /*Structures can be initialized during declaration*/
//     Person personr_2 = {"Bob", 25};

//     return 0;
// }

// // ''''''''''''''''''''''''''Union''''''''''''''''''''''''''''''''
// /*
// 1.A union is similar to a structure but with a key difference: only one of its members can have a value at a given time.
// 2.Unions are used to save memory when you want to store data of different types but only need one of them at any given time.
// 3.The size of a union is equal to the size of its largest member.
// 4.You can access union members in the same way as structure members, using the dot (.) operator.*/

// #include<iostream>
// #include<string>
// using namespace std; 

// union Person
// {
//     int intValue;
//     double doubleValue;
// };

// int main(int argc, char const *argv[])
// {   
//     Person person1;
//     person1.intValue = 10;
//     person1.doubleValue = 25.67;
//     cout << "int Value: " << person1.intValue << endl; // output: int Value: 515396076
//     cout << "double Value: " << person1.doubleValue << endl; // output: double Value: 25.67

//     Person person2;
//     person2.intValue = 50;
//     cout << "int Value: " << person2.intValue << endl; //output: int Value: 50

//     person2.doubleValue = 55.67;
//     cout << "double Value: " << person2.doubleValue << endl; //output: double Value: 55.67
    
//     return 0;
// }

// // ''''''''''''''''''''''''''''
// #include<iostream>
// #include<string>
// using namespace std;
// struct Person
// {   
//     string name;
//     int age;
//     double height;
// };

// // Function with Structure
// void printPerson(Person& person) {
//     cout << "Name: " << person.name << endl;
//     cout << "Age: " << person.age << endl;
// }

// int main(int argc, char const *argv[])
// {
//     // Array of Structures
//     Person person[3]; // an array of 3 Person Structures
//     person[0] = {"Charlie Brown", 22, 5.7};
//     person[1] = {"Eve William", 23, 5.8};
//     person[2] = {"David Lie", 24, 5.9};

//     cout << person[0].name << endl;
//     printPerson(person[0]);
//     return 0;
// }

// // ''''''''''''''''''''''''''''Nested Structure''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// struct Address {
//     std::string City;
//     std::string Street;
// };

// // Nested Structure
// struct Person {
//     std::string name;
//     int age;
//     Address address;
// };

// int main(int argc, char const *argv[])
// {
//     Person John;
//     John.name = "John Deo";
//     John.age = 24;
//     John.address.City = "Madhubani";
//     John.address.Street = "Andhramath";

//     cout << "name: " << John.name << endl;
//     cout << "age: " << John.age << endl;
//     cout << "City: " << John.address.City << endl;
//     cout << "Street: " << John.address.Street << endl;
//     return 0;
// }

// // ''''''''''''''''''''''''Using typedef''''''''''''''''''''''''''''''''''''''
// // ''''''''''''''''1.Basic Structure Using typedef'''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// typedef struct {
//     std::string name;
//     int age;
// }Person;

// int main(int argc, char const *argv[])
// {
//     Person person_1;
//     person_1.name = "John";
//     person_1.age = 24;

//     return 0;
// }

// // '''''''''''''''2.Structure with typedef and nested structure''''''''''''''''''''''''' 
// #include<iostream>
// using namespace std;
// // Basic Structure
// typedef struct {
//     std::string street;
//     std::string city;
// }Address;

// typedef struct Person{
//     std::string name;
//     int age;
//     Address address;
// }Person;

// int main(int argc, char const *argv[])
// {
//     Person p1;
//     p1.name = "ALice";
//     p1.age = 24;
//     p1.address.city = "Madhubani";
//     p1.address.street = "Andhramath";
    
//     return 0;
// }

// // ''''''''''''''''''''''''''Structure with Constructor''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// struct Person {
//     std::string name;
//     int age;
//     // Constructor to initialize the member
//     Person(std::string NAME, int AGE): name(NAME) , age(AGE) {
//         // Aditional initialization code can go here
//     };
// };

// int main(int argc, char const *argv[])
// {
//     // Create an instance of Person Structure and initialize it using the constructor
//     Person p1("Ishan", 24);
//     // Person p2; // error: no default constructor exists for class "Person"
//     Person p2("Raghav", 25);
//     p2.name = "Raghav";
//     p2.age = 25;
//     return 0;
// }

// // '''''''''''''''''''''''''''''''''Structure with Member functions''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// struct Circle
// {
//     double radius;
//     double calcute_area() {
//         return 3.14159 * radius * radius;
//     };

//     void display_area() {
//         cout << "Area of Circle = " << calcute_area() << endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Circle c1;
//     c1.radius = 10;
//     double area = c1.calcute_area();

//     cout << "Area: " << area << endl;
//     c1.display_area();
    
//     return 0;
// }

// // ''''''''''''''''''''''
// #include <iostream>

// // Define a structure
// struct Rectangle {
//     int width;
//     int height;

//     // Member function to calculate the area
//     int calculateArea() {
//         return width * height;
//     }

//     // Member function to display the dimensions
//     void displayDimensions() {
//         std::cout << "Width: " << width << ", Height: " << height << std::endl;
//     }
// };

// int main() {
//     // Create an instance of the Rectangle structure
//     Rectangle rect;
//     rect.width = 5;
//     rect.height = 10;

//     // Call member functions
//     int area = rect.calculateArea();
//     std::cout << "Area: " << area << std::endl;

//     rect.displayDimensions();

//     return 0;
// }

// // '''''''''''''''''''''''Using Class'''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// class Rectangle {
//     private: // by default, class instance variables be private
//         int length;
//         int width;
    
//     // Constructor
//     public:
//         Rectangle(int len, int wid) : length(len), width(wid) {};
    
//     // Member functions to calculate the area
//     int area() {
//         return 2 * length * width;
//     }

//     // Member functions to display Info 
//     void displayInfo() {
//         cout << "Length: " << length << " and Width: " << width << endl;
//         cout << "Area: " << area() << endl;
//     } 

// };
// int main(int argc, char const *argv[])
// {
//     // Create an instance of the Rectangle Class
//     Rectangle R1 (10, 5);

//     // Call the member functions
//     int area = R1.area();
//     cout << "Area (in main method): " << area << endl;
//     R1.displayInfo();

//     return 0;
// }

// // ''''''''''''''''''''''''''''Initialization of Structure with Default Values''''''''''''''''''''''''''''''
// // ''''''''''1.Using Constructor
// #include<iostream>
// using namespace std;

// // Define a structure with a constructor with default values
// struct Point
// {
//     int x;
//     int y;

//     // Constructor with Default Values
//     Point(int initial_X = 15, int initial_Y = 10) : x(initial_X), y(initial_Y) {};
// };

// int main(int argc, char const *argv[])
// {   
//     // Create instance of Point Structure with Default Values
//     Point p1; // Use Default Values (15, 10)
//     cout << "initial X Coordinate: " << p1.x << " initial Y Coordinate: " << p1.y << endl;

//     Point p2(25, 15); 
//     cout << "New Coordinate: x = " << p2.x << " y = " << p2.y << endl;
    
//     return 0;
// }

// // '''''''''''''''''''''''''2.Using Default Values in Structure Declaration'''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// // Define Structure with default values
// struct Point {
//     int x = 15;
//     int y = 10;
//     int z;
//     int w;
// };
// int main(int argc, char const *argv[])
// {
//     // Create instance of the Point Structure with default values
//     Point p1;
//     cout << "p1 - x: " << p1.x << " p1 - y: " << p1.y << endl;
//     // Point p2(25, 15); // error message
//     Point p2 = {25, 15};
//     cout << "p2 - x: " << p2.x << " p2 - y: " << p2.y << endl;
//     return 0;
// }

// '''''''''''''''''''''''''''''''''Using Structure'''''''''''''''''''''''''''''''''''

// // '''''''''''''1.Pssing by Value''''''''''''''''''
// #include<iostream>
// using namespace std;

// struct Person{
//     std::string name;
//     int age;
// };

// void fun(Person p1) {
//     cout << "Name: " << p1.name << endl;
//     cout << "Age: " << p1.age << endl;
// }
// int main(int argc, char const *argv[])
// {
//     Person p;
//     p.name = "Ishan";
//     p.age = 25;
    
//     fun(p);
//     return 0;
// }

// // '''''''''''''''
// #include<iostream>
// using namespace std;

// struct Person {
//     std::string name;
//     int age;
// };

// void modify_Strcut_fun(Person p) {
//     p.name = "Ishan";
//     p.age = 25;
// };

// int main(int argc, char const *argv[])
// {
//     Person p;
//     p.name = "Ishan Kishan";
//     p.age = 22;

//     cout << "Name: " << p.name << endl;    
//     cout << "Age: " << p.age << endl;

//     modify_Strcut_fun(p);

//     cout << "After Calling(No Change), Name: " << p.name << endl;    
//     cout << "After Calling(No Change), Age: " << p.age << endl;    
//     return 0;
// }

// // ''''''''''''''''''''2.Passing by Reference'''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// struct Person {
//     std::string name;
//     int age;
// };

// void modify_Struct_Fun(Person& p) {
//     p.name = "Charlie";
//     p.age = 25;
// };

// int main(int argc, char const *argv[])
// {
//     Person p;
//     p.name = "Alice";
//     p.age = 22;

//     cout << "Name: " << p.name << endl;
//     cout << "Age: " << p.age << endl;  

//     modify_Struct_Fun(p);
//     cout <<"After Modifying Name: " << p.name << endl;    
//     cout <<"After Modifying, Age: " << p.age << endl;
//     return 0;
// }

// // ''''''''''''''''''''''''''''''3.Passing by Pointer to Struct''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// struct Person {
//     std::string name;
//     int age;
// };

// void modify_Struct_By_Passing_Pointer(Person* p) {
//     p->name =  "Charlie";
//     p->age = 25;
// }
// int main(int argc, char const *argv[])
// {
//     Person p;
//     p.name = "Alice";
//     p.age = 22;

//     cout << "Name: " << p.name << endl;
//     cout << "Age: " << p.age << endl;

//     modify_Struct_By_Passing_Pointer(&p);
//     cout << "After Modifying, Name: " << p.name << endl;
//     cout << "After Modifying, Age: " << p.age << endl; 
   
//     return 0;
// }

// ''''''''''''''''''''''
