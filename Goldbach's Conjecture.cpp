#include <bits/stdc++.h>
#define N 10000005
using namespace std;
bool arr[N];
void sieve(){
for(int i = 2;i*i<=N;i++){
    if(!arr[i]){
        for(int j = i*i;j<=N;j+=i)
            arr[j] = 1;
    }
}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t,n,a,b,cnt,ct = 1;
    scanf("%d",&t);
    while(t--){
        cnt = 0;
        scanf("%d",&n);
        for(int i = 2;i<=n/2;i++){
            if(!arr[i]){
                a = i;
                b = n-a;
                if(!arr[b])
                    cnt++;
            }
        }
        printf("Case %d: %d\n",ct++,cnt);
    }
    return 0;
}
