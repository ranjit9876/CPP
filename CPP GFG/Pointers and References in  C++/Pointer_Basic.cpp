// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // 1.Declaring Pointer
//     /*int* indicates that ptr is a pointer to an integer.*/
//     int* ptr; // Declare a pointer to integer

//     // 2.Initializing Pointer
//     int x = 10;
//     int*ptr2 = &x; // Initialize ptr2 with the address of x

//     int* intPtr;          // Pointer to an integer
//     char* charPtr;        // Pointer to a character
//     double* doublePtr;    // Pointer to a double


//     // 3. Pointer Arithmetic:
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int* ptr3 = arr; //Point to the first element of the array
//     ptr3++; // Move to the second element (address of second element)

//     // 4. Dynamic Memory Allocation
//     int* dynamicPtr = new int[10]; // Allocate an array of 1000 integers

//     // 6. Pointer to Pointer (Double Pointer)
//     int y = 15;
//     int* ptr5 = &y; 
//     int** ptr6 = &ptr5; // ptr7 is a pointer to pointer to an integer

//     // 7. Pointer in Structure and Classes

//     struct Node {
//         int data;
//         Node* next; 
//     };

//     // 8. Pointer Casting
//     double* dPtr = new double(123.45);
//     int* iPtr = reinterpret_cast<int*>(dPtr); // Cast double pointer to int pointer

//     // 9. Deleting Dynamic Memory
//     int* dynamic_Ptr = new int;
//     delete dynamic_Ptr; // Deallocate the memory

//     return 0;
// }

// 

// // '''''''''''''''''''''''''''''''''''''''''Accessing Variable Addresses''''''''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 42;
//     char c = 'A';
//     double d = 3.14159;

//     // Accessing variable addresses
//     int* addr_a = &a;
//     char* addr_c = &c;
//     double* addr_d = &d;

//     // Printing variable addresses
//     cout << "Address of 'a': " << addr_a << endl;
//     cout << "Address of 'c': " << (void*)addr_c << endl;  // Cast to void* for char
//     cout << "Address of 'd': " << addr_d << endl;

//     return 0;
// }

// // '''''''''''''''''''''''''''Pointer Arithmetics''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // Define an array of integers
//     int arr[5] = {10, 20, 30, 40, 50};

//     // Create a Pointer to the first element of the array
//     int* ptr = arr;

//     // Access the elements using the pointer arithmetic 
//     cout <<"Using Pointer arithmetic" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Value of Element " << i << ": " << *(ptr + i) << endl;
//     }

//     // Increment the pointer
//     ptr++; // Move to the next element in the array

//     // decrement the pointer
//     ptr--; // Move back to the previous element in the array

//     // Arithmetic operations on pointers
//     int* ptr2 = arr + 2; // Pointer points to the third element in the array

//     // Calculate the difference between two pointers
//     int difference = ptr2 - ptr; // Calculate the index difference 
//     cout << "Pointer difference: " << difference << endl;

//    // Pointer comparison
//     if (ptr2 > ptr) {
//         cout << "ptr2 is greater than ptr." << std::endl;
//     } else if (ptr2 < ptr) {
//         std::cout << "ptr is greater than ptr2." << endl;
//     } else {
//         cout << "ptr and ptr2 are equal." << endl;
//     }

//     // Use Pointer to modify the array elements
//     *ptr2 = 80; // Change the value of third element of the array to 80

//     // Print the modified array
//     cout <<"Modified array" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Element " << i << ": " << arr[i]<< endl;
//     }
     

//     return 0;
// }

// // ''''''''''''''''''''
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[]) 
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int* ptr = arr; // Pointer to the first element of the array

//     // Basic Pointer Arithmetics
//     cout <<"Address of the first element of the array:" << ptr << endl;
//     cout <<"Element at ptr (address of first element): " << *ptr << endl;

//     ptr++; // Move the pointer to next element(address of next) of the array
//     cout <<"Address of the second element of the array: " << ptr << endl;
//     cout <<"Element at ptr (address of second element): " << *ptr << endl;

