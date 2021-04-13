#include<bits/stdc++.h>
using namespace std;
int main(){
 int t,cnt = 1;
 long long n=0,m=0,w=0;
  scanf("%d",&t);
  while(t--){
    scanf("%lld",&w);
    if(w%2==0){
       n = w/2;
       m = 2;
       while(n%2 == 0){
        n /= 2;
        m *= 2;
       }
       printf("Case %d: %lld %lld\n",cnt++,n,m);
    }
    else
    printf("Case %d: Impossible\n",cnt++);
  }
  return 0;
}
