#include <stdio.h>

int main() {
  
  char equation[100];
  
  printf("Enter an equation or statement: ");
  scanf("%[^\n]s", equation);

  for(int i=0; i<strlen(equation); i++) {
    
    if(equation[i] == '+') {
      printf("Addition operator is present.");
      break;
    }
    else if(equation[i] == '-') {
      printf("Subtraction operator is present.");
      break;  
    }
    else if(equation[i] == '*') {
      printf("Multiplication operator is present.");
      break;
    }
    else if(equation[i] == '/') {
      printf("Division operator is present.");
      break;
    } 
  }

  if(strchr(equation, '+') == NULL && 
     strchr(equation, '-') == NULL &&
     strchr(equation, '*') == NULL &&
     strchr(equation, '/') == NULL) {
    printf("No operator found");
  }
  
  return 0;
}
