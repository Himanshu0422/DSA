#include <bits/stdc++.h>

using namespace std;

void square(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i + 1; // for star use * / in column use j+1
        }
        cout << endl;
    }
}

void revsquare(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << n - j;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    square(n);
    revsquare(n);

    return 0;
}