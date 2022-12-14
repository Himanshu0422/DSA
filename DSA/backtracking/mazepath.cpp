#include<bits/stdc++.h>
using namespace std;

bool isSafe(int x, int y, int n, int m, vector<vector<int>>& visited){
	if((x >= 0 && x < n) && (y >= 0 && y < m) && visited[x][y] == 0){
		return true;
	}
	return false;
}

void solve(int n, int m, vector<string>& ans, int x, int y, vector<vector<int>>& visited, string path){
	if(x == n-1 && y == m-1){
		ans.push_back(path);
		return;
	}

	visited[x][y] = 1;

	//Vertically
	int newx = x+1;
	int newy = y;
	if(isSafe(newx, newy, n, m, visited)){
		path.push_back('V');
		solve(n, m, ans, newx, newy, visited, path);
		path.pop_back();
	}

	// Horizontal
	newx = x;
	newy = y+1;
	if(isSafe(newx, newy, n, m, visited)){
		path.push_back('H');
		solve(n, m, ans, newx, newy, visited, path);
		path.pop_back();
	}

	//Diagnol
	newx = x+1;
	newy = y+1;
	if(isSafe(newx, newy, n, m, visited)){
		path.push_back('D');
		solve(n, m, ans, newx, newy, visited, path);
		path.pop_back();
	}
	visited[x][y] = 0;
}

int main() {
	
	int n, m;
    cin >> n >> m;

    vector<vector<int>> visited(n, vector<int>(m, '0'));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            visited[i][j] = 0;
        }
    }

	vector<string>ans;
	string path = "";
	solve(n, m, ans, 0, 0, visited, path);
	// sort(ans.begin(),ans.end());
	int count = ans.size();

	for(int i = 0; i<ans.size(); i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	cout << count;

	return 0;
}