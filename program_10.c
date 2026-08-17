#include<stdio.h>
int  main()
{
	float c,f;
	printf("enter temp in celsius \n");
	scanf("%f",&c);
	float fah=c*9/5+32;
	printf("the value in fahrenheit is %f \n",fah);
	printf("enter temp in fahrenheit \n");
	scanf("%f",&f);
	float cel=(f-32)/9*5;
	printf("the value in celsius %f",cel);
	return 0;
}

	
