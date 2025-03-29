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

    ll l,r,k;cin>>l>>r>>k;
    if(k<=0) cout<<0;
    else
    {
        ll range=(r-l)/2; if(r%2!=0) range++;

        if(range<k) cout<<0;
        else
        {
            if(r%2==0) cout<<r-2*(k-1);
            else cout<<r-2*(k-2);
        }
    }


    return 0;
}