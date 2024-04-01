

/*#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
   int n1, n2, n3;
};

int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;

   if ((fptr = fopen("C:\\Users\\Mukand\\Desktop\\vip.bin","w")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   for(n = 1; n < 5; ++n)
   {
      num.n1 = n; //1 //2
      num.n2 = 5*n; //5 //10
      num.n3 = 5*n + 1; //6 //11
	if(num.n2 == 15)
		{
      //asdasdasdasdsadasdasdasdasdasd
    	  fwrite(&num, sizeof(struct threeNum), 1, fptr); 
  		}
	}
   fclose(fptr); 
   return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
   int n1, n2, n3;
};
main()
{
   int n;
   struct threeNum num;
   FILE *fptr;
   if ((fptr = fopen("C:\\Users\\Mukand\\Desktop\\vip.bin","rb")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   for(n = 1; n < 5; ++n)
   {
   	fread(&num, sizeof(struct threeNum), 1, fptr);
    printf("n1: %d\tn2: %d\tn3: %d", num.n1, num.n2, num.n3);
	printf("\n");
	}
   fclose(fptr);  
   return 0;
}*/
