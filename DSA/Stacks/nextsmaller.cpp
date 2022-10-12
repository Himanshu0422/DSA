#include <bits/stdc++.h>
#include <stack>
using namespace std;
vector<int> nextSmallerElement(vector<int> arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        if (s.top() < arr[i])
        {
            ans[i] = s.top();
            s.push(arr[i]);
        }
        else
        {
            while (s.top() >= arr[i] && s.top() != -1)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(arr[i]);
        }
    }
    return ans;
}

int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(1);
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> ans;
    ans = nextSmallerElement(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}