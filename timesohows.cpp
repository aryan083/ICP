#include<stdio.h>

struct time {
	int hour ;
	int min;
	int sec;
};
int main ()
{ 
	struct time time1;
	printf("enter the ammount of hours:");
	scanf("\n%d",&time1.hour);
	printf("enter the ammount of mins:");
	scanf("\n%d",&time1.min);
	printf("Enter the ammount of seconds:");
	scanf("\n%d",&time1.sec);
	
	
	printf("\n time :- %d : %d : %d",time1.hour%24,time1.min%60,time1.sec%60);
	return 0;
}
