#include <stdio.h>

int main() {
  
  char stmt[1000];
  int i, lines = 1;
  
  printf("Enter a statement:\n");
  fgets(stmt, 1000, stdin);

  i = 0;
  while(stmt[i] != '\0') {
    if(stmt[i] == '\n') {
      lines++;
    }
    i++;
  }

  printf("Number of lines: %d", lines);
  
  return 0;
}