//     // Arithmetic operations
//     int index = ptr - arr; // Calculate index difference 
//     cout <<"index difference: " << index << endl;

//     // Array indexing using pointer
//     int thirdElement = *(arr + 2);
//     cout <<"Third element of the array using pointer arithmetics by *(arr + 2) = " << thirdElement << endl;

//     // Pointer Comparison 
//     int* endPtr = arr + 10; //Pointer to one past the end of the array
//     cout << "endPtr = " << *endPtr << endl;
//     if (ptr == endPtr) {
    
//         cout<<"Pointer is at the end of the array" << endl;
//         cout << "endPtr: " << endPtr << endl;
//     }

//     // // Pointer dereferencing
//     // *ptr = 100; // Assingning a new value at current element (at current position)
//     // cout << "Updated element at ptr: " << *ptr << endl;

//     // Print al elements
//     cout<<"Updated element of arr:" << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "Element at position " << i << ": " << *ptr << endl;
//     }

//     // pointer to pointer (Double Pointer)
//     int** doublePtr = &ptr;
//     cout << "Value at doublePtr: " << **doublePtr << endl;
    

//     return 0;
// }

// // ''''''''''''''''''
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int* ptr = arr; // Pointer to the first element of the array

//     // Basic pointer arithmetic
//     cout << "Element at ptr: " << *ptr << endl;
//     ptr++; // Move the pointer to the next element
//     cout << "Element at ptr after increment: " << *ptr << endl;

//     // Arithmetic operations
//     int index = ptr - arr; // Calculate the index difference
//     cout << "Index difference: " << index << endl;

//     // Array indexing using pointers
//     int thirdElement = *(arr + 2);
//     cout << "Third element using pointer arithmetic: " << thirdElement << endl;

//     // Pointer comparison
//     int* endPtr = arr + 5; // Pointer to one past the end of the array
//     if (ptr == endPtr) {
//         cout << "Pointer is at the end of the array." << endl;
//     }

//     // Pointer dereferencing
//     *ptr = 10; // Assign a new value to the current element
//     cout << "Updated element at ptr: " << *ptr << endl;

//     // print the all elements of the array
//     cout << "Elements of updated arr:" << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cout <<"Element at position " << i << ": " << arr[i] << endl;
//     }
    
//     // Pointer to pointer
//     int** doublePtr = &ptr;
//     cout << "Value at doublePtr: " << **doublePtr << endl;

//     return 0;
// }

// // ''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[] = {1,2,3,4,5};
//     int* ptr = arr; // Point to the beginning of the array

//     cout << "Original Array: "<< endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << *ptr << " ";
//         ptr++;
//     }
//     cout<< endl;

//     ptr = arr; // Reset the pointer to the beginning of the array

//     ptr  += 2; // Move 2 positions ahead
//     *ptr = 10; // Change the value at this position (3rd position of the array)

//     cout <<"Modified Array: " << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"Element at position "<< i << ": " << *ptr << endl;
//         ptr++;
//     }

//     ptr = arr; // Reset the pointer to the beginning of the array
//     int lenght = ptr[4] - ptr[0] + 1; 
//     cout<<lenght<<endl;

//     // Pointer Comparison
//     int* ptr1 = arr;
//     int* ptr2 = arr + 3;

//     if (ptr1 < ptr2)
//     {
//         cout  << "ptr1 is less than ptr2"<<endl;
//     }
//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     cout << "The Address of the first element of the arr: " << arr << endl;
//     cout << "The Address of the second element of the arr: " << arr + 1 << endl;
//     cout << "The Address of the third element of the arr: " << arr + 2 << endl;

//     int* ptr = arr; // Pointer to the first element of the array

//     // Basic pointer arithmetic
//     cout << "Basic Pointer Arithmetic:" << endl;
//     cout << "Value at ptr: " << *ptr << endl;
//     cout << "Value at ptr + 1: " << *(ptr + 1)<< endl;
//     cout << "Value at ptr + 2: " << *(ptr + 2) << endl;

