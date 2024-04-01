/*#include<stdio.h>
#include<conio.h>
#include<string.h>
void Password();
void mainmenu();
int main()
{
	Password();
	getch();
	return 0;
}

 void mainmenu()
{
	system("cls");
	int v ;
	printf("enter name: \n");
	scanf("%d",&v);
	return 0;
} 

void Password(void)
{
	system("cls");
	char name[10]={"mukand"};
	char name1[10];
	
	char password[10]={"1234"};
	char pass[10];
	
	printf("enter user name:\n");
	gets(name);

	printf("input password:\n");
	gets(pass);
	if(strcmp(name1,name)==0)
	{
		if(strcmp(pass,password)==0)
		{
			printf("\n\tcorrect password\n");
			printf("\n\tenter any key to continue...");
			getch();
		}
			else
			{
				printf("\n\t\tincorrect password!!!\n");
				getch();
			}
		
	}
		else
		{
			printf("invalid user name:\n");
			printf("kindly type correct user_name");
			getch();
		}
	

}
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
//void Password();
int main()
{
//	system("cls");
	
	char password[10]={"1234"};
	char pass[10];
	
	printf("input password:\n");
	gets(pass);
		if(strcmp(pass,password)==0)
		{
			printf("\n\tcorrect password\n");
			printf("\n\tenter any key to continue...");
			getch();
		}
			else
			{
				printf("\n\t\tincorrect password!!!\n");
				getch();
			}
		
	getch();
	return 0;
}
