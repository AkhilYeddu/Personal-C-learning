#include <stdio.h>

int main() {
   int lower, upper, i, j, isPrime;

   printf("Enter lower and upper limits: ");
   scanf("%d %d", &lower, &upper);

   printf("Prime numbers between %d and %d are: ", lower, upper);

   for (i = lower; i <= upper; ++i) {
       isPrime = 1;

       // Optimize by checking divisibility only up to the square root of i
       for (j = 2; j * j <= i; ++j) {
           if (i % j == 0) {
               isPrime = 0;
               break;
           }
       }

       if (isPrime) {
           printf("%d ", i);
       }
   }

   return 0;
}