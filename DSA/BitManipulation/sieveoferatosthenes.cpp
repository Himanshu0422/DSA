#include <bits/stdc++.h>

using namespace std;

void primeSieve(int n)
{
    int prime[100] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void primefactor(int n)
{
    int spf[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }

    while (n != 1)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
}

int main()
{
    int n;
    cin >> n;

    primeSieve(n);
    cout << endl;
    primefactor(n);
    return 0;
}

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void sieve(vector<bool>&primes){
    
    int n=primes.size();
    
    primes[0]=primes[1]=false;
    
    for(int i=2;i*i<=n;i++){
        if(primes[i]){
            for(int j=i*i;j<=n;j+=i)
			primes[j]=false;
        }
    }
    
    
}
int main()
{
    int n,k;
    cin>>n>>k;
    
    int arr[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];
    
    vector<bool>primes(100000,true);
    sieve(primes);
    
    vector<int>prime;
    int m=primes.size();
    
    for(int i=0;i<m;i++){
        if(primes[i]){
            prime.push_back(i);
        }
    }
    
    stack<int>A[k+1];
	stack<int>B[k+1];
    
    for(int i=0;i<n;i++){
        A[0].push(arr[i]);
    }
    
    for(int i=1;i<=k;i++){
        
        int m=prime[i-1];
        
       while(!A[i-1].empty()){
           
           int val=A[i-1].top();
           A[i-1].pop();
            if(val%m==0){
                B[i].push(val);
            }
            else{
                A[i].push(val);
            }
            
        }
    }
    
    for(int i=1;i<=k;i++){
        while(!B[i].empty()){
            cout<<B[i].top()<<endl;
            B[i].pop();
        }
        while(!A[i].empty()){
            cout<<A[i].top()<<endl;
            A[i].pop();
        }
    }
    
    
    return 0;
}