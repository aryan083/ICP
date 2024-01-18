#include<stdio.h>

int main ()
{
    int weight;
    printf("enter the weight of boxes in pounds");
    scanf("%d",&weight);
    if(weight<115)
    printf("boxer class is flyweight");
    else if(weight>=115 && weight<=121)
    printf("the boxer class is bantamweight");
    else if(weight>=122 && weight<=153)
    printf("the boxer class is featherweight");
    else if(weight>=154 && weight<=1890)
    printf("the boxer class is middleweight");
    else
    printf("the boxer class is heavyweight");
    return 0;
}