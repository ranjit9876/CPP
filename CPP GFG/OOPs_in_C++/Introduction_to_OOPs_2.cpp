// ''''''''''''''''''General Form of Class'''''''''''''''''''''''''''

/*[template-spec]
class [ms-decl-spec] [tag [: base-list ]]
{
   member-list
} [declarators];
[ class ] tag declarators;*/

// // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// template <typename T> 
// class MyClass : public BaseClass {
//     public:
//         // member declaration
//         T member_variable;

//         void member_function();

// } objcetDeclaration;

// // '''''''''''''''''''''''''''
// #include<iostream>
// // #include<string>
// using namespace std;

// // class definition
// class Car {
// public:
//     // Constructor
//     Car(string make, string model ) : make_(make), model_(model) {};

//     // Member function to display car information
//     void displayInfo() {
//         cout << "Make: " << make_ << "Model: " << model_ << endl;
//     } 

// private:
//     string make_;
//     string model_;
// };

// int main(int argc, char const *argv[])
// {
//     // Creating objects of class Car
//     Car car1("Toyota", "Camry");
//     Car car2("Ford", "Mustang");

//     // Accessing object methods
//     car1.displayInfo();
//     car2.displayInfo();
//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// /* Class declaration in header file (e.g MyClass.h) */
// class MyClass {
// public:
//     // Member functions and data members
//     static void someFunction();
// }MyClassObject;

// // class definition in source file (e.g MyClass.cpp)
// void MyClass::someFunction() {
//     // Implementation of the function
//     cout << "someFunction method call...." << endl;
// };

// int main(int argc, char const *argv[])
// {
//     MyClass::someFunction(); // call only static members
//     MyClassObject.someFunction(); // call both static and non-static members
//     return 0;
// }

// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
