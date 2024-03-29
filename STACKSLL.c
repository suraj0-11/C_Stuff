#include <stdio.h>
#include <stdlib.h>
struct slist {
  int no;
  struct slist *next;
};

struct slist *top = NULL;

void create() {
  int i, n;
  printf("\n\t\tCreation of Stack Using SLL");
  printf("\n\t\tEnter the No. of Elements to Create: ");
  scanf("%d", & n);
  for (i = 1; i <= n; i++)
    insert();
}

void insert() {
  struct slist *newnode;
  newnode = (struct slist*)malloc(sizeof(struct slist));
  printf("\n\tEnter the element: ");
  scanf("%d", & newnode -> no);
  newnode -> next = NULL;
  if (top == NULL) {
    top = newnode;
  } 
  else {
    newnode -> next = top;
    top = newnode;
  }
}

void del() {
  struct slist *temp;
  if (top == NULL) {
    printf("\n\n\tStack Underflow");
    return;
  }
  temp = top;
  top = top -> next;
  printf("\n\tDeleted Element = %d\n", temp -> no);
  free(temp);
}

void search() {
  int count = 1;
  int val;
  struct slist *temp = top;
  if (top == NULL) {
    printf("\n\t\tSingly Linked List is Empty ");
    return;
  } 
  else {
    printf("\n\tEnter the Element to Search: ");
    scanf("%d", & val);
    while (temp != NULL) {
      if (temp -> no == val) {
        printf("\n\tElement %d is found at position %d", val, count);
        return;
      } 
      else {
        temp = temp -> next;
        count++;
      }
    }
    printf("\n\tElement %d is not Found", val);
  }
}

void display() {
  struct slist *temp;
  if (top == NULL) {
    printf("\n\n\tStack Underflow");
    return;
  }
  temp = top;
  printf("\n\n\tStack Elements are : ");
  while (temp != NULL) {
    printf("\t%d", temp -> no);
    temp = temp -> next;
  }
}

int main() {
  int ch;
  do {
    printf("\n\n\t\tStack Using Singly Linked List (SLL) \n");
    printf("\n\t\t <1> Creation");
    printf("\n\t\t <2> Insertion");
    printf("\n\t\t <3> Deletion");
    printf("\n\t\t <4> Display");
    printf("\n\t\t <5> Search");
    printf("\n\t\t <6> Exit");
    printf("\n\n\t\t Enter Your choice: ");
    scanf("%d", & ch);
    switch (ch) {
    case 1:
      create();
      display();
      break;
    case 2:
      insert();
      display();
      break;
    case 3:
      del();
      display();
      break;
    case 4:
      display();
      break;
    case 5:
      search();
      break;
    case 6:
      exit(0);
    default:
      printf("\n\tInvalid Choice");
      break;
    }
  }
  while (ch != 6);
  return 0;
}
