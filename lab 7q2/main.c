#include<stdio.h>
int main()
{
    int a[3][3]={{3,2,4},{1,4,6},{4,3,2}};int b[3][3]={{2,6,3},{4,3,2},{5,1,7}};int c[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

   printf("\n\n");

   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           printf("%d\t",b[i][j]);
       }
       printf("\n");
   }
   printf("\n\n");

   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           c[i][j]=a[i][j]+b[i][j];
           printf("%d\t",c[i][j]);
       }
       printf("\n");
   }
   return 0;
}
