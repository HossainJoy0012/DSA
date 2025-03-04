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

    string s;cin>>s;

    ll l=0,r=0,ans=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='L') l++; else r++;

        if(l==r) ans++;
    }

    cout<<ans<<nl;


    return 0;
}