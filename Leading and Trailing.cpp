#include<bits/stdc++.h>

using namespace std;

long int binpow(long long a,long long b)
{
    long int res = 1;
    while(b>0)
    {
        if(b&1)
            res = (res*a)%1000;
        a = (a*a)%1000;
        b >>= 1;
    }
    return res;
}

int main()
{
    int t,k,cnt = 1;
    long long n;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;

        long double x = (double)k * log10(n);
        long double y = x - floor(x + 1e-9);

        long int lead = pow(10,y)*100;

        long int trail = binpow(n,k);

        cout << "Case " << cnt++ << ": ";
        printf("%03ld %03ld\n",lead,trail);
    }

    return 0;
}
