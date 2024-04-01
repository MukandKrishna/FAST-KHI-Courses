#include <stdio.h>
main()

{
	float v,w;
	printf("Enter your first number: ");
	scanf("%f",&v);
	printf("Enter your second number: ");
	scanf("%f",&w);
	if(v!=w)
	{
		if(v>w)
		{
			printf("First number is greater");
		}
		else
		{
			printf("Second number is greater");
		}
	}
	else
	{
		printf("both are equal");
	}
}

