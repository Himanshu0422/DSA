#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}

	int l = 0;
	int h = n-1;
	int mid = 0;
	while(mid <= h){
		switch(arr[mid]){
			case 0: 
				swap(arr[l++], arr[mid++]);
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(arr[mid], arr[h--]);
				break;
		}
	}
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}