#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void intopost();
int precedence(char);
int isEmpty();
char pop();
void push(char);
void print();

char stack[20];
char infix[20], post[20];
int top = -1;

int main() {
  printf("Enter exp: ");
  fgets(infix, sizeof(infix), stdin);

  intopost();
  print();

  return 0;
}

void intopost()
 {
  int i, j = 0;
  char next, symbol;

  for (i = 0; i < strlen(infix); i++) {
    symbol = infix[i];

    switch (symbol) {
      case '(':
        push(symbol);
        break;
      case ')':!= '(') {
          post[j++] = next;
        }
        while ((next = pop()) 
        break;
      case '+':
      case '-':
      case '*':
      case '/':
      case '^':
        while (!isEmpty() && precedence(stack[top]) >= precedence(symbol)) {
          post[j++] = pop();
        }
        push(symbol);
        break;
      default:
        post[j++] = symbol;
        break;
    }
  }

  while (!isEmpty()) {
    post[j++] = pop();
  }

  post[j] = '\0';
}

int precedence(char symbol) {
  switch (symbol) {
    case '^':
      return 3;
    case '/':
    case '*':
      return 2;
    case '+':
    case '-':
      return 1;
    default:
      return 0;
  }
}

void print() {
  int i = 0;

  printf("ppp: ");
  while (post[i]) {
    printf("%c", post[i++]);
  }
  printf("\n");
}

void push(char c) {
  if (top == 20) {
    printf("overflow");
    return;
  }

  top++;
  stack[top] = c;
}

char pop() {
  char c;

  if (top == -1) {
    printf("underflow");
    exit(1);
  }

  c = stack[top];
  top = top - 1;
  return c;
}

int isEmpty() {
  if (top == -1) {
    return 1;
  } else {
    return 0;
  }
}
