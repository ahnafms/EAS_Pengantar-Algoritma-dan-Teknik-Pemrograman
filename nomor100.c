//https://tlx.toki.id/problems/ideafuse-2014-icpc-sumatra-qual/D
#include <stdio.h>
int main(){
    int n,h;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &h);
        int j = 1;
        while(h>0){
            h-=j;
            j++;
        }
        printf("%d\n", j);
    }
}