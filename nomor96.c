//https://tlx.toki.id/problems/toki-exercise-1/P09
#include <stdio.h>
int main(){
    int a, n, total=0;
    scanf("%d", &n);
    for(a=0;a<n;a++) total+=(n-a)*(n-a);
    printf("%d", total);
}