//     // Incrementing and decrementing pointers
//     ptr++; // Move to the next element
//     cout << "\nIncrementing Pointer:" << endl;
//     cout << "Value at ptr: " << *ptr << endl;

//     *ptr = 20;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<arr[i] << endl;
//     }
//     *ptr = 2; // Reset the value at second position

//     ptr--; // Move back to the previous element
//     cout << "\nDecrementing Pointer:" << endl;
//     cout << "Value at ptr: " << *ptr << endl;

//     // Pointer subtraction
//     int* ptr2 = arr + 3; // Pointer to the fourth element
//     cout << "\nPointer Subtraction:" << endl;
//     cout << "ptr2 - ptr: " << (ptr2 - ptr) << endl;

//     // Pointer comparison
//     cout << "\nPointer Comparison:" << endl;
//     if (ptr == ptr2) {
//         cout << "ptr and ptr2 point to the same location." << endl;
//     } else {
//         cout << "ptr and ptr2 point to different locations." << endl;
//     }

//     // Array indexing using pointers
//     cout << "\nArray Indexing using Pointers:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << "Value at ptr + " << i << ": " << *(ptr + i) << endl;
//     }

//     // Pointer arithmetic with arrays
//     cout << "\nPointer Arithmetic with Arrays:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << "Element " << i << ": " << *(arr + i) << endl;
//     }

//     // Pointer arithmetic in a loop
//     cout << "\nPointer Arithmetic in a Loop:" << endl;
//     int *end = arr + 5; // Points one past the end of the array
//     cout << "*end = " << *end << endl;
//     for (int *p = arr; p < end; p++) {
//         cout << *p << ", ";
//     }
//     cout <<endl;

//     cout<<"*ptr = " << *ptr << endl; //out[ut: *ptr = 1




//     return 0;
// }

// // ''''''''''''''''''''
// #include<iostream>
// #include<vector>

// using namespace std;
// int main(int argc, char const *argv[])
// {
//     // Create a vector of integers
//     vector<int> vec = {1, 2, 3, 4, 5};

//     // Create a pointers to the beginning and end of the vector
//     int* begin_Ptr = vec.data();
//     int* end_Ptr = begin_Ptr + vec.size();
//     cout<<"begin_Ptr: " << *begin_Ptr << ", end_Ptr: " << *end_Ptr << endl; // begin_Ptr: 1, end_Ptr: 6515052
    
//     // Print the Original Vector
//     cout<<"Original Vector:" << endl;
//     for (int* ptr = begin_Ptr; ptr < end_Ptr; ++ptr)
//     {
//         cout << *ptr << ", ";       
//     }
//     cout << endl;
//     cout<<"begin_Ptr: " << *begin_Ptr << ", end_Ptr: " << *end_Ptr << endl;// begin_Ptr: 1, end_Ptr: 6515052

//     // Perform the advance pointer arithmetic operation
//     int* mid_Ptr = begin_Ptr + vec.size()/2;
//     cout<<"*mid_Ptr == Middle Element = " << *mid_Ptr << endl;

//     // // Find the maximum element using the pointer arithmetic operation
//     // int* max_Ptr = begin_Ptr;
//     // for (int* ptr = begin_Ptr; ptr < end_Ptr; ++ptr)
//     // {
//     //     if (*ptr > *max_Ptr)
//     //     {
//     //         *max_Ptr = *ptr;
//     //     }
        
//     // }
//     // cout <<"Maximum Element: " << *max_Ptr << endl;

//     // Perform reverse traversal of the vector
//     cout << "Reverse Vector: ";
//     for (int* ptr = end_Ptr - 1; ptr >= begin_Ptr; --ptr) {
//         cout << *ptr << " ";
//     }
//     cout << endl;

