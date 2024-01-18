#include<stdio.h>
int main ()
{int num=45;
int *p=&num;
int **q=&p;
printf("num=%d\n",num);
printf("p=%d\n",p);
printf("q=%d\n",q);
printf("&p=%d\n",&p);
printf("&q=%d\n",&q);
printf("&num=%d\n",&num);
printf("*p=%d\n",*p);
printf("*q=%d\n",*q);
printf("**q=%d\n",**q);
return 0;

}
