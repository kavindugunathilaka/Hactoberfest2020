// Program to take 10 values from the user and store them in an array
// Printing the elements stored in the array
#include <stdio.h>

int main() {
  int values[10];

  printf("Enter 10 integers: ");

  for(int i = 0; i < 10; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Enter 10 numbers: ");

  for(int i = 0; i < 10; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}