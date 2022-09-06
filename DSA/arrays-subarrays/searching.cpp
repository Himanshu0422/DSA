#include <bits/stdc++.h>

using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int search(int arr[], int t, int s, int e)
{
    int mid = (s + e) / 2;

    if (arr[mid] == t)
    {
        return mid;
    }
    else if (arr[mid] > t)
    {
        return search(arr, t, s, mid - 1);
    }
    else
    {
        return search(arr, t, mid + 1, e);
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << linearSearch(arr, n, key) << endl;
    cout << binarySearch(arr, n, key) << endl;
    return 0;
}