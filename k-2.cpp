#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ncase,n;
    scanf("%d",&ncase);
    priority_queue<int, vector<int>, greater<int> > pq;
    while(ncase--)
    {
        scanf("%d",&n);
        int x[n], ans=0;
        while(pq.empty()!= 1)
            pq.pop();
        for(int i=0;i<n;i++){
                scanf("%d",&x[i]);
            pq.push(x[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            int a1=pq.top();
            pq.pop();
            int a2 = pq.top();
            pq.pop();
            ans += a1+ a2;
            pq.push(a1+a2);
        }
        printf("%d\n", ans);
    }
    return 0;
}
