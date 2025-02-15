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
    vector<ll> v1(n),v2(n);
    for(ll i=0;i<n;i++) cin>>v1[i];
    for(ll i=0;i<n;i++) cin>>v2[i];

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    ll s=0;
    for(ll i=0;i<n;i++) s+=llabs(v1[i]-v2[i]);

    // Output
    cout<<s;


    return 0;
}

/*
Input:
3
1 2 3
2 1 3

Output:
0
*/