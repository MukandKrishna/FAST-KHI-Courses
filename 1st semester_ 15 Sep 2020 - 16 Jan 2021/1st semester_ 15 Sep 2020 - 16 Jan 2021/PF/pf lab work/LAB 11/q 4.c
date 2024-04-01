#include<stdio.h>
#include<math.h>

struct units
{
	int w;
	int h;
	int l;
	float r;
	float PI;
};

int square(struct units u)
{
	return u.l * u.w;
} 

int volume(struct units u)
{
	return u.w * u.l * u.h ;
}

float cuf(struct units u)
{
	return 2 * u.PI * u.r;
}
/*int hyp(struct units u)
{
	return hypot(u.b,u.p);
}
*/
main()
{
	struct units u;
	printf("enter the dimensions\n");
	scanf("%d %d %d %f %f",&u.w,&u.l,&u.h,&u.r,&u.PI);

	float p,b;
	float hypotenuse; 
	scanf("%f %f",&p,&b);
	
	int volume(struct units u);	
	printf("box volume =%d\n",volume(u));
	
	int square(struct units u);
	printf("\nsquare of area =%d\n",square(u));
	
	float cuf(struct units u);
	printf("\ncircumference of circle = %f\n",cuf(u));
	
	//int hyp(struct units u);
	hypotenuse=hypot(p,b);
	printf("\nhypotenuse (%f, %f)= %f\n",p,b,hypotenuse);
}

