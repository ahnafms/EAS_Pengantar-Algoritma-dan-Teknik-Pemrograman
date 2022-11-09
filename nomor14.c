#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, bilangan;
    scanf("%d", &a);
    int max1 = -1,max2= -1;
    for(int i = 0; i<a;i++){
        scanf("%d", &bilangan);
        if(bilangan>max1 && i%2==0){
        max1 = bilangan;
        }
        else if(bilangan>max2 && (i-1)%2==0){
        max2 = bilangan;
        }
    }
    printf("%d", max1+max2);
    return 0;
}