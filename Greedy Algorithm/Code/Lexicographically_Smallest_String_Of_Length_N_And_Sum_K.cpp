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
    ll n,k;cin>>n>>k;

    string s; for(ll i=0;i<n;i++) s.push_back('a');
    ll sum=n;

    for(ll i=n-1;sum<k && i>=0;i--)
    {
        sum-=1;

        ll x=min(26ll,k-sum);
        s[i]=(char)('a'+(x-1)); sum+=x;
    }

    // Output
    cout<<s;


    return 0;
}

/*
5 42
aaamz

3 25
aaw
*/