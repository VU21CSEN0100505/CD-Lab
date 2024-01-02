#include <stdio.h>

int main() {
  
  double num;
  
  printf("Enter a number: ");
  scanf("%lf", &num);
  
  // Use modulous to check if num is whole number
  if(num - (int)num == 0) {
    printf("%lf is an integer.", num); 
  }
  else {
    printf("%lf is not an integer.", num);
  }

  return 0;
}
