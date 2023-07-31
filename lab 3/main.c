#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
    //question 1
    int n1,n2,highest;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        highest =n1;
        printf("highest=%d",n1);
    }else{
        highest =n2;
        printf("highest=%d",n2);
    }

    //question 2
    int no1,no2,no3,max,min;
    printf("Enter three numbers:");
    scanf("%d %d %d",&no1,&no2,&no3);
    //largest number
    if(no1>no2 && no1>no3){
        max =no1;
    }else if(no2>no2 && no2>no3){
        max =no2;
    }else{
        max =no3;
    }
    //smallest number
    if(no1<no2 && no1<no3){
        min =no1;
    }else if(no2<no2 && no2<no3){
        min =no2;
    }else{
        min =no3;
    }
    printf("Largest =%d\n",max);
    printf("Smallest =%d\n",min);

    //question 3
    char empname[25];
    float bs,inc,ns;
    printf("Enter Employee name:");
    scanf("%s",&empname);
    printf("Enter basic salary:");
    scanf("%f",&bs);
    if(bs>=10000){
        inc =bs*0.15;
    }else if(bs<5000){
        inc=bs*0.05;
    }else{
        inc=bs*0.1;
    }
    ns=bs+inc;
    printf("Employee name:%s\n",empname);
    printf("New salary:%.2f",ns);

    // question 4
    float radius;
    printf("Enter radius value:");
    scanf("%f",&radius);
    printf("Dimeter =%.2f\n",2*radius);
    printf("Circumferece =%.2f\n",2*PI*radius);
    printf("Area =%.2f\n",PI*radius*radius);

    // question 5
    int no1,no2,no;
    printf("Enter two numbers:");
    scanf("%d %d",&n01,&no2);
    no=no1%no2;
    if(no==0){
        printf("%d is a multiple of %d\n",no1,no2);
    }else{
        printf("%d is not a multiple of %d\n",no1,no2);
    }

    // question 6
    // uppercase letter
    printf("Integer equivalents of uppercace letters:\n");
    for(char c = 'A';C <= 'Z';c++){
        printf(" %c:%d\n",c,(int)c);
    }
    //lowercase letters
    printf("Integer equivalents of lowercace letters:\n");
    for(char c = 'a';C <= 'z';c++){
        printf(" %c:%d\n",c,(int)c);
    }
    //Digits
    printf("Integer equivalents of Digits:\n");
    for(char c = '0';C <= '9';c++){
        printf(" %c:%d\n",c,(int)c);
    }
    //special symbols
    printf("$:%d\n",(int)'$');
    printf("*:%d\n",(int)'*');
    printf("+:%d\n",(int)'+');
    printf("/:%d\n",(int)'/');

    //Blank character
    printf("Integer equivalents of the blank character:\n");
    printf("Blank:%d\n",(int)'');

    // question 7
    char name[30];
    char dis;
    float bs,gmr,all;
    int wy;
    printf("Enter salesman name:");
    scanf("%s",&name);
    printf("Enter basic salary:");
    scanf("%f",&bs);
    if(ms<2500){
        bons=bs*0.1;
    }else if(ms<5000){
        bons=bs*0.12;
    }else{
        bons=bs*0.1;
    }
    gmr=bs+bons;
    printf("grossmr=%.2f\n",gmr);
    printf("Enter work year:");
    scanf("%d",&wy);
    if(wy ==5){
        all=bs*0.1;
        gmr =gmr +all;
        printf("grossmr = %.2f",gmr);
    }
    printf("Enter work district:");
    scanf("%s",&city);
    if(city =='C'){
        printf("Saleman working in colombo");
    }
    return 0;
}
