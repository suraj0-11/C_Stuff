#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void line()
{
    printf("==================================================\n");
}
void calc()
{
    float n1,n2;
    char op;
    printf("Enter 1st number\n");
    scanf("%f",&n1);
    printf("Enter 2nd number\n");
    scanf("%f",&n2);
    printf("Enter the operator\n");
    scanf(" %c",&op);
    switch(op)
    {
        case '+' : printf("%.2f + %.2f = %.2f\n",n1,n2,n1+n2);
        break;
        case '-' : printf("%.2f - %.2f = %.2f\n",n1,n2,n1-n2);
        break;
        case '*' : printf("%.2f * %.2f = %.2f\n",n1,n2,n1*n2);
        break;
        case '/' : printf("%.2f / %.2f = %.2f\n",n1,n2,n1/n2);
        break;
        default : printf("Check your inputs again\n");
        break;

    }
}
void quad()
{
    float a,b,c,d,real,image,x1,x2;
    printf("enter the 3 co-efficients\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0&&b==0)
    {
        printf("invalid inputs\n");
    }
    else
    {
        d=(b*b)-(4*a*c);
        if(d==0)
        {
            printf("Roots are real and equal\n");
            x1=-b/2*a;
            x2=x1;
            printf("Root 1 = %.2f and Root 2 = %.2f\n",x1,x2);
        }
        else if(d>0)
        {
            printf("Roots are real distinct\n");
            x1=(-b+sqrt(d))/2*a;
            x2=(-b-sqrt(d))/2*a;
            printf("Root 1 = %.2f Root 2 = %.2f\n",x1,x2);
        }
        else
        {
            printf("Roots are imaginary\n");
            real = -b/(2*a);
            image = sqrt(-d)/(2*a);
            printf("Root 1 = %.2f + i%.2f\n",real,image);
            printf("Root 2 = %.2f - i%.2f\n",real,image);
        }

    }
}
void prime()
{

    int n,i,flag=0;
    printf("Enter a Number\n");
    scanf("%d",&n);
    if(n==0|| n==1)
    {
        flag=1;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d is a prime number\n",n);
    else
        printf("%d is not a prime number\n",n);
}
void main()
{
    int choice;
    line();
    printf("USE THE ABOVE TOOLS BY SELECTING A OPTION\n");
    while(1)
    {
    line();
    printf("1 - Basic Calculator\n");
    printf("2 - Quadratic Equation Solver\n");
    printf("3 - Prime Number Checker\n");
    printf("4 - exit\n");
    line();
    printf("Enter your Choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : calc();
        break;
        case 2 : quad();
        break;
        case 3 : prime();
        break;
        case 4 : exit(0);
        default : printf("Wrong choice yoo try again");
        break;
    }
    }
}
