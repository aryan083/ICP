#include<stdio.h>
int main ()
{
    int date,month;
    printf("enter the number of birth month");
    scanf("%d",&month);
    printf("enter the date of birth");
    scanf("%d",&date);
    
    if(month == 12 && date>=22 && date<=31 || month == 1 && date<=19 && date>0)
    printf("Zodiac Sign: Capricorn.");

    else if(month == 1 && date>=20 && date<=31 || month == 2 && date<=17 && date>0)
    printf("Zodiac Sign: Aquarius.");
 
    else if(month == 2 && date>=18 && date<=29 || month == 3 && date<=19 && date>0)
    printf("Zodiac Sign: Pisces.");
  
    else if(month == 3 && date>=20 && date<=31 || month ==4  && date<=19 && date>0)
    printf("Zodiac Sign: Aries.");

    else if(month == 4 && date>=20 && date<=30 || month == 5 && date<=20 && date>0)
    printf("Zodiac Sign: Taurus.");
    
    else if(month == 5 && date>=21 && date<=31 || month == 6 && date<=20 && date>0)
    printf("Zodiac Sign: Gemini.");

    else if(month == 6 && date>=21 && date<=30 || month == 7 && date<=22 && date>0)
    printf("Zodiac Sign: Cancer.");
   
    else if(month == 7 && date>=23 && date<=31 || month == 8 && date<=22 && date>0)
    printf("Zodiac Sign: Leo.");
    
    else if(month == 8 && date>=23 && date<=31 || month == 9 && date<=22 && date>0)
    printf("Zodiac Sign: Virgo.");

    else if(month == 9 && date>=23 && date<=30 || month == 10 && date<=22 && date>0)
    printf("Zodiac Sign: Libra.");

    else if(month == 10 && date>=23 && date<=31 || month == 11 && date<=21 && date>0)
    printf("Zodiac Sign: Scorpio.");

    else if(month == 11 && date>=22 && date<=30 || month == 12 && date<=21 && date>0)
    printf("Zodiac Sign: Sagittarius.");    

}