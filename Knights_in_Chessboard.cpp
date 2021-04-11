#include<bits/stdc++.h>
using namespace std;
int main(){
int t,m,n,cnt=1,result = 0;
scanf("%d",&t);
while(t--){
scanf("%d %d",&m,&n);
if(m==1 || n == 1)
        result = max(m,n);
else if(m==2 || n == 2)
    result = ((n*m)/8)*4 + ((((m*n)%8)>=4)?4:(m*n)%8);
else
    result = (((m*n)+1)/2);
printf("Case %d: %d\n",cnt++,result);
}
return 0;
}
