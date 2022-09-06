#include <bits/stdc++.h>
using namespace std;

bool solve(int *arr, int n, int i){
    if(i == n){
        return true;
    }
    if(arr[i] < arr[i-1]){
        return false;
    }else{
        return solve(arr, n, i+1);
    }
}

int getSum(int *arr, int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }
    int remainingPart = getSum(arr+1,n-1);
    int sum = arr[0] + remainingPart;
    return sum;
}

void reverseString(string &s, int i, int n){
    if(i == n/2){
        return;
    }

    swap(s[i], s[n-i-1]);

    reverseString(s, i+1 ,n);
}

int power(int a, int b){
    if(b == 0){
        return 1;
    }

    if(b == 1){
        return a;
    }

    int ans = power(a, b/2);

    if(b%2 == 0){
        return ans*ans;
    }else{
        return a*ans*ans;
    }
}

int main(){
    
    int a, b;
    cin >> a >> b;

    int ans = power(a, b);
    cout << ans;

    return 0;
}