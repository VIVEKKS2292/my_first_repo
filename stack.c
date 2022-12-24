#include <stdio.h>
#include <stdlib.h>
#define max 10

struct stack {
  int m[max];
  int top;
};

// Function to push (Add elements to the stack)
void push(struct stack *a) {
  a->top++;

  // Checking for overflow
  if (a->top > max - 1) {
    printf("stack overflow\n");
    return;
  }

  // Push logic
  int n;  
  printf("Enter the number to be pushed:\n");
  scanf("%d", &n);
  a->m[a->top] = n;
  printf("%d was successfully pushed to the stack.\n", n);
}

// Function to pop(delete the elements from the stack)
void pop(struct stack *a) {
  int b;
  b = a->m[a->top];
  a->top--; // Deferencing the top element

  // checking for stack under flow condition.
  if (a->top < 0) {
    printf("stack underflow\n");
    return;
  }

  // confirmation of deletion
  printf("%d was successfully popped out from the stack.\n", b);
}

// Function to display the stack
void display(struct stack *a) {
  int i;

  if (a->top != -1) {
    printf("Elements in the stack are:\n");
    for (i = a->top; i >= 0; i--)
      printf("%d\n", a->m[i]);
  }
  
  else
    printf("Nothing to print\n");
}

int main() {
  struct stack s;
  int choice;
  s.top = -1;

  for (;;) {
    printf("1 :: Enter a number(push)\n2 :: Delete a number(pop)\n3 :: "
           "Display\n4 :: exit\n");
    scanf("%d", &choice);

    switch (choice) {

    case 1:
      push(&s);
      break;
    case 2:
      pop(&s);
      break;
    case 3:
      display(&s);
      break;
    case 4:
       printf("THANK YOU.\n");
      exit(0);
    } // End of switch case
  }   // End of infinite loop

 
  return 0;
}