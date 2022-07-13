#include <bits/stdc++.h>
using namespace std;
#include "const.cpp"

int main()
{
    Student s1(10, 100);
    s1.display();

    // Student *s3 = new Student;
    // s3->display();

    // Student s4(20);
    // s4.display();

    // Student *s5 = new Student(56);
    // s5->display();

    Student s2(s1);
    s2.display();

    Student *s3 = new Student(20, 200);
    s3->display();

    Student s4(*s3);
    s4.display();

    Student s5(50, 500);
    Student s6(60, 600);

    Student *s7 = new Student(70, 700);

    s6 = s5;

    *s7 = s5;

    s6 = *s7;

    return 0;
}