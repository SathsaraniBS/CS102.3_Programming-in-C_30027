#include <stdio.h>
#include <stdlib.h>

int main()
{
    //question 1
    int age;
    printf(" HI , HOW OLD ARE YOU?\n");
    printf(" WELCOME (age)\nLET'S BE FRIENDS\n");


    printf(" WELCOME\nLET'S BE FRIENDS\n");
    //question 2
    printf(" %d %d %d\n" ,2,4,8);
    printf(" %d %d %d\n" ,3,9,27);
    printf(" %d %d %d\n" ,4,16,64);
    printf(" %d %d %d\n" ,5,25,125);

    printf(" %5d %5d %5d\n" ,2,4,8);
    printf(" %-5d %-5d %-5d\n" ,2,4,8);
    printf(" %5d %5d %5d\n" ,3,9,27);
    printf(" %-5d %-5d %-5d\n" ,3,9,27);
    printf(" %5d %5d %5d\n" ,4,16,64);
    printf(" %-5d %-5d %-5d\n" ,4,16,64);
    printf(" %5d %5d %5d\n" ,5,25,125);
    printf(" %-5d %-5d %-5d\n" ,5,25,125);

    //question 3
    float dit,time;
    float avs;
    printf("Enter distance travelled in miters :");
    scanf("%f",&dit);
    printf("Enter time in second :");
    scanf("%f",&time);
    avs = dit/time;
    printf("average speed is %.2f ",avs);

    //question 4
    float converttoFahrenheit(float Fahrenheit) {
    return (Fahrenheit - 32)*(5/9);
    }
    float Fahrenheit ;
    Fahrenheit = 68;
    printf(" %.2f F = %.2f C \n",Fahrenheit);
    Fahrenheit = 150;
    printf(" %.2f F = %.2f C \n",Fahrenheit);
    Fahrenheit = 212;
    printf(" %.2f F = %.2f C \n",Fahrenheit);
    Fahrenheit = 0;
    printf(" %.2f F = %.2f C\n ",Fahrenheit);
    Fahrenheit = -22;
    printf(" %.2f F = %.2f C\n ",Fahrenheit);
    Fahrenheit = -200;
    printf(" %.2f F = %.2f C\n ",Fahrenheit);


    return 0;
}
