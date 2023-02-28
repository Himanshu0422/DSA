#include <iostream>

using namespace std;

int main()
{
    /* Normal Pattern*/
    /*
        int row, col;
        cin >> row >> col;*/
    /*  for (int i = 1; i <= row; i++)
      {
          for (int i = 1; i <= col; i++)
          {
              cout << "*";
      }
          cout << endl;
      }*/

    /* Hollow Pattern*/

    /*for (int i = 1; i <= row; i++)
      {
          for (int j = 1; j <= col; j++)
          {
              if (i == 1 || i == row || j == 1 || j == col)
              {
                  cout << "*";
              }
              else
              {
                  cout << " ";
              }
          }
          cout << endl;
      }*/
    /* Inverted Half*/

    /*int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }*/

    /* Inverted half 180degree*/
    /*  int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j <= n - i)
                {
                    cout << "  ";
                }
                else
                {
                    cout << "* ";
                }
            }
            cout << endl;
        }*/

    /* Half Pyramid Using Numbers */

    /*  int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout <<i<<" ";
            }
            cout << endl;
        }*/

    /* Floyd's triangle */
    /*
    int n;
    cin >> n;
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }*/

    /* Butterfly Pattern*/
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}