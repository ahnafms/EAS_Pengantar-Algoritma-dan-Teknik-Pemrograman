//https://tlx.toki.id/problems/osn-2007/3C
#include <stdio.h>
#include <math.h>
int main(){
    unsigned long long int b,k;
    scanf("%llu %llu", &b, &k);
    k = k - b;
    unsigned long long int a;
    while(k>0){
        for(int i = 61; i>=0; i--){
            a = pow(2, i);
            if(a<=k){
                a = pow(2,i);
                k = k - a;
                printf("%llu\n", a);
                break;
            }
            else{
                continue;
            }
        }   
    }
}