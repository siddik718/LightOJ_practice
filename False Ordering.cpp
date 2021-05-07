#include<bits/stdc++.h>

using namespace std;
const int maxN = 1005;

vector <int> prime;
bool ok[maxN+10];
void sieve()
{
    memset(ok,true,sizeof(ok));
    for(int i = 3;i*i<=maxN;i+=2)
    {
        if(ok[i])
        {
            for(int j = i*i;j<=maxN;j+=i+i)
            {
                ok[j] = false;
            }
        }
    }
            prime.push_back(2);
    for(int i = 3;i<=maxN;i+=2)
    {
        if(ok[i])
        {
            prime.push_back(i);
        }
    }
}

int NOD(int n)
{
    int cnt = 0,pro = 1;
   for(int p : prime)
   {
       cnt = 0;
       if(p*p>n) break;
       while(n%p == 0)
       {
           cnt++;
           n/=p;
       }
      pro *= (cnt+1);
   }
   if(n > 1) pro *= 2;
   return pro;
}

bool cmp(int x,int y)
{
    int n = NOD(x);
    int m = NOD(y);
    bool res;
    if(n<m) res = 1;
    else if((n == m) && (x>y)) res = 1;
    else res = 0;
    return res;
}
int m[maxN+2];
void solve()
{
    for(int i = 0;i<=1005;i++)
    {
        m[i] = i;
    }
    sort(m+2,m+1001,cmp);
}

int main()
{
    sieve();
    solve();

    int t,n,cnt = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << "Case " << cnt++ << ": " << m[n] << "\n";
    }

    return 0;
}
