//https://tlx.toki.id/problems/toki-exercise-1/P25
#include <stdio.h>
int main(){
    int n,temp, count=0;
    scanf("%d", &n);
    int num[n];
    for(int i = 0; i<n;i++){
        num[i] = i + 1;
    }
    for(int i = 0; i<(n-2);i++){
        scanf("%d", &temp);
        num[temp - 1] = 0;
    }
    for(int i = 0; i<n; i++){
        if(num[i]>0){
            printf("%d\n", num[i]);
            count++;
        }
        if(count == 2){
            break;
        }
    }
}