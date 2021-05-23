#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,digit,c = 1;
    
    cin >> t;
    while(t--)
    {
        cin >> n >> digit;
        
        int ans = 0,cnt = 0;
        do{
            
            ans = ((ans%n*10%n)%n + digit%n)%n; // same as (ans*10+digit)%n.
            cnt++;

        }while(ans != 0);
        
        cout << "Case " << c++ << ": " << cnt << "\n";
    }
    return 0;
}
