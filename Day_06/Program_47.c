#include<stdio.h>
int main()
{
	int n,r,result=0;
	printf("enter no ");
	scanf("%d",&n);
	int p=n;
	while(p!=0)
	{
		r=p%10;
		result+=r*r*r;
		p/=10;
	}
		if(result==n)
		{
			printf("armstrong");
		}
		else
		{
			printf("not armstrong");
		}
		
	
	
	return 0;
}
