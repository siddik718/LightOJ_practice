#include<bits/stdc++.h>
using namespace std;
int main(){
int t,cnt = 1;
string s;
cin >> t;
getchar();
while(t--){
    getline(cin,s);
    cout << "Case " << cnt++ << ": ";
    if(s[4] == 's')
    cout << s << endl;
    else{
            s.insert(4,"s");
        cout << s << endl;
    }
}
return 0;
}
