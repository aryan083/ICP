#include<stdio.h>
int main()
{
    char i;
    printf("enter a letter, symbol or digit :");
    scanf("&c ",&i);

    if(i<91 && i>64)
    printf("the character entered is a capital alpabet letter");
    else if(i<123 && i>96)
    printf("the character entered is a small alpabet letter");
    else if(i<58 && i>47)
    printf("the character entered is a digit");
     else if(i==0 && i<48 || i>57 && i<65 || i>90 && i<97 || i>122 && i<128)
    printf("the character entered is a special letter");

    return 0;

}
