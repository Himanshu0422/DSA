#include<bits/stdc++.h>
using namespace std;

int findMin(int nums[], int n) {
    int l = 0;
    int r = n - 1;

    while (l < r) {
      const int m = (l + r) / 2;
      if (nums[m] < nums[r])
        r = m;
      else
        l = m + 1;
    }

    return nums[l];
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	cout << findMin(arr, n);
	return 0;
}
