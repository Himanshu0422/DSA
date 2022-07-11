#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int min = INT_MAX;
    int max = INT_MIN;
    int sum = 0;
    // int mean;
    // int x;
    // int t = n;
    // while (n--)
    // {
    //     cin >> x;
    //     if (x > max)
    //     {
    //         max = x;
    //     }
    //     if (x < min)
    //     {
    //         min = x;
    //     }
    //     sum = sum + x;
    // }
    // mean = sum / t;
    // cout << "Max: " << max << endl;
    // cout << "Min: " << min << endl;
    // cout << "Mean: " << mean << endl;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        sum += arr[i];
    }
    cout << max << " " << min << " " << sum << endl;

    cout << *arr << endl;
    cout << arr << endl;
    cout << *arr + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << 0 [arr] << endl;
    cout << arr[3] << endl;
    return 0;
}