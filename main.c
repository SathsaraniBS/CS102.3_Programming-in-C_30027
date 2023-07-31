#include <stdio.h>
#include <stdlib.h>

int main()
{
    // question 1
    printf("Sanduni Satthsarani\n Sripalee College Horana\n");

    // question 2
    printf("*\n**\n***\n****\n*****\n");

    // question 3
    int a;
    float b;
    double c;
    char d;
    printf("Enter an integer:");
    scanf("%d",&a);

    printf("Enter a float:");
    scanf("%f",&b);

    printf("Enter a double:");
    scanf("%lf",&c);

    printf("Enter a character:");
    scanf(" %c",&d);

    printf("Value of integer:%d\n",a);
    printf("Value of float:%.2f\n",b);
    printf("Value of double:%lf\n",c);
    printf("Value of char:%c\n",d);

    // question 4
    int n1,n2,total;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    total=n1+n2;
    printf("Total=%d",total);

    // question 5
    float no1,no2,avg;
    printf("Enter two numbers");
    scanf("%d %d ",&no1,&no2);
    avg=(no1+no2)/2.0;
    printf("Average=%.2f\n",avg);

    // question 6
    char name [30];
    int byear,currentyear,age;
    printf("Enter student name");
    scanf("%s",&name);
    printf("Enter currentyear:");
    scanf("%d",&currentyear);
    printf("Enter birth year:");
    scanf("%d",&byear);
    age=currentyear-byear;
    printf("Age = %d\n",age);

    // question 7

    int num1,num2,temp;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    printf("\n before swap:\n");
    printf("first number:%d\n",num1);
    printf("second number:%d\n",num2);

    // swap the value
    temp=num1;
    num1=num2;
    num2=temp;

    printf("\n after swap\n");
    printf("first number:%d\n",num1);
    printf("second number:%d\n",num2);

    return  0;
}
