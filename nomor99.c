//https://tlx.toki.id/problems/ngoding-seru-2015-oct-pemula/D
#include <stdio.h>
int main(){
    int s, n, d;
    scanf("%d %d %d", &s, &n, &d);
    s -= d;
    for(int i = 0; i<n; i++){
        s += d;
        printf("%d\n", s);
    }
}