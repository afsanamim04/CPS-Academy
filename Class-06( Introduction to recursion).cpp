#include<bits/stdc++.h>
#define mem(a,b) memset(a,b,sizeof(a))
#define nl '\n'
#define pb push_back
#define v vector<long long int>
#define ll long long int
#define all(x) x.begin(),x.end()
using namespace std;

int fact(int n)
{
    if(n==0) return 1;
    return n * fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<nl;

}
