#include <stdio.h>
int main() {
    int a,b,c,d;
    printf("Please Enter a number: "); 
    scanf("%d",&a);
    for (int i = 0; i <= a; i++)
    {
        printf("%d ",i);
        if (i%10==0)
        {
           printf("\n");
        }
        
    }
    
}