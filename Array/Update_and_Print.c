#include<stdio.h>
int main ()
{
    int n,i;
    scanf("%d",&n);
    int A[ n ];
    for( i = 0 ; i <n ; i++)
    {
        scanf("%d ",&A[i]);
    }
    int x,v;
    scanf("%d %d",&x,&v);
    for ( i = n-1 ; i >= 0 ; i--)
    {
        if (  i == x)
        {
            A[ x ] = v;
        }
        printf("%d ",A[i]);
    }

    return 0;
}