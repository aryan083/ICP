#include<stdio.h>
int main()
{

float r,g,b,c,m,y,k,white,rf,gf,bf,big;
printf("enter the value of red from 0 to 255\n");
scanf("%f",&r);
printf("enter the value of green from 0 to 255\n");
scanf("%f",&g);
printf("enter the value of blue from 0 to 255\n");
scanf("%f",&b);
rf=r/255;
gf=g/255;
bf=b/255;
printf("red=%f\n green=%f\n green=%f\n",rf,gf,bf);

big=rf;
if(big<gf)
big=gf;
if(big<bf)
big=bf;

white=big;

c = (white-rf)/white;
m = (white-gf)/white;
y = (white-bf)/white;
k=white-1;
printf("The value of Cyan: %f\n", c);
printf("The value of Magenta: %f\n",m);
printf("The value of Yellow: %f\n", y);
printf("The value of Black: %f\n", k);
}