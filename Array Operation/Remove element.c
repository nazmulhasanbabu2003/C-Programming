#include<stdio.h>
int main ()
{
    int n,i;
    scanf("%d",&n);
    int A[ n ];
    for( int i = 0; i < n ; i++)
    {
        scanf("%d",&A[ i ]);
    }
    int pos;
    scanf("%d",&pos);
    for( int i = pos ; i < n -1; i++)
    {
        A[i ] = A[ i + 1 ];
    }
    for( int i = 0 ; i <n-1 ; i++)
    {
         printf("%d ",A[i]);
    }
    return 0;
}
