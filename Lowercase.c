#include <stdio.h>

int main() {
  char ch;

  printf("Enter a letter: ");
  scanf("%c", &ch);

  if(ch >= 'a' && ch <= 'z') {
    printf("%c is a lowercase alphabet.", ch);
  }
  else {
    printf("%c is not a lowercase alphabet.", ch); 
  }

  return 0;
}
