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
    int total = n*m;

    int count = 0;

    int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;
    while (count < total)
    {
        for (int col = col_start; count < total && col <= col_end; col++)
        {
            cout << arr[row_start][col] << " ";
            count++;
        }
        row_start++;

        for (int row = row_start;count < total && row <= row_end; row++)
        {
            cout << arr[row][col_end] << " ";
            count++;
        }
        col_end--;

        for (int col = col_end;count < total && col >= col_start; col--)
        {
            cout << arr[row_end][col] << " ";
            count++;
        }
        row_end--;

        for (int row = row_end;count < total && row >= row_start; row--)
        {
            cout << arr[row][col_start] << " ";
            count++;
        }
        col_start++;
    }

    return 0;
}