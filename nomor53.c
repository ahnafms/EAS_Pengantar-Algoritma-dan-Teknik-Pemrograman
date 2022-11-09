//https://tlx.toki.id/problems/bnpchs-2011-penyisihan/B
#include <stdio.h>
#include <math.h>

int calc(int arr[], int n, int m, int flag){
    int count=0;
    for(int i = m; i>0; i--){
        count += pow(n,i);
    }
    if(flag == 1 && m>1){
        
        for(int i = 2; i<=m; i++){
            count -= pow(n,i-1);
        }
        return count;
    }
    return count;
}
int main(){
    int t, n, m;
    
    scanf("%d", &t);   
    for(int i = 0; i<t; i++){ 
        int flag = 0;
        scanf("%d %d", &n, &m);
        int arr[n];
        for(int j=0; j<n; j++){
            scanf("%d", &arr[j]);
            if(arr[j] == 0){
                flag = 1;
            }
        }
        printf("%d\n", calc(arr,n,m,flag));
    }

}