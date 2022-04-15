#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    /*
    bool flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Number is not Prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime" << endl;
    }*/

    /* Reverse Number*/

    /*  int reverse;
while(n>0){
      int lastdigit=n%10;
      reverse =reverse*10 + lastdigit;
      n= n/10;
}
cout<<reverse<<endl;*/

    /* Armstrong */

    int sum = 0;
    int original = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }
    if (sum == original)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not" << endl;
    }
    return 0;
}