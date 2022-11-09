#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d", &n, &m);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if((i*j) % 2 == 1 || i == 1 && j == 1){
                printf("*");
            }
            else if((i*j) % 2 == 0 && (i % 2 == 1 || j % 2 == 1)){
                printf("$");
            }
            else if((i*j) % 2 == 0){
                printf("#");
            }
        }printf("\n");
    }
}