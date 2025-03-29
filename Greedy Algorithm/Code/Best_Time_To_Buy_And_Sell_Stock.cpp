#include <bits/stdc++.h>
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define lll __int128
#define pll pair<long long int, long long int>
#define nl '\n'
using namespace std;

int main()
{
    slow;

    ll n; cin>>n;
    vector<ll> prices(n); for(ll i=0;i<n;i++) cin>>prices[i];

    ll ans=0, x=0;
    for(int i=1;i<n;i++)
    {
        if(prices[i]<prices[x]) x=i;
        else ans=max(ans,prices[i]-prices[x]);
    }
    
    cout<<ans;


    return 0;
}