//     // Using pointer difference to calculate size
//     int vec_size = end_Ptr - begin_Ptr;
//     std::cout << "Vector Size: " << vec_size << std::endl;

//     return 0;
// }

// // '''''''''''''''''''''''''''
// #include<iostream>
// #include<vector>

// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n = 5;
//     vector<int> vec = {1, 2, 3, 4,5};
//     int* ptr = &vec[0]; // pointer to the first element of the vector
    
//      // Basic operations
//     cout << "Original Vector: ";
//     for (int i = 0; i < n; i++) {
//         cout << *(ptr + i) << " "; // Access elements using pointer arithmetic
//     }
//     cout << endl;

//     // Increment pointers with steps
//     int step = 2;
//     int* incremented_ptr = ptr;
//     while (incremented_ptr < ptr + n)
//     {
//         cout << *incremented_ptr << endl;
//         incremented_ptr += step; // Increment the pointer with steps size
//     }

//     int m = 3;
//     int p = 3;
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     int* matrix_ptr = &arr[0][0]; // Pointer to the first element of the 2D array

//     cout <<"2D Array Element: " << endl;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < p; j++)
//         {
//             cout << *(matrix_ptr + i * p + j) << ", "; // Access the 2D element using pointers arithmetics
//         }
//         cout << endl;
        
//     }


//     return 0;
// }
// // '''''''''''''''''''''''''''
// #include<iostream>
// #include<vector>

// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n = 5;
//     vector<int> vec = {1, 2, 3, 4,5};
//     int* ptr = &vec[0]; // pointer to the first element of the vector
    
//      // Basic operations
//     cout << "Original Vector: ";
//     for (int i = 0; i < n; i++) {
//         cout << *(ptr + i) << " "; // Access elements using pointer arithmetic
//     }
//     cout << endl;

//     // Increment pointers with steps
//     int step = 2;
//     int* incremented_ptr = ptr;
//     while (incremented_ptr < ptr + n)
//     {
//         cout << *incremented_ptr << endl;
//         incremented_ptr += step; // Increment the pointer with steps size
//     }

//     int m = 3;
//     int p = 3;
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     int* matrix_ptr = &arr[0][0]; // Pointer to the first element of the 2D array

//     cout <<"2D Array Element: " << endl;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < p; j++)
//         {
//             cout << *(matrix_ptr + i * p + j) << ", "; // Access the 2D element using pointers arithmetics
//         }
//         cout << endl;
        
//     }

//     return 0;
// }

// // ''''''''''''''''''''''''
// #include<iostream>
// #include<vector>

// using namespace std;
// int main(int argc, char const *argv[])
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     vector<int>::iterator ptr = vec.begin();

//     cout<<"Original Vector"<<endl;
//     for (; ptr != vec.end(); ++ptr)
//     {
//         cout<<*ptr<<", ";
//     }
//     cout<<endl;

//     // Pointer arithmetics with iterators
//     ptr = vec.begin() + 1; // Move the pointer one position forward
//     cout<<"After ptr = vec.begin() + 1, *ptr = " << *ptr <<endl;

//     ptr = vec.end() - 1;    // Move the iterator to the last element
//     cout << "After ptr = vec.end() - 1: " << *ptr << endl;

//     ptr -= 2;// Move the iterator two positions backward
//     cout << "After ptr -= 2: " << *ptr << endl;

//     int offset = 2;
//     ptr = vec.begin() + offset; // Move the iterator to a specific offset
//     cout << "After ptr = vec.begin() + 2: " << *ptr << endl;

//     // Pointer Comparison
//     vector<int>::iterator ptr2 = vec.begin() + 2;
//     if (ptr == ptr2)
//     {
//         cout << "Iterator ptr and ptr2 are equal" << endl;
//     } else{
//         cout<<"Iterator ptr and ptr2 are not equal" << endl;
//     }
    
//     return 0;
// }

// // '''''''''''''''''''''''''''Pointer Arithmetic with string''''''''''''''''''''''''''''''''''''''
// #include<iostream>
// #include<cstring>

