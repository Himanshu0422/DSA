#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    /*int arr[] = {10, 20, 30};
    cout << *arr << endl;

    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i) << endl;
    }*/

    int a = 2;
    int b = 4;

    int *aptr = &a;
    int *bptr = &b;
    swap(aptr, bptr);

    cout << a << " " << b;
    return 0;
}