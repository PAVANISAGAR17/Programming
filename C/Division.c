//C Program to print Division result of two numbers
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the values of a and b: ");
	scanf("%d %d",&a,&b);
	c = a/b;
	printf("%d / %d = %d",a,b,c);
	return 0;
}

