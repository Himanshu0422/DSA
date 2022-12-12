#include<bits/stdc++.h>
using namespace std;

vector<long long int> nextSmallerElement(vector<long long int> &arr, long long int n){    
	stack<long long int>s;
	s.push(-1);
	vector<long long int>ans(n);

	for(long long int i = n-1; i>=0; i--){
		long long int curr = arr[i];
		while(s.top() != -1 && arr[s.top()] >= curr){
			s.pop();
		}
		ans[i] = s.top();
		s.push(i);
	}
	return ans;
}

vector<long long int> prevSmallerElement(vector<long long int> &arr, long long int n){
	
	stack<long long int>s;
	s.push(-1);
	vector<long long int>ans(n);

	for(long long int i = 0; i<n; i++){
		int curr = arr[i];
		while(s.top() != -1 && arr[s.top()] >= curr){
			s.pop();
		}
		ans[i] = s.top();
		s.push(i);
	}
	return ans;
}

long long int largestRectangleArea(vector<long long int>& heights) {
	
	long long int n = heights.size();
	
	vector<long long int>next(n);
	next = nextSmallerElement(heights, n);
	
	vector<long long int>prev(n);
	prev = prevSmallerElement(heights, n);
	long long int area = INT_MIN;
	
	for(long long int i = 0; i<n; i++){
		long long int l = heights[i];
	
		if(next[i] == -1){
			next[i] = n;
		}
		
		long long int b = next[i] - prev[i] - 1;
		
		long long int newArea = l*b;
		area = max(area, newArea);
	}
	return area;
}

int main() {
	long long int n;
	cin >> n;

	vector<long long int>arr(n);
	for(long long int i = 0; i<n; i++){
		cin >> arr[i];
	}

	long long int ans = largestRectangleArea(arr);

	cout << ans;
	return 0;
}