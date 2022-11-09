//https://tlx.toki.id/problems/troc-23/A
#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d", &n);
    for(int j = 1; j<=n; j++){
        if(n % j==0){
            count++;
        }
    }
    if(count == 5) printf("YES");
    else{
        printf("NO");
    }
}