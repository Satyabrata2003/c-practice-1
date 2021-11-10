#include <stdio.h>
int main() {
    int arr[50],a,b,c;

    printf("Enter then size of the array: ");
    scanf("%d",&a);
    printf("Enter the elements of the array: ");
    for(int i=0; i<a; i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<a; i++) {
        printf("%d\n",arr[i]);
    }
}