#include<stdio.h>
#include<stdlib.h>
int a[20];
int n, val, i, pos, choice;
/*Function Prototype*/
void create();
void display();
void insert();
void delet();
int main() {
  while (1) {
    printf("\n\n--------MENU ----------\n");
    printf("1.CREATE\n");
    printf("2.DISPLAY\n");
    printf("3.INSERT\n");
    printf("4.DELETE\n");
    printf("5.EXIT\n");
    printf(" ---------------------- ");
    printf("\nENTER YOUR CHOICE:\t");
    scanf("%d", & choice); //Reading userchoice 
    switch (choice) {
    case 1:
      create(); //to create anarray 
      break;
    case 2:
      display(); //to display theelements 
      break;
    case 3:
      insert(); // to insertelement 
      break;
    case 4:
      delet(); //to delete an item at specific position
      break;
    case 5:
      exit(0); //exit the program 
      break;
    default:
      printf("\nInvalidchoice:\n");
      break;
    }
  }
}
//creating an array 
void create() {
  printf("\nEnter the size of the array elements:\t");
  scanf("%d", & n);
  printf("\nEnter the elements for the array:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", & a[i]);
  }
}
//displaying an array elements 
void display() {
  printf("\nThe array elements are:\n");
  for (i = 1; i < n; i++) {
    printf("%d\t", a[i]);
  }
}
//inserting an element into an array 
void insert() {
  printf("\nEnter the position for the new element:\t");
  scanf("%d", & pos);
  printf("\nEnter the element to be inserted :\t");
  scanf("%d", & val);
  for (i = n - 1; i >= pos; i--)
    a[i + 1] = a[i];
  a[pos] = val;
  n++;
}
//deleting an array element 
void delet() {
  printf("\nEnter the position of the element to be deleted:\t");
  scanf("%d", & pos);
  val = a[pos];
  for (i = pos; i < n; i++) {
    a[i] = a[i + 1];
  }
  printf("\nThe deleted element is =%d", val);
  n--;
}
