#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input_j.in","r",stdin);
    int ncase;
    scanf("%d", &ncase);
    while(ncase--)
    {
        long long n, m,ans[40000],i,j,k,min_ans = 0x3f3f3f3f;
        bool total[40000],flag;
        char input[15][510];

        memset(ans,0,sizeof(ans));
        scanf("%lld %lld", &n, &m);

        for (i = 0; i < m; i++)
            scanf("%s",input[i]);

        for (i = 1; i <= (1 << m); i++) /* run all case */
        {
            //printf("11\n");
            flag = false;
            memset(total,false,sizeof(total));
            for (j = 0; j < m; j++)
            {
                //printf("22\n");
                if (i & (1 << j))/* the jth spring is taken */
                {
                    for (k = 0; k < n; k++)
                    {
                        if (input[j][k] == '1')
                            total[k] = true;
                    }
                    ans[i]++;
                    if (ans[i] >= min_ans)
                        {
                            flag = true;
                            break;
                        }
                }
            }
            if (flag)
                continue;
            for (j = 0; j < n; j++)
                if (total[j] == false)
                {
                    ans[i] = 0x3f3f3f3f;
                    break;
                }
            //printf("22");
            if (ans[i] < min_ans)
                min_ans = ans[i];
        }

        if (min_ans == 0x3f3f3f3f)
            printf("-1\n");
        else
            printf("%lld\n",min_ans);
    }
    return 0;
}
