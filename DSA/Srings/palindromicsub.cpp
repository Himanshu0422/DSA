#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string S)
{
    string P = S;
 
    reverse(P.begin(), P.end());
 
    if (S == P) {
        return true;
    }
	return false;
}

int main() {

	string s;
	getline(cin, s);

	int n = s.length();
	int count = 0;

	for(int i = 1; i<=n; i++){

		for(int j = 0; j+i-1 < n; j++){

			string str = s.substr(j,i);

			if(isPalindrome(str)){
				count++;
			}
		}
	}
	cout << count;
	return 0;
}