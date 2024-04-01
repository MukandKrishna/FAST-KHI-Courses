#include<stdio.h>
int main()
{

int tshirt=500, formalshirt=1000, watch=500, total_items,t,s,w,z,discount;
printf("input total items");
scanf("%d",&total_items);

printf("input total tshirt :");
scanf("%d",&t);

printf("totalformalshirts:" );
scanf("%d" ,&s);

printf("totalwatch:");
scanf("%d" ,&w);

z=(tshirt*t)+(formalshirt*s)+(watch*w);

if(z>3000)

{
printf("congratulations!  you have purchased items of over Rs.3000,\n enjoy the 10% discount on total.");
discount=(z*0.1);
printf("\n amount return to customer :%d" , discount);

}




}
