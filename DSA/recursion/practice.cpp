#include <bits/stdc++.h>
using namespace std;

factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int smallOutput = factorial(n - 1);
    return n * smallOutput;
}

power(int n, int x)
{
    if (x == 0)
    {
        return 1;
    }

    if (n == 0)
    {
        return 0;
    }

    int smallOutput = n * power(n, x - 1);
    return smallOutput;
}

void print(int n)
{
    if (n > 1)
    {
        print(n - 1);
    }
    cout << n << " ";
}

digits(int n)
{
    if (n / 10 == 0)
    {
        return 1;
    }
    return 1 + digits(n / 10);
}

fib(int n)
{

    if (n == 0)
    {
        return 0;
    }

    int ans1 = fib(n - 1);
    int ans2 = fib(n - 2);
    return ans1 + ans2;
}

bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }

    bool restArray = sorted(arr + 1, n - 1);

    return arr[0] < arr[1] && restArray;
}

void dec(int n)
{

    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    dec(n - 1);
}

void inc(int n)
{

    if (n == 0)
    {
        return;
    }

    inc(n - 1);
    cout << n << endl;
}

int main()
{

    int n;
    cin >> n;

    dec(n);
    inc(n);

    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // cout << sorted(arr, n);

    // int output = factorial(n);
    // cout << output << endl;

    // int ans = power(3, 4);
    // cout << ans << endl;

    // print(6);

    // cout << endl;

    // cout << digits(160) << endl;

    // cout << fib(5) << endl;
}