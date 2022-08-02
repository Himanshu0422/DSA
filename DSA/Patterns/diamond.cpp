#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int i = 1;
    while (i <= (n / 2) + 1)
    {
        int spaces = 1;
        while (spaces <= (n / 2) + 1 - i)
        {
            cout << " ";
            spaces++;
        }
        int j = 1;
        while (j <= (2 * i) - 1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    i = 1;
    while (i <= n / 2)
    {
        int spaces = 1;
        while (spaces <= i)
        {
            cout << " ";
            spaces++;
        }
        int j = 2 * ((n / 2) - i + 1) - 1;
        while (j >= 1)
        {
            cout << "*";
            j--;
        }
        cout << endl;
        i++;
    }
}
