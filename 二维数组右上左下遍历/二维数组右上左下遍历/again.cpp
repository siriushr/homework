#include<stdio.h>
int main()
{
    int a[100][100];
    int i,j,m,n,p;
    
    int k;
    scanf("%d", &k);
    
    while (k--) {

    scanf("%d%d", &m, &n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(p=0;p<m+n-1;p++)
    {
        for(i=0;i<=p;i++)
        {
            if(i<m&&p-i<n)
            {
                printf("%d\n", a[i][p-i]);
            }
            else
                continue;
        }
    }
    }
    return 0;
}