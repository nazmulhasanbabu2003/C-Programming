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
    int pos, val;
    scanf("%d %d",&pos,&val);
    for( int i = n ; i >= pos +1 ; i--)
    {
        A[i] = A[ i -1 ];
    }
    A [ pos] = val;
    for( int i = 0 ; i <= n ; i++)
    {
         printf("%d ",A[i]);
    }
    return 0;
}
