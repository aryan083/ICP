#include<stdio.h>
#include<conio.h>
#include<math.h>
int main() {
   int num, realnum, remainder, n = 0;
   float result = 0.0;
   
   printf("Enter an integer: ");
   scanf("%d", &num);
   realnum = num;
   for (realnum = num; realnum != 0; ++n) {
       realnum /= 10;
   }

   for (realnum = num; realnum != 0; realnum /= 10) {
       remainder =realnum % 10;
      result += pow(remainder, n);
   }

   if (result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}
