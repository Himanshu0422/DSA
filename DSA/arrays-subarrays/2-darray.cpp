#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Searching element
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "Element Found"
                     << " " << i << " " << j << endl;
            }
        }
    }

    // Dynamic Array
    int n, m;
    cin >> n >> m;

    int **arr = new int*[n];

    for(int i = 0; i<n; i++){
        arr[i] = new int[col];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // release memory

    for(int i = 0; i<n; i++){
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}