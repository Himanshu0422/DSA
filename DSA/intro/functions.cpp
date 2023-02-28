#include <iostream>
#include <math.h>
using namespace std;

/* bool isPrime(int num){
    for(int i = 2; i<sqrt(num);i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}*/

/*void fib(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for (int i = 1; i <= n; i++)
    {
        cout << t1 << endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}*/
/*
int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}*/

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{

    /*    int a,b;
        cin>>a>>b;

        for(int i = a; i<=b;i++){
            if(isPrime(i) == true){
                cout<<i<<endl;
            }
        }*/

    /*int n;
    cin >> n;
        fib(n);

    int ans = fact(n);
    cout << ans << endl;
    */

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }
    return 0;
}