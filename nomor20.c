//https://tlx.toki.id/problems/toki-exercise-1/P04
#include <stdio.h>
int main(){
    int ans=0, tempA= 1, tempB = 0;
    int a, b;
    scanf("%d %d", &a,&b);
    while(a>0){
        tempA = a % 10;
        tempB = b;
        while(tempB>0){
            ans += tempA * (tempB % 10);
            tempB/=10;
        }
        a/=10;
    }
    printf("%d\n", ans);
    return 0;
}