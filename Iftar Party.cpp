#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll t,P,L,Q,cnt = 1;
  cin >> t;
  while(t--){
    cin >> P >> L;
    cout << "Case " << cnt++ << ":";
    if(P == 0 && L == 0){
        cout << " 1\n";
        continue;
    }
    Q = P-L;
    if(Q<=L){
        cout << " impossible\n";
        continue;
    }
    vector <ll> result;
    for(ll i = 1;i<=sqrt(Q);i++){
        if(Q%i==0){
            result.push_back(i);
            if(Q/i != i)
            result.push_back(Q/i);
        }
    }
    sort(result.begin(),result.end());
    for(ll i = 0;i<result.size();i++){
        if(result[i]>L){
            cout << " " << result[i];
        }
    }
    cout << endl;
  }
return 0;
}
