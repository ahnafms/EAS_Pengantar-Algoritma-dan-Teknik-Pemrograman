//https://tlx.toki.id/problems/arkavidia-4-pc-penyisihan/A
#include <stdio.h>
int main(){
    long int t;
    scanf("%ld", &t);
    long int arr[t], n;
    for(int i = 0; i<t; i++){
        scanf("%ld", &n);
        long int min = 1000001, num, total = 0;
        for(int j = 0; j<n; j++){
            scanf("%ld", &num);
            if (min > num){
                min = num;
            }
            total += num;
        }
        arr[i] = total - (min * n);
    }  
    for(int i = 0; i<t; i++){
        printf("%ld\n", arr[i]);
    }
}
