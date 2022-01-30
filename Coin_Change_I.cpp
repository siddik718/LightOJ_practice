#include<bits/stdc++.h>
using namespace std;
const int mod = 1e8+7;
int dp[55][1005];
int a[55],c[55],n;
int DP(int k,int i){
    if(i>=n){
        return k==0;
    }
    if(dp[i][k] != -1)return dp[i][k];
    int res = 0;
    for(int m = 1;m<=c[i];m++){
        if(k-(a[i]*m)>=0){
            res += DP(k-(a[i]*m),i+1);
            res %= mod;
        }else break;
    }
    res += DP(k,i+1);
    res %= mod;
    return dp[i][k] = res;//(res)%mod;
}
void solve(){
    int k;cin >> n >> k;
    for(int i = 0;i<n;i++)cin >> a[i];
    for(int i = 0;i<n;i++)cin >> c[i];
    cout << DP(k,0) << endl;
}
int main(){
    int T;cin >> T;
    for(int i = 1;i<=T;i++){    
        memset(dp,-1,sizeof(dp));
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}