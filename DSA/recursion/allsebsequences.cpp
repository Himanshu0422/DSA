#include<bits/stdc++.h>
using namespace std;

void solve(string s, string output, int index,vector<string>& ans){
	if(index >= s.length()){
		ans.push_back(output);
		return;
	}
	
	solve(s, output, index+1, ans);
	char ele = s[index];
	output.push_back(ele);
	solve(s, output, index+1, ans);
}
vector<string> subsequences(string str){
	
    vector<string>ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
	
}


int main() {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		vector<string>finalans;
		finalans = subsequences(s);
		sort(finalans.begin(), finalans.end());
		for(int i = 0; i<finalans.size(); i++){
			cout << finalans[i] <<endl;
		}
	}
	return 0;
}