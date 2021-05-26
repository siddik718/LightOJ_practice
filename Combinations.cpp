#include<bits/stdc++.h>
#define ll long long int

using namespace std;

const ll maxN = 2e6+10;
const ll MOD = 1e6+3;

ll fact[maxN];
void factorial()
{
    fact[0] = 1;
    for(ll i = 1;i<2000005;i++)
    {
       fact[i] = (fact[i-1]%MOD*i%MOD)%MOD;
    }
}

ll binpow(ll a,ll b)
{
    ll res = 1;
    while(b>0)
    {
        if(b&1)
            res = (res*a)%MOD;
        a = (a*a)%MOD;
        b >>= 1;
    }
    return res;
}

void solve(ll n,ll k)
{
    ll r = n-k;
    ll xx = (fact[k]%MOD * fact[r]%MOD)%MOD;
    ll yy = binpow(xx,MOD-2);
    ll ans = (fact[n]%MOD * yy%MOD)%MOD;
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    factorial();
    ll t,n,k,cnt = 1;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << "Case " << cnt++ << ": ";
        solve(n,k);
    }
    return 0;
}
