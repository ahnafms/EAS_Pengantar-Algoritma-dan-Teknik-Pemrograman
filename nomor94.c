//https://tlx.toki.id/problems/ngoding-seru-2015-oct-pejuang/B
#include <stdio.h>
int main(){
    int n, jam=0,menit=0,detik=0;
    scanf("%d", &n);
    while(n>0){
        if(n>=3600){
            n -= 3600;
            jam++;
        }
        else if(n>=60){
            n -= 60;
            menit++;
        }
        else if(n >= 0){
            n -= 1;
            detik++;
        }
    }
    printf("%d\n%d\n%d\n", jam,menit,detik);
}