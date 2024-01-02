#include <stdio.h>

int main() {

  char stmt[1000];
  int i, count = 0;

  printf("Enter a statement: ");
  fgets(stmt, sizeof(stmt), stdin);

  // Iterate through each character  
  for(i=0; stmt[i]!='\0'; i++) {
    count++;
  }

  printf("Number of characters: %d", count);
  
  return 0;
}
