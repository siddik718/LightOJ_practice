#include<bits/stdc++.h>
using namespace std;
int main(){
int t,cnt=1;
scanf("%d",&t);
long long int b,sum;
while(t--){
  char a[10005];
        sum = 0;
    scanf("%s %lld",a,&b);
if(a[0] != '-'){
for(long long int i = 0;i<strlen(a);i++){
        int x = a[i] - 48 ;
sum =sum * 10 + x ;
sum = sum%b;
}
}
else{
for(long long int i = 1;i<strlen(a);i++){
    int x = a[i] - 48 ;
sum = sum*10 + x ;
sum = sum%b;
}
}
    if(sum == 0)
        printf("Case %d: divisible\n",cnt++);
    else
        printf("Case %d: not divisible\n",cnt++);
}
  return 0;
}
