#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int slove(int l,int r,int x[])
{
    if(dp[l][r]!=-1)return dp[l][r];
    else if(r-l==1)return dp[l][r]=x[l]+x[r];
    else if(r-l==0)return dp[l][r]=0;
    int m=INT_MAX,i;
    for(int i=l;i<r;i++)
    {
        int sum=0;
        for(int j=l;j<=r;j++)sum+=x[j];
        m=min(m,(slove(l,i,x)+slove(i+1,r,x)+sum));
    }
    return dp[l][r]=m;
}
int main()
{
    int ncase,n;
    scanf("%d",&ncase);
    while(ncase--)
    {
        scanf("%d",&n);
        int x[n];
        for(int i=0;i<n;i++)scanf("%d",&x[i]);
        memset(dp,-1,sizeof(dp));
        sort(x,x+n);
        printf("%d\n",slove(0,n-1,x));
    }
    return 0;
}
