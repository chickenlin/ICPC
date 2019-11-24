#include<bits/stdc++.h>
using namespace std;
long long exp_i(int i)
{
    long long ans = 1;
    for (int j = 0;j < i;j++)
        ans = ans * 2;
    return ans;
}
int main()
{
    int ncase;
    scanf("%d",&ncase);
    while (ncase--)
    {
        long long input;
        scanf("%lld",&input);
        long long ab = input * (input + 1);
        int i;
        long long ans = 0;
        for (i = 0;i < 100;i++)
        {
            if (ab & (exp_i(i)))
            {
                if ((input + 1) & exp_i(i))
                    ans = (ans | exp_i(i)) - exp_i(i);
                else
                    ans = ans | exp_i(i);
            }
            else
            {
                if ((input + 1) & exp_i(i))
                    ans = ans | exp_i(i);
                else
                    ans = (ans | exp_i(i)) - exp_i(i);
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}

