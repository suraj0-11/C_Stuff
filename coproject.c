#include <stdio.h>
#include<stdlib.h>
void line()
{
    printf ("=============================================\n");
}
void AU()
{
    int n1, n2;
    int sum, difference, product, quotient, remainder;
    printf("Enter two numbers for arthimetic operations\n");
    scanf("%d %d",&n1,&n2);
    sum = n1 + n2;
    difference = n1 - n2;
    product = n1 * n2;
    quotient = n1 / n2;
    remainder = n1 % n2;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
}

void LU()
{
    int input1, input2;
    printf ("Enter input 1 and input 2\n");
    printf("Enter only 0's and 1's\n");
    scanf("%d %d",&input1,&input2);
    int and, or, not1, not2;
    and = input1 && input2;
    or = input1 || input2;

    

    not1 = !input1;
    not2 = !input2;
    printf("And: %d\n", and);
    printf("Or: %d\n", or);
    printf("Not gate for input 1 : %d\n",not1);
    printf("Not gate for input 2 : %d\n",not2);
}

void main()

{

    while(1)
    {
        line();
        printf("Select the below operation by selecting corresponding option\n");
        printf("1. Arthimetic operation\n");
        printf("2. Logical operation\n");
        printf("3. exit\n\n\n");
        line();
        int choice;

        printf("Enter choice : \n");
        scanf("%d",&choice);
   
 
        switch(choice)
       {
        case 1 : AU();
        break;

        case 2 : LU();
        break;

        case 3 : exit(0);
        break;

        default: printf("Invalid option");
       }

    }

   

}
