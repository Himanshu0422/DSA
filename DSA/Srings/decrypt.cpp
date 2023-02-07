#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string ans = "";
    unordered_map<int, char>mp;
    int j = 0;
    bool flag = false;
    for(int i = 0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            ans += s[i];
            mp[j] = s[i];
            j++;
        }else{
            if(mp.find(s[i] - '0') == mp.end()){
                flag = true;
                break;
            }else{
                ans += mp[s[i] - '0'];
            }
        }
    }
    if(flag){
        cout << "Invalid" << endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}