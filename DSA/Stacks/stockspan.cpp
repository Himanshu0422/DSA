#include<bits/stdc++.h>
using namespace std;

vector<int> stockSpan(vector<int> &price)
{
    int n = price.size();
    vector<int> ans(n,0);
    stack<int> s;

    s.push(0);

    ans[0] = 1;

    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && price[s.top()] <= price[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            ans[i] = i + 1;
        }
        else
        {
            ans[i] = i - s.top();
        }
        s.push(i);
    }
    return ans;
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	stack<int>s;
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}

	for(int i = n-1; i>=0; i--){
		s.push(arr[i]);
	}

	vector<int>ans;
	ans = stockSpan(arr);
	for(int i = 0; i<ans.size(); i++){
		cout << ans[i] << " ";
	}
	cout << "END";
	return 0;
}