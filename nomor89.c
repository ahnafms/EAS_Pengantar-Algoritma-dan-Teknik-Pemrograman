//https://tlx.toki.id/problems/bnpchs-2011-final/G
#include <stdio.h>
int main(){
    long int t,a,b,c;
    scanf("%ld", &t);
    for(int i = 0; i<t; i++){
        scanf("%ld %ld %ld", &a, &b, &c);
        if(c-b==b-a) printf("%ld\n", c + b-a);
        else{
            printf("%ld\n", c *(b/a));
        }
    }
}