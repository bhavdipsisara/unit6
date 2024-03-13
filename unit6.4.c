#include<stdio.h>

int main()

{
	int i=1,n;
	
	printf("enter valur n =");
	scanf("%d",&n);
	
	while(n>=1)
	{
		if(n%2==1)
		{
			printf("%d",n);
	    }
	    n--;
	}
}