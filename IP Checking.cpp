#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll binTodec(char s[]){
ll d = 1,sum = 0 ,n = strlen(s);
for(ll i = n-1;i>=0;i--){
    if(s[i] == '1')
        sum += d;
    d *=2;
}
return sum;
}
int main(){
char a[10002],b[10002],c[10002],d[10002];
int x,y,z,m,a1,b1,c1,d1,cnt = 1,t;
scanf("%d",&t);
while(t--){
scanf("%d.%d.%d.%d",&x,&y,&z,&m);
scanf("%8s.%8s.%8s.%8s",a,b,c,d);
a1 = binTodec(a);
b1 = binTodec(b);
c1 = binTodec(c);
d1 = binTodec(d);
printf("Case %d: ",cnt++);
if((a1==x) && (b1==y) && (c1==z) && (d1==m))
    printf("YES\n");
else
    printf("NO\n");
}
return 0;
}
