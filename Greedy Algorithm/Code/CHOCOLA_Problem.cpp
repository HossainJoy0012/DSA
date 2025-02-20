#include <bits/stdc++.h>
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define lll __int128
#define pll pair<long long int, long long int>
#define nl '\n'
using namespace std;

ll x_function(ll &i,vector<ll> &x, ll &x_part,ll &y_part,ll &ans)
{
    ans+=(x[i]*y_part); i++;
    x_part++;

    return ans, i, x_part;
}
ll y_function(ll &j,vector<ll> &y,ll &x_part,ll &y_part,ll &ans)
{
    ans+=(y[j]*x_part); j++;
    y_part++;

    return ans, j, y_part;
}

int main()
{
    slow;

    ll t;cin>>t;
    while(t--)
    {
        ll m,n;cin>>m>>n;
        vector<ll> x(m-1), y(n-1);
        for(ll i=0;i<m-1;i++) cin>>x[i];
        for(ll i=0;i<n-1;i++) cin>>y[i];

        sort(x.rbegin(),x.rend());
        sort(y.rbegin(),y.rend());
        ll i=0,j=0,x_part=1,y_part=1,ans=0;
        while(x_part<m || y_part<n)
        {
            if(x_part<m && y_part<n)
            {
                if(x[i]>=y[j]) x_function(i,x,x_part,y_part,ans);
                else y_function(j,y,x_part,y_part,ans);
            }
            else if(x_part<m) x_function(i,x,x_part,y_part,ans);
            else y_function(j,y,x_part,y_part,ans);
        }

        cout<<ans<<nl;
    }


    return 0;
}