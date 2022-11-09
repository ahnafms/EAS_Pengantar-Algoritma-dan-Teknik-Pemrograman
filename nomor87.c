//https://tlx.toki.id/problems/troc-23/B
#include <stdio.h>
int main(){
    long long int n, ans=0;
    scanf("%lld", &n);
    for(int i = 19; i<=n && i< 100; i+= 10){
        ans++;
    }
    printf("%lld\n", ans);
}