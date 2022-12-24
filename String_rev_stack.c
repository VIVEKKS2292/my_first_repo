// C program to print  the reverse  a stinrg uisng stacks and also check its palindromic nature
/*
-Take the string
-Insert it in  stack one by  one using for loop taking last charcter as the
-First push and then check the palindromicity of the string*/

#include <stdio.h>
#include <string.h>

#define MAX 20

struct stack {
  char m[MAX];
  int top;
};

// program specific function
void reverse(char *, struct stack *);
void palindrome(char *, struct stack *);

// stack specific function
void push(struct stack *, char);
void display(struct stack *);

int main() {
  char a[20];
  struct stack s;
  s.top = -1;
  printf("Enter the string::\n");
  scanf("%s", a);
  reverse(a, &s);
  palindrome(a, &s);
  return 0;
}

void reverse(char *a, struct stack *s1) {
  int len = strlen(a);
  int i;
  for (i = len - 1; i >= 0; i--)
    push(s1, a[i]);
  display(s1);
}

void palindrome(char *a, struct stack *s1) {
  int x;
  x = strcmp(a, s1->m);
  if (x == 0)
    printf("Given string is palindrome.\n");
  else
    printf("Given string is not palindrome.\n");
}

void push(struct stack *s1, char c) {
  s1->top++;
  s1->m[s1->top] = c;
}

void display(struct stack *s1) {
  int n = s1->top;
  int i;
  for (i = 0; i <= n; i++)
    printf("%c", s1->m[i]);
  printf("\n");
}
