#include <stdio.h>

int suma(int a, int b, int c){
  return a + b + c;
}

void print_array(int a[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(void) {
  int a[] = {1, 2, 3, 4};
  int b[] = {99, 101, 72, 99, 535, 1999, 2006};
  int c[] = {0};
  print_array(a, 4);
  print_array(b, 7);
  print_array(c, 1);
  return 0;
}
