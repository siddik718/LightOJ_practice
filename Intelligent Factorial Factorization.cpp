
#include<bits/stdc++.h>
using namespace std;
#define N 100
vector<int> prime;
bool isprime[N+2];
void sieve()
{
    memset(isprime,true,sizeof(isprime));

    for(int i = 3;i*i<=N;i+=2)
    {
        if(isprime[i])
        {
            for(int j = i*i;j<=N;j+=i+i)
            {
                isprime[j] = false;
            }
        }
    }
    prime.push_back(2);
    for(int i = 3;i<=N;i+=2)
    {
        if(isprime[i])
        {
            prime.push_back(i);
        }

    }
}
void factorize(int n)
{
for(int p:prime)
{
    if(p>n) break;
    else if(p>2){
        printf(" * ");
    }
    int  x = n;
    int freq = 0;
    while(x/p)
        {
            freq += x/p;
            x /= p;
        }
    printf("%d (%d)",p,freq);
}
}
int main()
{
    sieve();
   int  n,t,tt = 1;
   scanf("%d",&t);
   while(t--){
   scanf("%d",&n);
   printf("Case %d: %d = ",tt++,n);
   factorize(n);
   cout << "\n";
   }
    return 0;
}
