#include<stdio.h>
#include<conio.h>
float average(float a[100], int n);
int main()
{
 float a[100], avg;
 int i, n;
 printf("Enter The terms of array:");
 scanf("\n%d", &n);
 
 int max=a[0];
 for(i=0;i< n;i++)
 {
  printf("a[%d]=",i);
  scanf("%f", &a[i]);
 }
  for(i=0;i< n;i++)
 {
    if (a[i]>max)
  {max=a[i];
	}}
	int min=a[0];
	for(i=0;i<n;i++){
	
	if(a[i]<min)
	{min=a[i];
	}}
   
printf("Max : %d \n Min : %d \n",max,min);
 avg = average(a,n);
 printf("Average = %.2f", avg);
 return 0;
}

float average(float a[100], int n)
{
int i;
 float sum=0.0;
 for(i=0;i< n;i++)
 {
  sum = sum + a[i];
 }

 return(sum/n);
}


