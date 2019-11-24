#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100], s1[10]="bubble", s2[10] = "tapioka";
    int flag = 0;
    for(int i=0;i<3;i++)
    {
        scanf("%s", arr);
        if(strcmp(arr, s1) != 0 && strcmp(arr, s2) != 0)
        {
            if(flag != 0)
                printf(" ");
            printf("%s", arr);
            flag = 1;
        }
    }
    if(flag == 0)
        printf("nothing");
    printf("\n");
    return 0;
}
