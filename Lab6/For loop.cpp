#include <stdio.h>
int main() {
   int i, j, lines;
   
   printf("Input your lines: ");
   scanf("%d", &lines);
   
   for (i = 1; i <= lines; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}
