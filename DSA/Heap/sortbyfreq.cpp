#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, arr + n);
    // unordered_map<int, int> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     mp[arr[i]]++;
    // }

    // priority_queue<pair<int, int>> q;
    // for (auto i : mp)
    // {
    //     pair<int,int> temp = {i.second, i.first};
    //     q.push(temp);
    // }
    // while (!q.empty())
    // {
    //     pair<int,int> temp = q.top();
    //     q.pop();
    //     int x = temp.first;
    //     for (int i = 0; i < x; i++)
    //     {
    //         cout << temp.second << " ";
    //     }
    // }
    unordered_map<int, pair<int, int>> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(arr[i]) == mp.end())
        {
            mp[arr[i]].first++;
            mp[arr[i]].second = i;
        }
        else
        {
            mp[arr[i]].first++;
        }
    }

    priority_queue<pair<int, pair<int, int>>> q;
    for (auto i : mp)
    {
        pair<int, pair<int, int>> temp = {i.second.first, {i.second.second, i.first}};
        q.push(temp);
    }
    while(!q.empty()){
        pair<int, pair<int, int>> temp = q.top();
        q.pop();
        int x = temp.first;
        for(int i = 0; i<x; i++){
            cout << temp.second.second << " ";
        }
    }

    return 0;
}