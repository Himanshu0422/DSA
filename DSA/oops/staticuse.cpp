#include <bits/stdc++.h>
using namespace std;
#include "static.cpp"

int main()
{

    // Student s1;
    // cout << s1.rollNumber << " " << s1.age << endl;
    // cout << s1.totalStudents << endl;

    // s1.totalStudents = 20; // but first we have to initialize it in static file

    // cout << Student ::totalStudents << endl;

    Student s1;
    Student s2;
    Student s3, s4, s5;

    // cout << Student :: totalStudents << endl;

    cout << Student::getTotalStudent() << endl;

    return 0;
}