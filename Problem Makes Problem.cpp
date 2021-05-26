#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD = 1e9+7;
const ll maxN = 2000009;
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

ll inverse_mod(ll a,ll b)
{
    return binpow(a,b-2);
}
ll fact[maxN+10];
void factorial()
{
    fact[0] = 1;
    for(ll i = 1;i<2000002;i++)
    {
       fact[i] = (fact[i-1]%MOD*i%MOD)%MOD;
    }
}

void solve(ll n,ll r)
{
    ll k = n-r;
    ll x = (fact[k]%MOD * fact[r]%MOD)%MOD;
    ll xx = inverse_mod(x,MOD);
    ll ans = (fact[n]%MOD * xx%MOD)%MOD;
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    factorial();
    ll t,a,b,n,r,cnt = 1;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        n = a+b-1;
        r = b-1;
        cout << "Case " << cnt++ << ": ";
        solve(n,r);
    }
    return 0;
}
