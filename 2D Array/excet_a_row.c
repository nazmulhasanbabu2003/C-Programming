#include<stdio.h>
int main ( )
{
    int row,colom;
    scanf("%d %d",&row,&colom);
    int a[row] [colom];
    for ( int i = 0 ; i < row ; i++)
    {
        for ( int j = 0 ; j < colom ; j++)
        {
            scanf("%d",&a[i] [j]);
        }
    }
    int excet;
    scanf("%d",&excet);
     for ( int i = 0 ; i < row ; i++)
     {
         printf("%d\n",a [i][excet]);
     }
    return 0;
}

