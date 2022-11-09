//https://tlx.toki.id/problems/compfest-2011-spc-penyisihan/A
#include <stdio.h>

int main(){
    int t,l,r,j,x,i;
    char s[5];
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &l);
        scanf("%d", &r);
        scanf("%d", &j);
        scanf("%d", &x);
        scanf("%s", s);
        if (s[0] == 'b') printf("%d\n", x - (r * l * j));
        else printf("-%d\n", (r * l * j));
    }
}
