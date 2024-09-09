#include <stdio.h>

int main(void) {
   int x = 0;
   scanf("%d", &x); //add &
   printf("%05d", x);
   return 0;
}