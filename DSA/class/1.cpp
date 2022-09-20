#include <iostream>

using namespace std;

int main()
{
    int i, s, f;
    cin >> i >> s >> f;
    int c;
    for (int j = i; j <= f; j += s)
    {
        c = (((j - 32) * 5) / 9);
        cout << j << " " << c << endl;
    }
    
    return 0;
}