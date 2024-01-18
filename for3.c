#include<stdio.h>
int main ()
{
 int v,s,l,m,t;
 printf("enter the value of v");
 scanf("%d",&v);
 printf("enter the value of s");
 scanf("%d",&s);
 printf("enter the value of l");
 scanf("%d",&l);
 printf("enter the value of m");
 scanf("%d",&m);
 t=((v+s)+((l-m)*l));
 printf("t=((%d+%d)+(%d-%d)*%d)=%d",v,s,l,m,l,t);
}
