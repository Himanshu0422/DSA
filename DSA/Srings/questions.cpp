#include <bits/stdc++.h>

using namespace std;

string reverse_words(string s[])
{
    int st = 0;
    int e = s.length();

    while (st <= e)
    {
        swap(s[st], s[e]);
        st++;
        e--;
    }
}

int main()
{

    string s = "Heloo";

    reverse_words(s[]);

    return 0;
}