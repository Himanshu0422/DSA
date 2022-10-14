#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<string, int> m;

    pair<string, int> p = make_pair("luffy", 3);
    m.insert(p);

    pair<string, int> p2("love", 2);
    m.insert(p2);

    m["boa"] = 1;

    // for(auto i: m){
    //     cout << i.first << " ";
    // }

    // cout << m["boa"] << endl;
    // cout << m.at("luffy") << endl;
    // cout << m["p"] << endl;
    // cout << m.at("p") << endl;

    // cout << m.size() << endl;

    // cout << m.count("b") << endl;
    // cout << m.count("luffy") << endl;

    // m.erase("-");
    // cout << m.size() << endl;

    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}