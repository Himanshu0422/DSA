#include <bits/stdc++.h>
using namespace std;
#include "over.cpp"

int main()
{

    // Fraction f1(1, 2);
    // Fraction f2(2, 3);

    // Fraction f3 = f1.add2(f2);
    // Fraction f4 = f1 + f2;
    // f1.print();
    // f2.print();
    // f3.print();
    // f4.print();

    // if (f1 == f2)
    // {
    //     cout << "Equal" << endl;
    // }
    // else{
    //     cout << "Not Equal" << endl;
    // }

    Fraction f1(10, 2);
    Fraction f2(15, 4);

    f1.print();
    // ++f1;
    // f1.print();

    Fraction f3 = ++f1;
    f1.print();
    f3.print();

    return 0;
}