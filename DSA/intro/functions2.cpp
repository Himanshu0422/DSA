#include <bits/stdc++.h>

using namespace std;

/*bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}*/

int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int main()
{
    /*int x, y, z;
    cin >> x >> y >> z;
    if (check(x, y, z))
    {
        cout << "Pythagorean triplet";
    }
    else
    {
        cout << "Not a pythagorean triplet";
    }*/

    int n;
    cin >> n;
    cout << binaryToDecimal(n) << endl;
    return 0;
}