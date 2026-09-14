#include<stdio.h>
int main()
{
	int n,fact=1;
	printf("Enter n value");
	scanf("%d",&n);

    int i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial= %d",fact);
	return 0;
}
