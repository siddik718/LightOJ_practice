#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll maxN = 1e6+100;

ll phi[maxN+200];
void totient()
{
    for(ll i = 1;i<=maxN;i++)
        phi[i] = i;
    for(ll i = 2;i<=maxN;i++)
    {
        if(phi[i] == i)
        {
            for(ll j = i;j<=maxN;j+=i)
            {
                phi[j] -= phi[j]/i;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    totient();
    ll t,n,k,cnt = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll sum = 0;
        while(n--)
        {
            cin >> k;
            for(ll i = k+1;;i++)
            {
                if(k <= phi[i])
                {
                    sum += i;
                    break;
                }
            }
        }
        cout << "Case " << cnt++ << ": " << sum << " Xukha\n";
    }
    return 0;
}
