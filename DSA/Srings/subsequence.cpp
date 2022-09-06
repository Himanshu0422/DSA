#include <bits/stdc++.h>
using namespace std;

void subseq(string s){
    int n = s.length();

    for(int i = 1; i<=n; i++){
        for(int j = 0; j+i-1<n; j++){
            string sa = s.substr(j,i);
            cout << sa << endl;
        }
    }
}

int main(){
    
    string s;
    cin >> s;
    
    subseq(s);

    return 0;
}