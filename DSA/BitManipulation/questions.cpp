#include <bits/stdc++.h>

using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

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

int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

void unique2(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (getBit(arr[i], pos - 1))
        {
            newxor = newxor ^ arr[i];
        }
    }

    cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl;
}

int unique3(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setBit(result, i);
        }
    }
    return result;
}

int main()
{

    // Write a program to check if a given number is power of 2
    // n = 6 = (0110) n = 5 = (0101) if we change all the bits from righter most 1
    // n&n-1 has same bits as n excpt the rightmost set bit

    // cout << ispowerof2(16) << endl;

    // Write a program to count the number of ones in binary in binary represention of a number

    // cout << numberofones(19) << endl;

    // Write a program to generate all possible subset of a set

    // int arr[4] = {1, 2, 3, 4};
    // subsets(arr, 4);

    // int arr[] = {1, 2, 3, 4, 1, 2, 3};
    // cout << unique(arr, 7) << endl;

    // int arr[] = {1, 2, 3, 1, 2, 3, 5, 7};
    // unique2(arr, 8);

    int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
    cout << unique3(arr, 10) << endl;
    return 0;
}