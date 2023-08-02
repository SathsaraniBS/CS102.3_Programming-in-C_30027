#include <stdio.h>
#include <stdlib.h>
int main()
{
    // question 6
    int base, expo, power;
    printf ("Enter a base value : ");
    scanf ("%d", &base);
    printf("Enter a value for exponent : ");
    scanf("%d", &expo);
    power = base;
    for(int i = 1; i<expo; i++)
    {
        power = power * base;
    }
    printf("Power of a given base value %d and exponent %d : %d", base, expo, power);

     // question 7

    int n1=0, n2=1, n3;
    printf("First 10 numbers in Fibonacci Sequence : ");
    printf ("%d\t%d\t", n1, n2);
    for (int i=1 ; i<=8; i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d\t", n3);
    }


    // question 8

    char ch;
    printf("ASCII values for letters A to Z :\n");
    for (ch = 'A' ; ch <= 'Z' ; ch++)
    {
        printf ("%c : %d\t\t", ch, ch);
    }


     // question 9

    int x,y;
    for (x=1; x<=5 ; x++)
    {
        for (y=1; y<=x ; y++)
    {
    printf("*");
    }
    printf("\n");
    }


    // question 10

    int num, factor = 0;
    printf ("Enter a number :");
    scanf("%d", &num);
    printf("factors of the given number %d : ", num);
    for(int i = 1; i<=num ; i ++)
    {
        if (num%i==0)
        {
            factor++;
            printf ("%d\t", i);
        }
    }


   // question 11 1st way (with if else inside the loop)

   int n, sum =0;
   while (n!=-1)
   {
       printf("Enter a number : ");
       scanf ("%d", & n);
       if (n==-1){
            break;
       }else{
           sum+=n;
       }
   }
   printf("Total is : %d", sum);


    //2nd way (without if else structure inside the loop)

    int no, s =0;
    printf("Enter a number : ");
    scanf ("%d", & no);
    while (no!=-1)
    {
        s+=no;
        printf("Enter a number : ");
        scanf ("%d", & no);
    }
    printf("Total is : %d", s);

    // question 12

    int arr [10];
    for (int i=0; i<10; i++)
    {
        printf("Enter a number :");
        scanf("%d", &arr[i]);
    }
    printf("Elements you entered :");
    for (int a = 0 ; a<10 ; a++)
    {
        printf("%d\t", arr[a]);
    }


    // question 13

    int ar [10];
    int count;
    for (int i=0; i<10; i++)
    {
        printf("Enter a number :");
        scanf("%d", &ar[i]);
    }
    for (int i = 0 ; i<10 ; i++)
      {
         if (ar[i]%2==0)
        {
           count ++;
         }
      }
      printf ("number of even numbers you entered : %d", count);
    return 0;
}


