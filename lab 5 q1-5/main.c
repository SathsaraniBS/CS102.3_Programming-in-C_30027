#include <stdio.h>
#include <stdlib.h>
int main()
//1.1 while loop
{
    // question 1
    //while loop
    int a=1;
    while (a<=100)
    {
        printf("%d\n ",a);
        a++;
    }


// do while loop
    int b = 1;
    do
    {
        printf ("%d\n ",b);
        b++;
    }while (b<=100);

    // For loop
    for(int c = 1; c<=100 ; c++)
    {
        printf("%d\n ",c);
    }

// question 2
    int count=1, marks, tot=0;
    float avg;
    for(count=1 ; count <=10 ; count++)
    {
        printf("Enter %d marks :", count);
        scanf("%d", &marks);
        tot = tot + marks;
    }
    avg = (float) tot / 10;
    printf("Total is : %d\n", tot);
    printf("Average = %.2f\n", avg);
    if (avg<50){
         printf("Fail!");
    }else{
        printf("Pass!");
    }
    // question 3
    int factorial=1, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num==0){
        printf("factorial=1");
    }else if (num>0){
        for (int i = 1 ; i<num ; i++)
        {
        factorial *=i;
        }
        printf("factorial = %d", factorial);
    }else {
        printf("You cannot calculate the factorial of a negative number!\n");
    }

     // question 4

    int n, mod, sum=0;
    printf("Enter a number :");
    scanf ("%d", &n);
    while (n>0)
    {
        mod = n % 10;
        sum = sum + mod;
        n = n / 10;
    }
    printf("The sum of the given digits : %d\n", sum);


    // question 5

    int no, m, s = 0;
    printf("Enter a number :");
    scanf ("%d", &no);
    do
    {
        m = no % 10;
        s = (s* 10) + m;
        no = no / 10;
    }while (no>0);
    printf("Reverse number of the entered number : %d\n", s);
    return 0;
}
