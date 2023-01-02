#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	int arr[n];
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	int ans = 0;
	int price = INT_MAX;
	
	for(int i = 0; i<n; i++){
		if(arr[i] < price){
			price = arr[i];
		}
		int d = arr[i] - price;
		if(ans < d){
			ans = d;
		}
	}

	cout << ans;

	return 0;
}