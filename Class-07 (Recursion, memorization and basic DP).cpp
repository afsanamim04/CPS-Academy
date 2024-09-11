#include<bits/stdc++.h>
#define mem(a,b) memset(a,b,sizeof(a))
#define nl '\n'
#define pb push_back
#define v vector<long long int>
#define ll long long int
#define all(x) x.begin(),x.end()
using namespace std;
ll dp[1001230];
ll fact( ll n )
{
    if(n == 0) return 1;
    if( dp[n]  != 0) return dp[n];
    ll res = ( n * fact(n-1)) % 1000000007;
    dp[n]=res;
    return dp[n];
}
int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        ll n;
        cin>>n;
        cout<<fact(n) % 1000000007 <<nl;
    }
    return 0;
}

