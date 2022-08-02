#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str = "adjwurjsdfwsf";

    // covert to upper case

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    cout << str << endl;

    string s = "dtfgvdfcgvsed";

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;

    // form the biggest number from the numeric string
    string s = "548545455";

    sort(s.begin(), s.end(), greater<int>());

    cout << s << endl;

    // find max appearing letter

    string s = "dfgvsrdhgvdsfbsrd";

    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    char ans = 'a';
    int maxF = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    cout << maxF << " " << ans << endl;

    return 0;
}