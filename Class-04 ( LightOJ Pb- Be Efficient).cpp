#include<bits/stdc++.h>
#define mem(a,b) memset(a,b,sizeof(a))
#define nl '\n'
#define pb push_back
#define v vector<long long int>
#define ll long long int
#define all(x) x.begin(),x.end()

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int T=1; T<=t; ++T)
    {
        int n,m;
        cin>>n>>m;
        v vec(n+5);
        v pre(n+6);
        pre[0]=0;
        for(int i=0; i<n; ++i) cin>>vec[i];
        for(int i=1; i<=n; ++i) pre[i]= pre[i-1]+vec[i-1];
        for(int i=0; i<=n; ++i) pre[i]%=m;

        map<ll,int>mp;
        ll ans=0;

        for(int i=0; i<=n; ++i)
        {
            ans+=mp[pre[i]];
            mp[pre[i]]++;
        }
        cout<<"Case "<<T<<": "<<ans<<nl;
    }
}
