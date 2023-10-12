//calculator
#include<stdio.h>
#include<math.h>

int e;
float a,b,c;


    int main()
    {

    start:
    printf("\nPlease select your choice:\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Divition \n5.Squar Root \n6.Power \n7.Exit\nPlease Input Your Choice here:");
    scanf("%d",&e);
    switch(e)
     {

           case 1:
            printf("\nEnter First Number:");
            scanf("%f",&a);
            printf("\nEnter Second Number:");
            scanf("%f",&b);
            c=a+b;
            printf("\nThe Addition result of %0.2f and %0.2f is:%0.2f\n\n============================================",a,b,c);
            break;
             case 2:
             printf("\nEnter First Number:");
            scanf("%f",&a);
            printf("\nEnter Second Number:");
            scanf("%f",&b);
            c=a-b;
            printf("\nThe Subtraction result of  %0.2f and %0.2f is:%0.2f\n\n============================================",a,b,c);
            break;
             case 3:
             printf("\nEnter First Number:");
            scanf("%f",&a);
            printf("\nEnter Second Number:");
            scanf("%f",&b);
            c=a*b;
            printf("\nThe Multiplication result of   %0.2f and %0.2f is:%0.2f\n\n============================================",a,b,c);
            break;
             case 4:
            printf("\nEnter First Number:");
            scanf("%f",&a);
            printf("\nEnter Second Number:");
            scanf("%f",&b);
            c=a/b;
            printf("\nThe Divition result of  %0.2f and %0.2f is:%0.2f\n\n============================================",a,b,c);
            break;
             case 5:
            printf("\nEnter Squar Root Value:");
            scanf("%f",&a);
            c=sqrt(a);
            printf("\nThe Squar Root result of %0.2f is :%0.2f\n\n============================================",a,c);
            break;
               case 6:
            printf("\nEnter The Base Number:");
            scanf("%f",&a);
            printf("\nEnter The Power Value:");
            scanf("%f",&b);
            c=pow(a,b);
            printf("\nThe Power of %0.0f^%0.0f result is :%0.0f\n\n============================================",a,b,c);
            break;
            default:
            printf("This calculator is made by Md.Saiful Islam\nYou Can see my code on my github account:\nhttps://github.com/saiful7i/");
                return 0;
                
     }
     goto start;
    return 0;
    
}
