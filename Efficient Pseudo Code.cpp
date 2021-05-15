#include<bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD = 1000000007;

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

ll mod_inv(ll a,ll b)
{
    return binpow(a,b-2);
}

void solve(ll n,ll m)
{
    vector <ll> factor;
    map<ll , ll> cnt;
    for(ll i = 2;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            factor.push_back(i);
            while(n%i == 0)
            {
                cnt[i]++;
                n/=i;
            }
        }
    }
    if(n>1)
    {
        if(cnt[n] == 0)
            factor.push_back(n);
        cnt[n]++;
    }
    for(auto i : factor)
    {
        cnt[i] *= m;
    }
    ll ans = 1;

    for(auto i : factor)
    {
        ll kk = binpow(i,cnt[i]+1);
        kk--;
        if(kk < 0)
            kk += MOD;
        ll jj = mod_inv(i-1,MOD);
        kk *= jj;
        ans = ((ans%MOD) * (kk%MOD))%MOD;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,Case = 1;
    cin >> t;
    ll n = 0,m = 0;
    while(t--)
    {
        cin >> n >> m;
        cout << "Case " << Case++ << ": ";
        solve(n,m);
    }

    return 0;
}

