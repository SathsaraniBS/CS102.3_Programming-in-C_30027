#include <stdio.h>
#include <stdlib.h>
int main()
{
    // question 1
    int num, pcount=0, ncount=0, zeros=0;
    for (int i=1 ; i<=10 ; i++)
    {
        printf("Enter %d number : ", i);
        scanf("%d", &num);
        if (num>0){
                pcount++;
        }else if (num==0){
            zeros++;
        }else{
            ncount++;
        }
    }
    printf ("Number of positive numbers : %d\nNumber of negative numbers :%d\nNumber of zeros : %d", pcount, ncount, zeros);

    // question 2

    int mark, max, min, tot;
    float avg;
    printf("Enter 1 mark :");
    scanf("%d",&mark);
    max = mark;
    min = mark;
    tot=mark;
    for (int i = 2 ; i<=10 ; i++)
    {
        printf("Enter %d mark :", i);
        scanf("%d",&mark);
        if (mark>max)
        {
            max=mark;
        }
        if (mark<min)
        {
            min=mark;
        }
        tot+=mark;
    }
    avg = (float) tot/ 10.00;
    printf ("\nMaximum mark : %d\n", max);
    printf ("Minimum mark : %d\n", min);
    printf ("Average marks : %.2f\n", avg);


     // question 3

    float price, av, t=0.00;
    int count=0;
    for (int i=1 ; i<=10 ; i++)
    {
        printf("Enter the %d price : ", i);
        scanf("%f", &price);
        t+=price;
        if (price>200.00)
        {
            count++;
        }
    }
    avg = tot /10.00;
    printf("\nAverage value of an item : %.2f\n", av);
    printf("Number of items has the price greater than 200 : %d", count);

    // question 4

    int empno, bsalary, co=0;
    printf("Enter the employee number : ");
    scanf ("%d", &empno);
    while (empno!=-999)
    {
        printf("Enter basic salary : ");
        scanf ("%d", &bsalary);
        if (bsalary>=5000)
        {
            co++;
        }
        printf("Enter the employee number : ");
        scanf ("%d", &empno);
    }
    printf("\nNumber of employees with over 5000 salary : %d", co);

     // question 5

   int eno, nhours, otpay, percentage, empcount=0, c=1;
   printf("Enter employee number : ");
   scanf("%d", &eno);
   while (eno!=-999)
   {
    printf("Enter number of hours worked :");
    scanf("%d", &nhours);
    if (nhours>40)
    {
        otpay = nhours*200;
    }
    else
    {
        otpay = nhours*150;
    }
    if (otpay>4000)
    {
        c++;
    }
    percentage = ((float)c/(float)empcount)*100;
    empcount++;
    printf("Employee number : %d\nOvertime payment :%d\nPercentage : %d%%",empno, otpay, percentage);
    printf("\nEnter employee number : ");
    scanf("%d", &empno);
    }
return 0;
}
