#include<bits/stdc++.h>
using namespace std;
bool z;
void fucku(int dep,int a11,int a12,int a13,int a14,int a15,int a16,int a21,int a22,int a23,int a24,int a25,int a26,int a31,int a32,int a33,int a34,int a35,int a36,int a41,int a42,int a43,int a44,int a45,int a46,int a51,int a52,int a53,int a54,int a55,int a56,int a61,int a62,int a63,int a64,int a65,int a66)
{
    if (a36 == 1 && dep <= 8){
        printf("%d\n",dep + 2);
        z = true;
        return;
        }
int k;
    int a[7][7];
    a[1][1] = a11;
    a[1][2] = a12;
    a[1][3] = a13;
    a[1][4] = a14;
    a[1][5] = a15;
    a[1][6] = a16;
    a[2][1] = a21;
    a[2][2] = a22;
    a[2][3] = a23;
    a[2][4] = a24;
    a[2][5] = a25;
    a[2][6] = a26;
    a[3][1] = a31;
    a[3][2] = a32;
    a[3][3] = a33;
    a[3][4] = a34;
    a[3][5] = a35;
    a[3][6] = a36;
    a[4][1] = a41;
    a[4][2] = a42;
    a[4][3] = a43;
    a[4][4] = a44;
    a[4][5] = a45;
    a[4][6] = a46;
    a[5][1] = a51;
    a[5][2] = a52;
    a[5][3] = a53;
    a[5][4] = a54;
    a[5][5] = a55;
    a[5][6] = a56;
    a[6][1] = a61;
    a[6][2] = a62;
    a[6][3] = a63;
    a[6][4] = a64;
    a[6][5] = a65;
    a[6][6] = a66;
    int flag = 0,x;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            flag = 0;
            if (a[i][j] == a[i][j + 1])
            {
                x = j;
                flag = 1;
                if (a[i][j - 1] == 0 && j != 1)
                {
                    for (k = j;;k++)
                        if (a[i][k] != a[i][k + 1])
                    {
                        a[i][j - 1] = a[i][j];
                        a[i][k] = 0;
                        j = k;
                        break;
                    }/*left*/
                    fucku(dep + 1,a[1][1],a[1][2],a[1][3],a[1][4],a[1][5],a[1][6],a[2][1],a[2][2],a[2][3],a[2][4],a[2][5],a[2][6],a[3][1],a[3][2],a[3][3],a[3][4],a[3][5],a[3][6],a[4][1],a[4][2],a[4][3],a[4][4],a[4][5],a[4][6],a[5][1],a[5][2],a[5][3],a[5][4],a[5][5],a[5][6],a[6][1],a[6][2],a[6][3],a[6][4],a[6][5],a[6][6]);
                    a[i][j - 1] = 0;
                    a[i][k] = a[i][j];
                }
            }
            if (flag)
            {/*right*/
                if (j < 6 && a[i][j + 1] == 0)
                {
                    a[i][j + 1] == a[i][j];
                    a[i][x] = 0;
                    fucku(dep + 1,a[1][1],a[1][2],a[1][3],a[1][4],a[1][5],a[1][6],a[2][1],a[2][2],a[2][3],a[2][4],a[2][5],a[2][6],a[3][1],a[3][2],a[3][3],a[3][4],a[3][5],a[3][6],a[4][1],a[4][2],a[4][3],a[4][4],a[4][5],a[4][6],a[5][1],a[5][2],a[5][3],a[5][4],a[5][5],a[5][6],a[6][1],a[6][2],a[6][3],a[6][4],a[6][5],a[6][6]);
                    a[i][x] = a[i][j];
                    a[i][j + 1] = 0;
                }
            }
        }
    }

    for (int j = 1; j <= 6; j++)
    {
        for (int i = 1; i <= 6; i++)
        {
            flag = 0;
            if (a[i][j] == a[i + 1][j])
            {
                x = i;
                flag = 1;
                if (a[i - 1][j] == 0 && i != 1)
                {
                    for (k = i;;k++)
                        if (a[k][j] != a[k + 1][j])
                    {
                        a[i - 1][j] = a[i][j];
                        a[k][j] = 0;
                        i = k;
                        break;
                    }/*left*/
                    fucku(dep + 1,a[1][1],a[1][2],a[1][3],a[1][4],a[1][5],a[1][6],a[2][1],a[2][2],a[2][3],a[2][4],a[2][5],a[2][6],a[3][1],a[3][2],a[3][3],a[3][4],a[3][5],a[3][6],a[4][1],a[4][2],a[4][3],a[4][4],a[4][5],a[4][6],a[5][1],a[5][2],a[5][3],a[5][4],a[5][5],a[5][6],a[6][1],a[6][2],a[6][3],a[6][4],a[6][5],a[6][6]);
                    a[i - 1][j] = 0;
                    a[k][j] = a[i][j];
                }
            }
            if (flag)
            {/*right*/
                if (i < 6 && a[i + 1][j] == 0)
                {
                    a[i + 1][j] == a[i][j];
                    a[x][j] = 0;
                    fucku(dep + 1,a[1][1],a[1][2],a[1][3],a[1][4],a[1][5],a[1][6],a[2][1],a[2][2],a[2][3],a[2][4],a[2][5],a[2][6],a[3][1],a[3][2],a[3][3],a[3][4],a[3][5],a[3][6],a[4][1],a[4][2],a[4][3],a[4][4],a[4][5],a[4][6],a[5][1],a[5][2],a[5][3],a[5][4],a[5][5],a[5][6],a[6][1],a[6][2],a[6][3],a[6][4],a[6][5],a[6][6]);
                    a[x][j] = a[i][j];
                    a[i + 1][j] = 0;
                }
            }
        }
    }

}
int main()
{
    z = false;
    int a11,a12,a13,a14,a15,a16;
    int a21,a22,a23,a24,a25,a26;
    int a31,a32,a33,a34,a35,a36;
    int a41,a42,a43,a44,a45,a46;
    int a51,a52,a53,a54,a55,a56;
    int a61,a62,a63,a64,a65,a66;
    scanf("%d%d%d%d%d%d",&a11,&a12,&a13,&a14,&a15,&a16);
    scanf("%d%d%d%d%d%d",&a21,&a22,&a23,&a24,&a25,&a26);
    scanf("%d%d%d%d%d%d",&a31,&a32,&a33,&a34,&a35,&a36);
    scanf("%d%d%d%d%d%d",&a41,&a42,&a43,&a44,&a45,&a46);
    scanf("%d%d%d%d%d%d",&a51,&a52,&a53,&a54,&a55,&a56);
    scanf("%d%d%d%d%d%d",&a61,&a62,&a63,&a64,&a65,&a66);
    fucku(0,a11,a12,a13,a14,a15,a16,a21,a22,a23,a24,a25,a26,a31,a32,a33,a34,a35,a36,a41,a42,a43,a44,a45,a46,a51,a52,a53,a54,a55,a56,a61,a62,a63,a64,a65,a66);
    if (!z)
        printf("-1\n");
    return 0;
}
