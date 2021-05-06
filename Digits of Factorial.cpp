#include<bits/stdc++.h>

using namespace std;

const double eps = 1e-9;
const int maxN = 1e6+10;
double arr[maxN];
void solve()
{
    arr[0] = 0.0;
    for(int i =1;i<=maxN-10;i++)
    {
        arr[i] = arr[i-1] + log10(i);
    }
}
int main()
{
    solve();

    int t,n,m,cnt = 1;

    cin >> t;

    while(t--)
    {
        cin >> n >> m;

        int res = arr[n]/log10(m) + 1;

        cout << "Case " << cnt++ << ": " << res << "\n" ;
    }
    return 0;
}
