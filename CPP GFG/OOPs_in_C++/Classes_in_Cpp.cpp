// // '''''''''''''''''''''''''''''''1.Simple Classes'''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// #include<string>
// using namespace std;

// class Person {
//     private:
//         std::string name;
//         int age;

//     public:
//         // Constructor
//         Person(const std::string& Name, int Age) : name(Name), age(Age) {}

//         // Member Function to set the name
//         void setName(const std::string& Name) {
//             name = Name;
//         }

//         // Member Function to set the age
//         void setAge(int Age) { age = Age; }

//         // Member Function to display the information
//         void display() {
//             cout << "Name: " << name << " Age: " << age << endl;
//         }
// };

// int main(int argc, char const *argv[])
// {
//     // Creating an instance of Person Class
//     Person person_1("John", 24);

//     // Display initialial information of object person_1
//     cout << "Initial Information of object person_1" << endl;
//     person_1.display();

//     // Modifying information using member functions
//     person_1.setName("Charles");
//     person_1.setAge(26);

//     // Display Updated information of object person_
//     cout << "Updated information of object person_1" << endl;
//     person_1.display();
//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// #include<string>
// using namespace std;

// class Person{
//     private:
//         string name;
//         int age;
//     public:
//         // Constructor
//         Person(string NAME, int AGE) : name(NAME), age(AGE) {}

//         // '''''''''''Getter Methods'''''''''''''''
//         string getName() {
//             return name;
//         }

//         int getAge() {
//             return age;
//         }
//         // Setter Methods
//         void setName(string NAME) {
//             name = NAME;
//         }

//         // Setter Method
//         void setAge(int newAge) {
//             if (newAge > 0)
//             {
//                 age = newAge;
//             } else {
//                 cout << "Age must be greater than 0" << endl;
//             }

//         }

//         // Member Function to display information
//         void display(){
//             cout << "Name: " << name << " and age: " << age << endl;
//         }
// };

// int main(int argc, char const *argv[])
// {
//     // Create an instance of Person Class
//     Person person_1("John", 22);

//     // Displaying the initial information
//     cout << "Initial Information for Person Class's instance or object person_1" << endl;
//     person_1.display();

//     // Modifying the information using setter functions
//     person_1.setName("Charlie");
//     person_1.setAge(26);

//     // Displaying the updated information
//     cout << "Updated information_1: " << endl;
//     person_1.display();

//     // Displaying the updated information using getter functions
//     cout << "Updated information_2: " << endl;
//     cout << "Name: " << person_1.getName()<< " and age: " << person_1.getAge() << endl;
//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''''''2.Abstract Class'''''''''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// #include<string>
// using namespace std;

// // Abstract Base Class
// class Shape {
//     public:
//         // Pure Virtual function- make the class Abstract
//         virtual double area() const = 0;

//         // Pure Virtual function for displaying the information
//         virtual void displayInfo() const = 0;

//         // Virtual Dectructor
//         virtual ~Shape() {
//             // Implementations of a virtual destructor(can be empty in this example).
//         }
// '''''''''or''''''''''
// // Virtual destructor
// virtual ~Shape() = default;

// };

// // Derived class - Concrete implementation of the Shape class
// class Circle : public Shape {
//     private:
//         double radius;

//     // Constructor
//     public:
//         Circle(double r) : radius(r) {}

//         // Implementation of a pure virtual function to calculate the area
//         double area() const override {
//             return 3.14 * radius * radius;
//         }

//         // Implementation of a pure virtual function to display the information
//         void displayInfo() const override {
//             cout << "The area of the the circle of radius " << radius << " is " << area() << endl;
//         }
// };

// // Another Derived Class - Concrete Implementation of the Shape class
// class Rectangle : public Shape {
//     private:
//         double length, width;
//     public:
//         // Constructor
//         Rectangle(double l, double w) : length(l), width(w) {}

//         // Implementation of Pure Virtual Function to Calculate area
//         double area() const override {
//             return length * width;
//         }

//         // Implementation of Pure Virtual Function to display Information
//         void displayInfo() const override {
//             cout << "Rectangle's Information" << endl;
//             cout << "Length: " << length << endl;
//             cout << "Width: " << width << endl;
//             cout << "area: " << area() << endl;
//         }

// };

// int main(int argc, char const *argv[])
// {
//     // Creating instance variable of Concrete Class
//     Circle circle_1(5.0);
//     Rectangle rectangle_1(4.0, 5.0);

//     // Using Polymorphism with pointers to abstract base class
//     Shape* shape_1 = &circle_1;
//     Shape* shape_2 = &rectangle_1;

//     // Displaying the information using abstract base class interface
//     shape_1->displayInfo();
//     shape_2->displayInfo();
//     return 0;
// }

//
