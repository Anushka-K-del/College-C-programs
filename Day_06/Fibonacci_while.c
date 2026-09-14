#include<stdio.h>
int main()
{
	int n,a=0,b=1,c;
	printf("Enter n value");
	scanf("%d",&n);
	printf("fibonacci series: %d %d",a,b);
    int i=3;
	while(i<=n)
	{
		c=a+b;
		printf(",%d",c);
		a=b;
		b=c;
		i++;
	}
	printf("\n");
	return 0;
}
