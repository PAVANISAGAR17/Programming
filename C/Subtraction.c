//C program to print Subtraction of two numbers
#include <stdio.h>
int main()
{
	int a,b;
	prinf("Enter two values: ");
	scanf("%d %d",&a,&b);//storing two values in a and b
	int c=a-b;//Subtracting b from a, and storing in c
	print("%d - %d = %d\n",a,b,c);
	return 0;
}

