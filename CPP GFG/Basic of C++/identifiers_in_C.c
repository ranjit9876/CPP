
// Simple C program to display "Hello World"
 
// Header file for input output functions
#include <stdio.h>

int test_name[4] = { 4, 8, 9, 10 };
int test_namesum;

int main(void) {
  int i;
  test_namesum = 0;

  for (i = 0; i < 4; i++)
    test_namesum += test_name[i];
  printf("sum is %d\n", test_namesum);
}