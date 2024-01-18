#include<stdio.h>
#include<string.h>
struct cricket{
	char playername[50];
	char teamname[50];
	float battingavg;
}cricket[50];

int main ()
{
	for(int i=1;i<51;i++)
	{printf("Enter the team name:");
	scanf("\n%s",&cricket[i].teamname[i]);
	printf("\nEnter the player name:");
	scanf("\n%s",&cricket[i].playername[i]);
	printf("\nEnter the batting average of %s ",cricket[i].playername[i]);
	scanf("\n%f",&cricket[i].battingavg);
	}
	
	//sorting team wise
	
	for(i=1;i<51;i++)
	{
		for(int j=1;j<51;j++)
	
	{
		if(strcmp(circket[i].teamname[i],cricket[j].teamname[i]>0))
		{ char t=cricekt[i];
			cricket[i]=cricket[j];
			t=cricket[j];
		}
	}}
	
	j=0;
	for(i=1,i<51;i++)
	{
		if((strcmp(cricket[i].teamname,cricket[j].teamname))!=0||i==0)
	{
		
	}
	}
	
	return 0;
}
