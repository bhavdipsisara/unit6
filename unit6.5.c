#include<stdio.h>

int main()

{
	int a,b;
	
	printf("enter start value  a=");
	scanf("%d",&a);
	
	printf("enter end value b=");
	scanf("%d",&b);
	
	while(a<=b)	
	{
		if(b%4==0)
		{
			printf("%d\n",b);
		}
		b--;
	}
}