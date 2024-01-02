#include <stdio.h>

int main() {
  char ch;

  printf("Enter a letter: ");
  scanf("%c", &ch);

  if(ch >= 'A' && ch <= 'Z') {
    printf("%c is an uppercase alphabet.", ch); 
  }
  else {
    printf("%c is not an uppercase alphabet.", ch);
  }

  return 0; 
}
