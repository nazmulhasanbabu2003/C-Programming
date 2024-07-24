#include<stdio.h>
#include<limits.h>
int main ()
{
    int n,i ;
    scanf("%d",&n);
    int A[n];
    for( i = 1; i <n; i++)
    {
        scanf("%d",&A[i]);
    }
    int mn = INT_MAX,psn;
    for( i = 1 ; i < n ; i ++)
    {
        if ( A[i] < mn)
        {
            mn = A[i];
            psn = i;
        }
    }
    printf("%d %d",mn,psn);
    return 0;
}