// using namespace std;
// int main(int argc, char const *argv[])
// {
    
//     const char* str = "0123456789"; // A C-Style string representation 
//     cout <<"Original String, str: " << str << endl;

//     // Pointer arithmetic with string str
//     const char* ptr = str; // Initialize a pointer to the beginning of the string

//     int len = strlen(str); 
//     cout << *ptr << endl; // output: P
//     cout << *(ptr + 1) << endl; // output: o

//     cout <<"Character in reverse order:" << str << endl;
//     for (int i = len - 1; i >= 0; i--)
//     {
//         cout << *(ptr + i) << ""; 
//     }
//     cout << endl;

//     // Find a specific character
//     char target = '5';
//     const char* found = nullptr;
//     while (*ptr != '\0')
//     {
//         if (* ptr == target)
//         {
//             found = ptr;
//             break;
//         }
//         ptr++;
//     }

//     if (found != nullptr)
//     {
//         cout <<"Found target " << target << " at position " << (found - str) << endl;
//     } else {
//         cout << "'" << target << "' not found in the string." << endl;
//     }
  
//     return 0;
// }

// // '''''''''''''''''''''''''''''''''''''''''Passing Pointer to the Function'''''''''''''''''''''''''''''''''

// // 1. Passing a Pointer to Modify a Variable
// #include<iostream>
// using namespace std;
// void ModifyFun(int* num) {
//     int temp = *num;
//     (*num)++; // increment the original value
// }

// int main(int argc, char const *argv[])
// {
//     int num = 10;
//     cout << "Original Value: " << num << endl;
//     ModifyFun(&num);
//     cout << "New Value: " << num << endl;
//     int* ptr = &num;
//     ModifyFun(ptr);
//     cout << "New Value: " << num << endl;

//     return 0;
// }

// // ''''''''''''2.Passing an Array to the Function''''''''''''''
// #include<iostream>
// using namespace std;

// void modifyArray(int* arr) {
//     arr[2] += 15;
// }
// int calculateSum(int* arr, int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main(int argc, char const *argv[])
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     cout << "arr[2]: " << arr[2] << endl;
//     int* ptrArr = arr;
//     modifyArray(ptrArr);
//     cout<<"After modification, arr[2]: " << arr[2] << endl;
//     modifyArray(arr);
//     cout<<"After modification, arr[2]: " << arr[2] << endl;

//     int arr2[] = {1,2,3,4,5,6,7,8,9,10};
//     int size = sizeof(arr2) / sizeof(arr2[0]);
//     int sum = calculateSum(arr2, size);
//     cout << "Sum of Array: " << sum << endl;
//     return 0;
// }

// // '''''''''''''''''3. Swapping Two Numbers Using Pointers:'''''''''''''''''
// #include <iostream>

// // Function to swap two integers using pointers
// void swap(int* a, int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x = 5, y = 10;
//     std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

//     swap(&x, &y); // Pass the addresses of x and y

//     std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;
//     return 0;
// }

// // '''''''''''''''''''''
// #include <iostream>

// // Function to calculate the sum of an integer array using a pointer
// int calculateSum(int* arr, int size) { // passing the memory address of the first element of the array
//     int sum = 0;
//     for (int i = 0; i < size; ++i) {
//         sum += *(arr + i); // Access array elements using pointer arithmetic
//     }
//     return sum;
// }

// int main() {
//     int numbers[] = {1, 2, 3, 4, 5};
//     int sum = calculateSum(numbers, 5); // Pass the array as a pointer

//     std::cout << "Sum of the array: " << sum << std::endl;
//     return 0;
// }

// // ''''''''''''''''''''''''''''''Passing a pointer to structure to function''''''''''''''''''''''''''''
// #include<iostream>
// // #include<string>
// using namespace std;

// struct Person {
//     string name = "Charlie";
//     int age = 25;
// };

