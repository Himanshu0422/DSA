#include<bits/stdc++.h>
using namespace std;

int tower(int n, string from, string to, string help){
    int count = 1;
    if(n == 0){
        return 0;
    }

    count += tower(n-1, from, help, to);
    cout << "Move " << n << "th disc from " << from << " to " << to << endl;
    count += tower(n-1, help, to, from);

    return count;
}

int main(){
    int n;
    cin >> n;
    cout  << tower(n, "T1", "T2", "T3");
}