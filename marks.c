#include<stdio.h>

int main ()
{
    int history,ss,hindi,maths,physics;

    printf("enter marks for history");
    scanf("%d", &history);

    printf("enter marks for ss");
    scanf("%d", &ss);

    printf("enter marks for hindi");
    scanf("%d", &hindi);

    printf("enter marks for maths");
    scanf("%d", &maths);

    printf("enter marks for physics");
    scanf("%d", &physics);

    float avrage= history+ss+maths+hindi+physics/5;
    printf("the avrage is :%f", avrage);

    
    return 0;
    
} 