// // Function to modify a Person structure using a pointer
// void modifyPerson(Person* person) {
//     person->name = "David";
//     person->age = 30;
// }
// int main(int argc, char const *argv[])
// {
//     Person person_1 ;
//     cout << "person_1.name: "<< person_1.name<< endl;
//     cout << "person_1.age: "<< person_1.age<< endl;

//     person_1.name = "John";
//     person_1.age = 22;
//     cout << "After Modification by put the value on  person_1.name and person_1.age: " << endl;
//     cout << "person_1.name: "<< person_1.name<< endl;
//     cout << "person_1.age: "<< person_1.age<< endl;

//     modifyPerson(&person_1); // pass a pointer to structure to function
//     cout << "After Modification by Pointer to Structure to function: " << endl;
//     cout << "person_1.name: "<< person_1.name<< endl;
//     cout << "person_1.age: "<< person_1.age<< endl;

//     return 0;
// }

// // ''''''''''''''''''''
// #include <iostream>
// #include <string>
// using namespace std;

// // Define a structure for Student
// struct Student {
//     string name;
//     int rollNumber;
//     float GPA;
// };

// // Function to add a new student to the list
// void addStudent(Student* studentList[], int& numStudents) {
//     if (numStudents < 10) {  // Assuming a maximum of 10 students
//         Student* newStudent = new Student;
//         cout << "Enter student name: ";
//         cin >> newStudent->name;
//         cout << "Enter roll number: ";
//         cin >> newStudent->rollNumber;
//         cout << "Enter GPA: ";
//         cin >> newStudent->GPA;

//         studentList[numStudents++] = newStudent;
//         cout << "Student added successfully!" << endl;
//     } else {
//         cout << "Maximum number of students reached!" << endl;
//     }
// }

// // Function to display the list of students
// void displayStudents(Student* studentList[], int numStudents) {
//     cout << "\nList of Students:\n";
//     for (int i = 0; i < numStudents; ++i) {
//         cout << "Name: " << studentList[i]->name << "\n";
//         cout << "Roll Number: " << studentList[i]->rollNumber << "\n";
//         cout << "GPA: " << studentList[i]->GPA << "\n\n";
//     }
// }

// // Function to free memory allocated for students
// void deleteStudents(Student* studentList[], int numStudents) {
//     for (int i = 0; i < numStudents; ++i) {
//         delete studentList[i];
//     }
// }

// int main() {
//     Student* studentList[10]; // Array of pointers to Student structures
//     int numStudents = 0;

//     while (true) {
//         cout << "\nMenu:\n";
//         cout << "1. Add Student\n";
//         cout << "2. Display Students\n";
//         cout << "3. Quit\n";
//         cout << "Enter your choice: ";
//         int choice;
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 addStudent(studentList, numStudents);
//                 break;
//             case 2:
//                 displayStudents(studentList, numStudents);
//                 break;
//             case 3:
//                 deleteStudents(studentList, numStudents);
//                 return 0;
//             default:
//                 cout << "Invalid choice. Try again.\n";
//         }
//     }

//     return 0;
// }

// // '''''''''''''''''''''''''''''''''
// #include<iostream>
// using namespace std;

// struct Student
// {
//     string name;
//     int rollNumber;
//     float GPA;

// };

// void addStudent(Student* studentList, int& numStudent) {
//     if (numStudent <= 10)
//     {
//         Student* newStudent = new Student();
//         cout<< "Enter Student name: " << endl;
//         cin >> newStudent->name;

//         cout <<"Enter Roll Number:" << endl;
//         cin >> newStudent->rollNumber;

//         cout << "Enter GPA:"<< endl;
//         cin >> newStudent->GPA;

//         studentList[numStudent++] = *newStudent;

//         cout<<"Student Added Successfully."<< endl;

//     } else {
//         cout << "Maximum number of students reached."<< endl;
//     }
  
// }
// int main(int argc, char const *argv[])
// {
//     Student studentList[10];
//     int numStudent = 0;
//     addStudent(studentList, numStudent);
    
//     return 0;
// }

// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
