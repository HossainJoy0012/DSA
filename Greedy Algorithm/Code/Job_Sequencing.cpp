#include <bits/stdc++.h>
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define lll __int128
#define pll pair<long long int, long long int>
#define nl '\n'
using namespace std;

bool compare(pair<ll,pll> a, pair<ll,pll> b)
{
    return a.second.second>b.second.second;
}

int main()
{
    slow;

    // Input
    ll n;cin>>n; // number of total jobs
    vector<pair<ll,pll>> jobs(n);
    for(ll i=0;i<n;i++) jobs[i].first=i; // indices of the jobs
    for(ll i=0;i<n;i++) cin>>jobs[i].second.first; // deadlines of the jobs
    for(ll i=0;i<n;i++) cin>>jobs[i].second.second; // profits of the jobs

    // before sorting
    for(ll i=0;i<n;i++) cout<<jobs[i].first<<" "; cout<<nl; // indices of the jobs
    for(ll i=0;i<n;i++) cout<<jobs[i].second.first<<" "; cout<<nl; // deadlines of the jobs
    for(ll i=0;i<n;i++) cout<<jobs[i].second.second<<" "; cout<<nl<<nl; // profits of the jobs

    sort(jobs.begin(),jobs.end(),compare);

    // after sorting
    for(ll i=0;i<n;i++) cout<<jobs[i].first<<" "; cout<<nl; // indices of the jobs
    for(ll i=0;i<n;i++) cout<<jobs[i].second.first<<" "; cout<<nl; // deadlines of the jobs
    for(ll i=0;i<n;i++) cout<<jobs[i].second.second<<" "; cout<<nl<<nl; // profits of the jobs

    ll time=0,profit=0; vector<ll> ans;
    for(ll i=0;i<n;i++)
    {
        if(time<jobs[i].second.first)
        {
            ans.push_back(jobs[i].first);
            profit+=jobs[i].second.second;
            time++;
        }
    }

    // Output
    cout<<profit<<nl;
    for(auto val:ans) cout<<val<<" ";


    return 0;
}

/*
Input:
4
4 1 1 1
20 10 40 30

Output:

*/