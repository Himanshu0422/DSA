#include <bits/stdc++.h>
using namespace std;
#include "complex.cpp"

int main()
{
    int r1, i1, r2, i2;

    cin >> r1 >> i1;
    cin >> r2 >> i2;

    ComplexNumbers c1(r1, i1);
    ComplexNumbers c2(r2, i2);

    int c;
    cin >> c;

    if (c == 1)
    {
        c1.plus(c2);
        c1.print();
    }
    else if (c == 2)
    {
        c1.multiply(c2);
        c1.print();
    }
    else
    {
        return 0;
    }

    return 0;
}