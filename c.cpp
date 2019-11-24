#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)scanf("%d",&x[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(i!=j&&j!=k&&i!=k)
                {
                    if((x[i]-x[j])%x[k]!=0)flag=1;
                    //printf("%f %f\n",tmp,(float)t);
                }
            }
        }
    }
    if(flag==0)printf("yes\n");
    else printf("no\n");
    return 0;
}
