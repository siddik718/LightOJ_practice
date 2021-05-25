/**
solving: nCr = n!/(r!(n-r)!). find the number of 2 and 5 in this as you know the method.
now p^k = find number of 2 and 5 id p then multiply them by k . ex: 10^2 = factorize(10,2) = 1,factorize(10,5) = 1,factorize(100,2) = 2,factorize(100,5) = 2.

**/
#include<bits/stdc++.h>

using namespace std;

int factorial(int n,int x)
{
    int cnt = 0;
    while(n>0)
    {
        cnt += n/x;
        n /= x;
    }
    return cnt;
}

int power(int n,int x)
{
    int cnt = 0;
    while(n%x == 0)
    {
        cnt++;
        n /= x;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,r,p,q,cnt = 1,a,b,c,d,e,f,g,h,i;
    cin >> t;
    while(t--)
    {
        cin >> n >> r >> p >> q;
        a = n-r;
        b = factorial(n,2);
        c = factorial(n,5);
        d = factorial(r,2);
        e = factorial(r,5);
        f = factorial(a,2);
        g = factorial(a,5);
        h = power(p,2)*q;
        i = power(p,5)*q;
        int mn = b+h-d-f;
        int mx = c+i-e-g;
        int res = min(mn,mx);
        cout << "Case " << cnt++ << ": ";
        cout << res << "\n";
    }
    return 0;
}
