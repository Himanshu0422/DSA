#include <bits/stdc++.h>

using namespace std;

int main()
{
    char n;
    cin >> n;
    // int val = int(n);
    // if (val > 64 && val < 91)
    // {
    //     cout << "Upper" << endl;
    // }
    // else if (val > 96 && val < 123)
    // {
    //     cout << "Lower" << endl;
    // }
    // else
    // {
    //     cout << "Pls Re-enter" << endl;
    // }

    if (isupper(n))
    {
        cout << "Upper" << endl;
    }
    else if (islower(n))
    {
        cout << "Lower" << endl;
    }
    else
    {
        cout << "Pls Re-enter" << endl;
    }
    return 0;
}