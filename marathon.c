#include<stdio.h>
#include<math.h>


double x;
double result = 0;

printf("Input a number between 0 and 1:");
scanf("%f",&x);

result = sin(x);

printf("The sine of %.4f is %.4f\n", x, result);

system("pause>null");
return 0;
