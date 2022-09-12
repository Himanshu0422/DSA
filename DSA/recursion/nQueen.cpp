// #include <bits/stdc++.h>
// using namespace std;

// void addSol(vector<vector<int>> &ans, vector<vector<int>> &board, int n)
// {
//     vector<int> temp;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             temp.push_back(board[i][j]);
//         }
//     }

//     ans.push_back(temp);
// }

// bool isSafe(int row, int col, vector<vector<int>> &board, int n)
// {
//     int x = row;
//     int y = col;

//     while (y >= 0)
//     {
//         if (board[x][y] == 1)
//         {
//             return false;
//         }
//         y--;
//     }

//     x = row;
//     y = col;
//     while (x >= 0 && y >= 0)
//     {
//         if (board[x][y] == 1)
//         {
//             return false;
//         }
//         x--;
//         y--;
//     }

//     x = row;
//     y = col;
//     while (x < n && y >= 0)
//     {
//         if (board[x][y] == 1)
//         {
//             return false;
//         }
//         x++;
//         y--;
//     }
//     return true;
// }

// void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n)
// {
//     if (col == n)
//     {
//         vector<int> temp;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 temp.push_back(board[i][j]);
//             }
//         }

//         ans.push_back(temp);
//         return;
//     }

//     for (int row = 0; row < n; row++)
//     {
//         if (isSafe(row, col, board, n))
//         {
//             board[row][col] = 1;
//             solve(col + 1, ans, board, n);
//             board[row][col] = 0;
//         }
//     }
// }

// vector<vector<int>> nQueens(int n)
// {
//     vector<vector<int>> board(n, vector<int>(n, 0));
//     vector<vector<int>> ans;
//     solve(0, ans, board, n);
//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<vector<int>> finalans;
//     finalans = nQueens(n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << finalans[i][j] << " ";
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int ans = 0;

bool issafe(int row, int col, int n, vector<vector<int>> &mat)
{
    int i = row-1;
    while (i >= 0)
    {
        if (mat[i][col] == 1)
        {
            return false;
        }
        i--;
    }

    i = row - 1;
    int j = col - 1;
    while (i >= 0 && j >= 0)
    {
        if (mat[i][j] == 1)
        {
            return false;
        }
        i--;
        j--;
    }

    i = row - 1;
    j = col + 1;
    while (i >= 0 && j < n)
    {
        if (mat[i][j] == 1)
        {
            return false;
        }
        i--;
        j++;
    }

    return true;
}

void print(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            if (mat[i][j] == 1)
            {
                cout << "{" << i + 1 << "-" << j + 1 << "}"
                     << " ";
            }
        }
    }
}
void solve(int i, int n, vector<vector<int>> &mat)
{

    if (i == n)
    {
        ans++;
        print(mat);
        return;
    }

    for (int j = 0; j < n; j++)
    {

        if (issafe(i, j, n, mat))
        {
            mat[i][j] = 1;

            solve(i + 1, n, mat);

            mat[i][j] = 0;
        }
    }
}
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n, 0));

    solve(0, n, mat);
    cout << endl;
    cout << ans << endl;

    return 0;
}