#include<stdio.h>
int main ()
{
    int n ;
    scanf("%d",&n);
    long long int A[n];
    for(int i = 0; i <n ; i++)
    {
        scanf("%lld",&A[i]);
    }
    long long int sum = 0;
    for ( int i = 0; i < n ; i++)
    {
        sum+= A[i];
    }
    if ( sum >= 0)
    {
         printf("%lld",sum);
    }
   else
   {
        printf("%lld",sum*-1);
   }
    return 0 ;
}