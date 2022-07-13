#include <bits/stdc++.h>
using namespace std;
#include "getset.cpp"

int main()
{
    Student s1;

    Student *s2 = new Student;

    s1.setAge(2);
    s2->setAge(4);

    s1.display();
    s2->display();

    return 0;
}