#include<bits/stdc++.h>
using namespace std;
typedef struct pu
{
    int len, dir, x, y, state;
} Pu;
struct ac{

    pu car;
    int x,y;
};
int main()
{
    stack <Pu> st;
    int arr[6][6];
    for(int i=0; i<6; i++)
        for(int  j=0; j<6; j++)
            scanf("%d", &arr[i][j]);
    Pu pu[15];
    memset(pu, 0, sizeof(pu));
    for(int i=0; i<6; i++)
        for(int j=0; j<6; j++)
        {
            if(pu[arr[i][j]].len == 0)
            {
                pu[arr[i][j]].x = i;
                pu[arr[i][j]].y = j;
            }
            else if(pu[arr[i][j]].len == 1)
            {
                if(j == pu[arr[i][j]].y)
                    pu[arr[i][j]].dir = 1;
            }
            pu[arr[i][j]].len++;
        }

    step=6-pu[1].x;
    st.push(pu[1]);
    while(1)
    {
        if(st.top().dir==0)
        {
            for(int i=st.top().y+len; i<6; i++)
            {
                {
                    if(arr[i][st.top().x]!=0)
                    {
                        if()
                        step+=
                    }
                }
            }
        }


        return 0;
    }
