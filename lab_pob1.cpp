#include <iostream>
#include <string>
using namespace std;

class Student
{
    int rollNo;
    string name;
    int marks1, marks2, marks3;

public:
    Student()
    {
        rollNo = 0;
        name = "";
        marks1 = marks2 = marks3 = 0;
    }

    Student(int r, string n, int m1, int m2, int m3)
    {
        rollNo = r;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    void display()
    {
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : "<< marks1 << " "<< marks2 << " "<< marks3 << endl;
    }

    void display(bool showGrade)
    {
        display();

        int total = marks1 + marks2 + marks3;
        float average = total / 3.0;

        char grade;

        if (average >= 90)
            grade = 'A';
        else if (average >= 75)
            grade = 'B';
        else if (average >= 60)
            grade = 'C';
        else if (average >= 40)
            grade = 'D';
        else
            grade = 'F';

        cout << "Total       : " << total << endl;
        cout << "Average     : " << average << endl;
        cout << "Grade       : " << grade << endl;
    }
};

int main()
{
    Student students[5] =
    {
        Student(101, "Anu", 90, 85, 88),
        Student(102, "Ravi", 76, 80, 74),
        Student(103, "Sita", 65, 70, 68),
        Student(104, "Kiran", 55, 60, 58),
        Student(105, "Meena", 35, 40, 38)
    };

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "-------------------" << endl;

        students[i].display(true);
    }

    return 0;
}
