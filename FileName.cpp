#include <iostream>
#include <string>
using namespace std;

// Structure for Book
struct Book
{
    string title;
    string author;
    float price;
};

// Structure for Employee
struct Employee 
{
    string name;
    int age;
    float salary;
};

// Structure for Student
struct Student 
{
    string name;
    string rollNumber;
    float marks1, marks2, marks3, totalMarks;
};

int main() 
{
    int choice; 

    do 
    {
        // Display menu
        cout << "\n*** Main Menu ***\n";
        cout << "1. Manage Book Details\n";
        cout << "2. Manage Employee Details\n";
        cout << "3. Manage Student Details\n";
        cout << "4. Exit Program\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 

        switch (choice)
        {
        case 1: {
            // Managing Book Details
            Book myBook;
            cout << "\nEnter Book Title: ";
            getline(cin, myBook.title);
            cout << "Enter Book Author: ";
            getline(cin, myBook.author);
            cout << "Enter Book Price: ";
            cin >> myBook.price;

            cout << "\nBook Details:\n";
            cout << "Title: " << myBook.title << "\nAuthor: " << myBook.author << "\nPrice: $" << myBook.price << endl;
            break;
        }
        case 2: 
        {
            // Managing Employee Details
            Employee emp;
            cout << "\nEnter Employee Name: ";
            getline(cin, emp.name);
            cout << "Enter Employee Age: ";
            cin >> emp.age;
            cout << "Enter Employee Salary: ";
            cin >> emp.salary;

            cout << "\nEmployee Details:\n";
            cout << "Name: " << emp.name << "\nAge: " << emp.age << "\nSalary: $" << emp.salary << endl;
            break;
        }
        case 3: 
        {
            // Managing Student Details
            Student stu;
            cout << "\nEnter Student Name: ";
            getline(cin, stu.name);
            cout << "Enter Roll Number: ";
            getline(cin, stu.rollNumber); 
            cout << "Enter Marks for Subject 1: ";
            cin >> stu.marks1;
            cout << "Enter Marks for Subject 2: ";
            cin >> stu.marks2;
            cout << "Enter Marks for Subject 3: ";
            cin >> stu.marks3;

            // Calculating total marks
            stu.totalMarks = stu.marks1 + stu.marks2 + stu.marks3;
            cout << "\nStudent Details:\n";
            cout << "Name: " << stu.name << "\nRoll Number: " << stu.rollNumber << "\nTotal Marks: " << stu.totalMarks << endl;
            break;
        }
        case 4:
            // Exit program
            cout << "\nExiting the program. Goodbye!\n";
            break;
        default:
            cout << "\nInvalid choice. Please try again.\n";
        }
    } while (choice != 4); 

    return 0;
}