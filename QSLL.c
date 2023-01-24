#include <stdio.h>
#include <stdlib.h>
struct qlist {
  int usn;
  char name[20];
  char branch[20];
  struct qlist *next;
};
struct qlist * front = NULL, *rear = NULL;
void create() {
  int i, n;
  printf("\n\t\tCreation of Stack Using SLL");
  printf("\n\t\tEnter the No. of Elements to Create: ");
  scanf("%d", & n);
  for (i = 1; i <= n; i++)
    insert();
}


void insert() {
  struct qlist *newnode;
  newnode = (struct qlist* ) malloc(sizeof(struct qlist));
  printf("\n\tEnter USN: ");
  scanf("%d", &newnode -> usn);
  printf("\n\tEnter Name: ");
  scanf("%s", newnode -> name);
  printf("\n\tEnter Branch: ");
  scanf("%s", newnode -> branch);
  newnode -> next = NULL;
  if (front == NULL || rear == NULL) {
    front = rear = newnode;
  } else {
    rear -> next = newnode;
    rear = newnode;
  }
}


void del() {
  struct qlist *temp;
  if (front == NULL) {
    printf("\n\n\tQueue Underflow");
    return;
  }
  temp = front;
  front = front -> next;
  printf("\n\tDeleted Student: USN: %d Name: %s Branch: %s\n", temp ->usn, temp -> name, temp -> branch);
  free(temp);
}


void display() {
  struct qlist *temp;
  if (front == NULL) {
    printf("\n\n\tQueue Underflow");
    return;
  }
  temp = front;
  printf("\n\n\tQueue Elements are : ");
  printf("\n\n\tUSN\tName\t\tBranch\n\n");
  while (temp != NULL) {
    printf("\t%d\t%s\t\t%s\n", temp -> usn, temp -> name, temp -> branch);
    temp = temp -> next;
  }
}


struct qlist *concatenate(struct qlist *list1, struct qlist *list2, struct qlist *list3) {
  struct qlist *temp = list1;
  if (list1 == NULL)
    list3 = list2;
  else if (list2 == NULL)
    list3 = list1;
  else {
    list3 = list1;
    while (temp -> next != NULL)
      temp = temp -> next;
    temp -> next = list2;

  }

  return (list3);
}
int main() {
  int ch;
  do {
    printf("\n\n\t\tQueue Using Singly Linked List(SLL) \n");
    printf("\n\t\t <1> Creation");
    printf("\n\t\t <2> Insertion");
    printf("\n\t\t <3> Deletion");
    printf("\n\t\t <4> Concatenation of Two SLL");
    printf("\n\t\t <5> Display");
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
      printf("\n\n\t\tConcatenation of Two Given Lists:");
      printf("\n\t\tEnter number of elements in First List:");
      int i, n, m;
      scanf("%d", &n);
      for (i = 1; i <= n; i++)
        insert();
      struct qlist *list1 = front, *front = NULL;
      printf("\n\t\tEnter number of elements in Second List:");
      scanf("%d", & m);
      for (i = 1; i <= m; i++)
        insert();
      struct qlist *list2 = front, *list3;
      concatenate(list1, list2, list3);
      front = list3;
      display();
      break;

    case 5:
      display();
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
