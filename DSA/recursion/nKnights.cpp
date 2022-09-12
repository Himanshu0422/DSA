// #include <iostream>
// #include <vector>
// using namespace std;

// int ans = 0;

// bool issafe(int row, int col, int n, vector<vector<int>> &mat)
// {
//     int i = row-1;
// 	int j = col-2;
// 	if(i >= 0 && j >= 0 && mat[i][j] == 1){
// 		return false;
// 	}

//     i = row-2;
// 	j = col-1;
// 	if(i >= 0 && j >= 0 && mat[i][j] == 1){
// 		return false;
// 	}

// 	i = row-2;
// 	j = col+1;
// 	if(i >= 0 && j < n && mat[i][j] == 1){
// 		return false;
// 	}

// 	i = row-1;
// 	j = col+2;
// 	if(i >= 0 && j < n && mat[i][j] == 1){
// 		return false;
// 	}
//     return true;
// }

// void print(vector<vector<int>> &mat)
// {
//     for (int i = 0; i < mat.size(); i++)
//     {
//         for (int j = 0; j < mat[0].size(); j++)
//         {
//             if (mat[i][j] == 1)
//             {
//                 cout << "{" << i << "-" << j << "}"<< " ";
//             }
//         }
//     }
// }
// void solve(int i, int n, vector<vector<int>> &mat)
// {

//     if (i == n)
//     {
//         ans++;
//         print(mat);
//         return;
//     }

//     for (int j = 0; j < n; j++)
//     {

//         if (issafe(i, j, n, mat))
//         {
//             mat[i][j] = 1;

//             solve(i + 1, n, mat);

//             mat[i][j] = 0;
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;

//     vector<vector<int>> mat(n, vector<int>(n, 0));

//     solve(0, n, mat);
//     cout << endl;
//     cout << ans << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int n, m, k;
int count = 0;

void displayBoard(vector<vector<int>> &board)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (board[i][j] == 1)
			{
				cout << "{" << i << "-" << j << "}"<< " ";
			}
		}
	}
}

bool canPlace(int row, int col, vector<vector<int>> &mat)
{
	int i = row - 1;
	int j = col - 2;
	if (i >= 0 && j >= 0 && mat[i][j] == 1)
	{
		return false;
	}

	i = row - 2;
	j = col - 1;
	if (i >= 0 && j >= 0 && mat[i][j] == 1)
	{
		return false;
	}

	i = row - 2;
	j = col + 1;
	if (i >= 0 && j < n && mat[i][j] == 1)
	{
		return false;
	}

	i = row - 1;
	j = col + 2;
	if (i >= 0 && j < n && mat[i][j] == 1)
	{
		return false;
	}
	return true;
}

void kkn(int k, int sti, int stj, vector<vector<int>> &board)
{

	if (k == 0)
	{
		displayBoard(board);
		count++;
	}
	else
	{

		for (int i = sti; i < m; i++)
		{
			for (int j = stj; j < n; j++)
			{

				if (board[i][j] == 0 && canPlace(i, j, board))
				{				
					board[i][j] = 1;
					kkn(k - 1, i, j, board);
					board[i][j] = 0;
				}
			}
			stj = 0;
		}
	}
}

int main()
{
	cin >> n;
	m = n;
	k = n;

	vector<vector<int>> board(n, vector<int>(n, 0));

	kkn(k, 0, 0, board);

	cout << endl
		 << "Total number of solutions : " << count;
	return 0;
}
