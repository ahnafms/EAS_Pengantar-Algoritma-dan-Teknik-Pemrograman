//https://tlx.toki.id/problems/inc-2015/A
#include <stdio.h>
int main(){
    int t,m, temp;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        int count=0;
        scanf("%d", &m);
        for(int j=0; j<m; j++){
            scanf("%d", &temp);
            if(temp<60) count++;
        }
        printf("Case #%d: %d\n", i+1, count);
    }
    return 0;
}