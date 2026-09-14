#include<stdio.h>
int main()
{
	int n,r,t=0;
	printf("enter no ");
	scanf("%d",&n);
	int p=n;
	while(n!=0)
	{
		r=n%10;
		t=t*10+r;
		n=n/10;
	}
		if(p==t)
		{
			printf("palindrome");
		}
		else
		{
			printf("not palindrome");
		}
		
	
	
	return 0;
}
