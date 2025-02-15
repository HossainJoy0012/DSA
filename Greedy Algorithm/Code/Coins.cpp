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

    // Input
    ll n;cin>>n;
    vector<ll> denominations(n);
    for(ll i=0;i<n;i++) cin>>denominations[i];
    ll v;cin>>v;

    ll change_for=v, cnt=0; vector<pll> ans(n);
    for(ll i=n-1;i>=0;i--)
    {
        ll x=change_for/denominations[i];
        ans[i]={denominations[i],x};
        if(x>0) cnt++;
        change_for-=(x*denominations[i]);
    }

    // Output
    cout<<cnt<<nl<<nl;
    for(ll i=0;i<n;i++) cout<<ans[i].first<<"->"<<ans[i].second<<nl;


    return 0;
}

/*
Input:
10
1 2 5 10 20 50 100 200 500 1000
543

Output:
4

1->1
2->1
5->0
10->0
20->2
50->0
100->0
200->0
500->1
1000->0
*/