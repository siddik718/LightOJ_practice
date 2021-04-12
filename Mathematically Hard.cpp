#include<bits/stdc++.h>
#define ll long long int
#define llu unsigned long long int
#define N 5000000
using namespace std;
llu phi[N+2];

void euler(){
    phi[0] = 0;
for(int i = 1;i<=N;i++)
    phi[i] = i;
for(int i = 2;i<=N;i++)
    if(phi[i] == i)
    for(int j = i;j<=N;j+=i)
    phi[j] = phi[j]/i*(i-1);
}

llu sum[N+2];
void summation(){
     euler();
for(int i = 2;i<=N;i++){
    sum[i] = phi[i]*phi[i]+sum[i-1];
}
sum[0] = 0;
}
int main(){
   summation();
int t,a,b,cnt = 1;
cin >> t;
while(t--){
cin >> a >> b;
cout << "Case " << cnt++ << ": ";
cout << sum[b] - sum[a-1] << "\n";
}
return 0;
}








//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
