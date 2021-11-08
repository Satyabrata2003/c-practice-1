#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char a;
    char b[20];
    char c[50];
    scanf("%c",&a);
    scanf("%s",b);
    fgets(c,50,stdin);
    printf("%c",a);
    printf("%s",b);
    printf("%s",c);
    return 0;
}