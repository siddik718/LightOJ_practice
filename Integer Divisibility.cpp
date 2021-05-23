#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,digit,c = 1;
    cin >> t;
    while(t--)
    {
        cin >> n >> digit;
        cout << "Case " << c++ << ": ";
        int ans = 0,cnt = 0;
        do{
            ans = ((ans%n*10%n)%n + digit%n)%n;
            cnt++;

        }while(ans != 0);

        cout << cnt << "\n";
    }
    return 0;
}
