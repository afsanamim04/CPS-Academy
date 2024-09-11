#include<bits/stdc++.h>
#define mem(a,b) memset(a,b,sizeof(a))
#define nl '\n'
#define pb push_back
#define v vector<long long int>
#define ll long long int
#define all(x) x.begin(),x.end()
#define mod 10000007
using namespace std;
ll dp[10123];
ll a , b , c , d , e , f ;

ll fib( ll n )
{
   if( n == 0 ) return a;
   if( n == 1 ) return b;
   if( n == 2 ) return c;
   if( n == 3 ) return d;
   if( n == 4 ) return e;
   if( n == 5 ) return f;

   if( dp[n] != -1 ) return dp[n];

   ll res = fib (n-1) % mod + fib (n-2) % mod + fib (n-3) % mod + fib (n-4) % mod + fib (n-5) % mod + fib (n-6) % mod ;
   dp[n] = res % mod;
   return dp[n];
}

int main()
{
    int t;
    cin >> t;
    for( int i = 1; i <= t; ++i)
    {
       ll n;
       cin >> a >> b >> c >> d >> e >> f >> n ;
       mem ( dp , -1 );
       cout << "Case " << i << ": " << fib( n ) % mod << nl;
    }
}
