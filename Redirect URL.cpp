#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,cnt = 1;
    string s;
    
    cin >> t;
    getchar();
    
    while(t--)
    {
        getline(cin,s);
        if(s[4] != 's')
        {
            s.insert(4,"s");
        }
        cout <<  "Case " << cnt++ << ": " <<  s << endl;
    }
    return 0;
}
