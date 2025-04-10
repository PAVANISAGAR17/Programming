//C program to print variables
#include <stdio.h>

int main() 
{
    int integerVar = 10;
    float floatVar = 3.14f;
    double doubleVar = 3.1415926535;
    char charVar = 'A';
    long longVar = 1234567890L;
    short shortVar = 32767;
    unsigned int unsignedVar = 100u;

    printf("Integer: %d\n", integerVar);
    printf("Float: %.2f\n", floatVar);
    printf("Double: %.10lf\n", doubleVar);
    printf("Character: %c\n", charVar);
    printf("Long: %ld\n", longVar);
    printf("Short: %d\n", shortVar);
    printf("Unsigned Integer: %u\n", unsignedVar);

    return 0;
}
