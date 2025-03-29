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

    ll n;cin>>n;
    vector<ll> v(n);for(ll i=0;i<n;i++) cin>>v[i];
    ll k;cin>>k;

    ll l=0,r=0;
    for(auto val:v) l=max(val,l), r+=val;
    ll ans=LLONG_MAX;
    while(l<=r)
    {
        ll mid=(l+r)/2,x=0,s=0,ans1=0;

        for(auto val:v)
        {
            if((s+val)>mid) x++,ans1=max(ans1,s),s=0;
            s+=val;
        }
        ans1=max(ans1,s);
        x++;

        if(x>k) l=mid+1;
        else
        {
            ans=min(ans,ans1);
            r=mid-1;
        }
    }
    cout<<ans;


    return 0;
}