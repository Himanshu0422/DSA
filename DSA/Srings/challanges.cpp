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
    string s1 = "548545455";

    sort(s1.begin(), s1.end(), greater<int>());

    cout << s1 << endl;

    // find max appearing letter

    string s2 = "dfgvsrdhgvdsfbsrd";

    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < s2.size(); i++)
    {
        freq[s2[i] - 'a']++;
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