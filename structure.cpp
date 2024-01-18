#include<stdio.h>
#include<string.h>
struct book{ char name[50]; char author_name[30]; float price; int page;
};
int main ()
{
	struct book book1;
	printf("enter the book name");
	scanf("%s",&book1.name[50]);
	printf("enter the author name");
	scanf("%s",&book1.author_name[30]);
	printf("enter the book price");
	scanf("%f",&book1.price);
	printf("enter the number of pages");
	scanf("%d",&book1.page);
	
//	printf("book details are : %s \n %s \n %2.f \n %d ",book1.name ,book1.author_name , book1.price, book1.page);
	printf("Book name : %s",book1.name);
	printf("Book name : %s",book1.author_name);
	printf("Book name : %s",book1.price);
	printf("Book name : %s",book1.page);
	return 0;
		
}
