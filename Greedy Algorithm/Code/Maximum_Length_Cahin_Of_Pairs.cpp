#include <bits/stdc++.h>
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define lll __int128
#define pll pair<long long int, long long int>
#define nl '\n'
using namespace std;

bool compare(pair<ll,pll> a, pair<ll,pll> b)
{
    return a.second.second<b.second.second;
}

int main()
{
    slow;

    // Input
    ll n;cin>>n; // number of pairs
    vector<pair<ll,pll>> pairs(n);
    for(ll i=0;i<n;i++) pairs[i].first=i; // index of the pairs
    for(ll i=0;i<n;i++) cin>>pairs[i].second.first>>pairs[i].second.second; // values of the pairs

    // pairs before sort
    // for(auto val:pairs) cout<<val.first<<" "<<pairs[i].second.first<<" "<<pairs[i].second.second<<nl; cout<<nl;

    sort(pairs.begin(),pairs.end(),compare);

    // pairs after sort
    // for(auto val:pairs) cout<<val.first<<" "<<pairs[i].second.first<<" "<<pairs[i].second.second<<nl; cout<<nl;

    vector<pair<ll,pll>> ans; ans.push_back(pairs[0]);
    for(ll i=1;i<n;i++)
    {
        if(ans.back().second.second<=pairs[i].second.first)
        {
            ans.push_back(pairs[i]);
        }
    }

    // Output
    cout<<ans.size()<<nl;
    for(auto val:ans) cout<<val.first<<" ";
    


    return 0;
}

/*
Input:
5
5 24
39 60
5 28
27 40
50 90

Output:
3
0 3 4 
*/