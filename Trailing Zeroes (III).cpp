#include<bits/stdc++.h>
#define ll long long int
using namespace std;
/**
    First create a function for finding the trailing zero of
    a number , then use binary search to find the ans;
**/
ll trailing_zero(ll n)
{
    ll p = 5,cnt = 0;
    while(p<=n)
    {
        cnt += n/p;
        p *= 5;
    }

    return cnt;
}

const ll limit = 1e18;
int main()
{
    ll n,t,cntt = 1;
    scanf("%lld",&t);
    while(t--)
    {
       scanf("%lld",&n);
       printf("Case %d:",cntt++);
       ll left = 1,right = limit,ans = 0;
       while(left<=right)
       {
           ll mid = left+((right-left)/2);
        // not using mid = (left+right)/2 as it could be an overflow.
           ll p = trailing_zero(mid);
           if(p>n)
           {
                right = mid-1;
           }
           else if(p<n)
           {
                left = mid+1;
           }
           else
           {
                ans = mid;
                right = mid-1;
           }
       }
       if(ans != 0)
       {
            printf(" %d\n",ans);
       }
       else
       {
            printf(" impossible\n");
       }
    }
    return 0;
}
