#include<stdio.h>

/* Function prototype */
float average(float a[100], int n,int );

int main()
{
 float a[100], res;
 int i, n;
 
 printf("Enter n:\n");
 scanf("%d", &n);
 /* Reading array */
 for(i=0;i< n;i++)
 {
  printf("a[%d]=",i);
  scanf("%f", &a[i]);
 }
 /* Function Call */
 res = average(a,n);
 printf("Average = %f", res);
 
 return 0;
}
/* Function definition */
float average(float a[10], int n)
{
 int i;
 float sum=0.0;
 for(i=0;i< n;i++)
 {
  sum = sum + a[i];
 }
 return(sum/n);
}
