#include <iostream>
#include <vector>
using namespace std;

bool solveGrid(int i, int j, int n, int m, vector<vector<char>> &mat)
{
    if (i == n - 1 && j == m - 1 && mat[i][j] == 'O')
    {
        mat[i][j] = '1';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] != '1')
                {
                    cout << 0 << " ";
                }
                else
                    cout << mat[i][j] << " ";
            }
            cout << endl;
        }

        return true;
    }

    if (i < 0 || j < 0 || i >= n || j >= m || mat[i][j] != 'O')
        return false;

    mat[i][j] = '1';

    if (solveGrid(i + 1, j, n, m, mat))
        return true;
    if (solveGrid(i - 1, j, n, m, mat))
        return true;
    if (solveGrid(i, j + 1, n, m, mat))
        return true;
    if (solveGrid(i, j - 1, n, m, mat))
        return true;

    mat[i][j] = 'O';

    return false;
}

int main()
{

    int n, m;
    cin >> n >> m;

    vector<vector<char>> mat(n, vector<char>(m, '0'));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    bool a = solveGrid(0, 0, n, m, mat);

    if (!a)
        cout << "NO PATH FOUND" << endl;

    return 0;
}