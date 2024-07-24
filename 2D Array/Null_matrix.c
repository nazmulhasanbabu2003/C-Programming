#include<stdio.h>
int main ()
{
    int row , colomn;
    scanf("%d %d",&row,&colomn);
    int a[row] [colomn];
    int element = row * colomn;
    for(int i = 0; i < row;i++)
    {
        for( int j = 0 ; j < colomn; j++)
        {
            scanf("%d",&a[i] [j]);
        }
    }
    int count = 0;
     for(int i = 0; i < row;i++)
    {
        for( int j = 0 ; j < colomn; j++)
        {
            if ( a[i] [j] == 0)
            {
                count++;
            }
        }
    }
     if ( element == count)
     {
         printf("NULL MATRIX");
     }
     else
     {
         printf("NOT NULL MATRIX");
     }
     return 0;
}
