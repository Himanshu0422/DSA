#include <bits/stdc++.h> 
using namespace std; 

void nextGreater(int arr[], int n) 
{ 
    vector<int> ans(n);
    stack<int> st;
    st.push(-1);
    
    for(int i=n-1;i>=0;i--){
        if(st.top()>arr[i]){
            ans[i]=st.top();
            st.push(arr[i]);
        }
        else{
            while(st.top()<=arr[i] && st.top()!=-1){
                st.pop();
            }
            ans[i]=st.top();
            st.push(arr[i]);     
        }
    }
    for(int i = 0; i<n; i++){
        cout << arr[i] << ',' << ans[i] << endl;
    }
}

int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        nextGreater(arr, n); 
    }
	
	return 0; 
}