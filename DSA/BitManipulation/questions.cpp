#include <bits/stdc++.h>

using namespace std;

bool ispowerof2(int n)
{
    return (n && !(n & n - 1));
}

int numberofones(int n)
{
    int count = 0;
    while (n)
    {
        n = n & n - 1;
        count++;
    }
    return count;
}

void subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{

    // Write a program to check if a given number is power of 2
    // n = 6 = (0110) n = 5 = (0101) if we change all the bits from righter most 1
    // n&n-1 has same bits as n excpt the rightmost set bit

    cout << ispowerof2(16) << endl;

    // Write a program to count the number of ones in binary in binary represention of a number

    cout << numberofones(19) << endl;

    // Write a program to generate all possible subset of a set

    int arr[4] = {1, 2, 3, 4};
    subsets(arr, 4);

    return 0;
}