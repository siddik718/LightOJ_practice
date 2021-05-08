#include<bits/stdc++.h>
#define ll long long int

using namespace std;

const int maxN = 1000001;

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

int main()
{
    sieve();
    int t,n,cnt = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << "Case " << cnt++ << ": " << NOD(n) - 1 << "\n";

    }
return 0;
}

