#include<stdio.h>
#include<stdlib.h>
void create(int n)
{
    int i,a[n];
    printf("Enter your items : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int n)
{
    int i,a[100];
    printf("The elements of the array are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
void main()
{
    int i;
    int ch,n;
    printf("Enter your choice:\n1.Create an array\n2.Display an array\n3.exit");
    scanf("%d",&ch);
    while(i)
    {
        switch(ch)
        {
            case 1 : printf("create an array: ");
                     create(10);
                     break;

            case 2 : printf("Display an array: ");
                     display(10);
                     break;
            case 3 : exit(0);

            default: printf("Invalid option");
                     break;

        }
    }


}
