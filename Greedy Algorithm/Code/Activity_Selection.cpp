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
    ll n;cin>>n; // number of activities
    vector<pair<ll,pll>> activities(n);
    for(ll i=0;i<n;i++) activities[i].first=i; // index of the activities
    for(ll i=0;i<n;i++) cin>>activities[i].second.first; // staring times of the activities
    for(ll i=0;i<n;i++) cin>>activities[i].second.second; // ending times of the activities

    // Activities before sort
    // for(auto val:activities) cout<<val.first<<" "; cout<<nl; // index of the activities
    // for(auto val:activities) cout<<val.second.first<<" "; cout<<nl; // staring times of the activities
    // for(auto val:activities) cout<<val.second.second<<" "; cout<<nl<<nl; // ending times of the activities

    sort(activities.begin(),activities.end(),compare);

    // Activities after sort
    // for(auto val:activities) cout<<val.first<<" "; cout<<nl; // index of the activities
    // for(auto val:activities) cout<<val.second.first<<" "; cout<<nl; // staring times of the activities
    // for(auto val:activities) cout<<val.second.second<<" "; cout<<nl<<nl; // ending times of the activities

    vector<pair<ll,pll>> ans; ans.push_back(activities[0]);
    for(ll i=1;i<n;i++)
    {
        if(ans.back().second.second<=activities[i].second.first)
        {
            ans.push_back(activities[i]);
        }
    }

    // Output
    cout<<ans.size()<<nl;
    for(auto val:ans) cout<<val.first<<" ";
    


    return 0;
}

/*
Input:
6
0 1 3 5 5 8
6 2 4 7 9 9

Output:
4
1 2 3 5 
*/