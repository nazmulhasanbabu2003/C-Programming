#include<stdio.h>
void fun( int n)
{
    if ( n==0) return ;
    int x = n%10;
    fun(n/10);
    printf("%d ",x);
}
int main ()
{
    int test;
    scanf("%d",&test);
    for(int i =0 ; i < test ; i++)
    {
       long long int n;
    scanf("%lld",&n);
    fun(n);
    if ( n== 0)
    {
        printf("0");
    }
    printf("\n");
    }
    return 0;
}
// {
//     int n;
//     scanf("%d",&n);
//   do
//     {
//     printf("%d ",n%10);
//     n = n/10;
//     }
//     while (n!=0);
//     printf("\n");
//     return 0;
// }
