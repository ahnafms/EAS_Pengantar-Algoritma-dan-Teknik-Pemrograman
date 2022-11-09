//https://tlx.toki.id/problems/impl-search/A
#include <stdio.h>
#include <math.h>

int main(){
    int n, d, temp, flag=0;
    scanf("%d %d", &n, &d);
    for(int i = 0; i<n; i++){
        scanf("%d", &temp);
        if(d==temp){
            printf("%d",i);
            flag=1;
            break;
        }
    }
    if(flag == 0) printf("-1");
}