#include <bits/stdc++.h>
using namespace std;
#include "oops.cpp"

int main()
{
    char name[] = "abcd";
    Student s1(20, name);
    s1.display();

    Student s2(s1);
    s2.display();

    s2.name[0] = 'x';
    s2.display();
    s1.display();


    Student1 s8(101,20);

}