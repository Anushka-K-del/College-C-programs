#include <stdio.h>
#include <math.h>

int main() {
    int n, r, temp,digits=0,sum=0;
    
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0) 
	{
        temp /= 10;
        digits++;
    }
    int p=n;
    while(p!=0)
    {
    	r=p%10;
    	sum+=pow(r,digits);
    	p/=10;
	}
  
    

    if (n==sum) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
