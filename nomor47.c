//https://tlx.toki.id/problems/ideafuse-2014-icpc-sumatra-qual/A
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    long long int arr[a];
    for(int i = 0; i<a ;i++){
        long long int x, y;
        scanf("%lld %lld", &x, &y);
        while(x != y){
            if(x<y){
                y -= 5;
                x += 7;
            }
            else{
                break;
            }
        }
        if(x == y){
            printf("Case #%d: %d\n", i+1, x);
        }
        else{
            printf("Case #%d: impossible\n", i+1);
        }
    }
}