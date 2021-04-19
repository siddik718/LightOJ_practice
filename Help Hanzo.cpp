#include<bits/stdc++.h>
#define ll long long int
#define N 46345
using namespace std;
vector <bool> ar(N+1,true);
vector <ll> v;
void sieve(){
for(ll i = 2;i*i<=N;i++){
    if(ar[i])
        for(ll j=i*i;j<=N;j+=i)
        ar[j] = false;
}
for(ll i = 2;i<=N;i++){
    if(ar[i])
        v.push_back(i);
}
}
ll seg_sieve(ll L,ll R){
    ll cnt = 0;
vector <ll> seg;
for(ll i= L;i<=R;i++){
    seg.push_back(i);
}
if(L == 0)
    seg[1] = 0;
else if(L == 1)
    seg[0] = 0;
for(auto i:v){
    ll start = i*i;
    if(start<L)
        start = ((L+i-1)/i)*i;
for(ll j = start;j<=R;j+=i)
    seg[j-L] = 0;
}

for(ll i = L;i<=R;i++){
    if(seg[i-L] != 0)
      cnt++;
}
return cnt;
}
int main(){
    sieve();
ll t,l,r,cnt = 1;
cin >> t;
while(t--){
    cin >> l >> r;
    cout << "Case " << cnt++ << ": ";
   cout << seg_sieve(l,r) << endl;
}
return 0;
}
