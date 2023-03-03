#include<bits/stdc++.h> 
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    
    int count = 0;
    int ans = INT_MIN;
    
    for(int i = 0; i<n; i++){
        if(nums[i] == 1){
            count += 1;
            ans = max(ans,count);
        }else if(nums[i] != 1){
            count = 0;
        }
    }
    if(ans < 0){
        ans = 0;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int>arr;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int ans = findMaxConsecutiveOnes(arr);
    cout << ans;
}
