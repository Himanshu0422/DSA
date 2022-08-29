#include <bits/stdc++.h>
using namespace std;

int getLength(char name[])
{
    int i = 0;
    int count = 0;

    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

void reverse(char name[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

int main()
{

    char name[20];

    cin >> name;

    int n = getLength(name);

    cout << n;

    reverse(name, n);

    cout << name << endl;

    return 0;
}