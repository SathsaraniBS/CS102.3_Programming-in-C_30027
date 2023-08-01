#include <stdio.h>
#include <stdlib.h>

int main()
{
    // question 1
    int x[3][3],y[3][3],sum[3][3],r,c;
    printf("Enter  values for x :\n");
    for(r=0;r<3;r++){
            for(c=0;c<3;c++){
                printf("Enter a value at place[%d] [%d]:",r+1,c+1);
                scanf("%d",&x[r][c]);
        }
    }
    //display(nested for loops)
    //input(nested for loops)
    printf("Enter  values for y :\n");
    for(r=0;r<3;r++){
            for(c=0;c<3;c++){
                printf("Enter a value at place[%d] [%d]:",r+1,c+1);
                scanf("%d",&y[r][c]);
       }

    }
    printf("Sum :\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d\t",&sum[r][c]);
       }
    }
    printf("\n");
   return 0;
}




