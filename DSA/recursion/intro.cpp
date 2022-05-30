#include <bits/stdc++.h>

using namespace std;

int Sum(int n)
{

    if (n == 0)
    {
        return 0;
    }

    int prevSum = Sum(n - 1);
    return n + prevSum;
}

int power(int n, int p)
{

    if (p == 0)
    {
        return 1;
    }

    int prevPower = power(n, p - 1);
    return n * prevPower;
}

int factorial(int n)
{
    if (n = 0)
    {
        return 1;
    }
    int prevfact = factorial(n - 1);
    return n * prevfact;
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{

    int n, p;
    cin >> n >> p;

    cout << Sum(n) << endl;
    cout << power(n, p) << endl;
    cout << factorial(n) << endl;
    cout << fib(n) << endl;
    return 0;
}