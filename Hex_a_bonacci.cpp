#include<bits/stdc++.h>
using namespace std;
int main() {
  long long t,n,i,cs;
  scanf("%lld",&t);
  for(cs = 1;cs<=t;cs++){
    long long hexafib[10009];
scanf("%lld %lld %lld %lld %lld %lld %lld",&hexafib[0],&hexafib[1],&hexafib[2],&hexafib[3],&hexafib[4],&hexafib[5],&n);
for(i=6;i<=n;i++){
hexafib[i]=(hexafib[i-1]+hexafib[i-2]+hexafib[i-3]+hexafib[i-4]+hexafib[i-5]+hexafib[i-6])%10000007;
}
 printf("Case %lld: %lld\n",cs,hexafib[n]%10000007);
  }
    return 0;
}
