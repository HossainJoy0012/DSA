#include <bits/stdc++.h>
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define lll __int128
#define pll pair<long long int, long long int>
#define nl '\n'
using namespace std;

bool compare(pair<ll,double> a, pair<ll,double> b)
{
    return a.second>b.second;
}

int main()
{
    slow;

    ll n;cin>>n; // number of items
    vector<pair<double,double>> items(n);
    for(ll i=0;i<n;i++) cin>>items[i].first; // profits of the items
    for(ll i=0;i<n;i++) cin>>items[i].second; // weights of the items
    double w;cin>>w; // size of the sack

    vector<pair<ll,double>> ratio(n);
    for(ll i=0;i<n;i++) ratio[i]={i,(items[i].first/items[i].second)};

    // ratios before sort
    // for(ll i=0;i<n;i++) cout<<ratio[i].first<<" "; cout<<nl; // main indices
    // for(ll i=0;i<n;i++) cout<<ratio[i].second<<" "; cout<<nl<<nl; // ratios

    sort(ratio.begin(),ratio.end(),compare);

    // ratios after sort
    // for(ll i=0;i<n;i++) cout<<ratio[i].first<<" "; cout<<nl; // main indices
    // for(ll i=0;i<n;i++) cout<<ratio[i].second<<" "; cout<<nl<<nl; // ratios

    double capacity=w,profit=0; vector<ll> ans;
    for(ll i=0;capacity>0 && i<n;i++)
    {
        ll indx=ratio[i].first;
        double rtio=ratio[i].second;
        ll wght=items[ratio[i].first].second;
        ll prft=items[ratio[i].first].first;

        if(wght<=capacity)
        {
            ans.push_back(indx);
            profit+=prft;
            capacity-=wght;
        }
        else
        {
            ans.push_back(indx);
            profit+=(capacity*rtio);
            capacity=0;
        }
    }

    //Output
    cout<<profit<<nl;
    for(auto val:ans) cout<<val<<" ";



    return 0;
}

/*
Input:
3
60 100 120
10 20 30
50

Output:
240
0 1 2 
*/