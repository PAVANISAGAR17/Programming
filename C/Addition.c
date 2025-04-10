//C program to print addition of two numbers
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two values: ");
	scanf("%d %d",&a,&b);//storing two values in a and b
	int c=a+b;//adding a and b, and storing in c
	printf("%d + %d = %d\n",a,b,c);
	return 0;
}

