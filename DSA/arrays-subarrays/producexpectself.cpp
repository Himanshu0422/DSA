#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >> n;
    long long arr[n];
    for(long long i=0; i<n; i++) cin >> arr[i];
    long long count = 0;
    long long prod = 1;
    for(long long i=0; i<n; i++){
        if(arr[i]!=0) prod = prod * arr[i];
        else count++;
    }

    for(long long i=0; i<n; i++){
        if(count==0) cout << prod/arr[i] << " ";
        else if(count==1) {
            if(arr[i]!=0) cout << 0 << " ";
            else cout << prod << " ";
        }
        else cout << 0 << " ";
    }
}