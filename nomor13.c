//https://tlx.toki.id/problems/ngoding-seru-2015-oct-pemula/C
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n;i++ ){
        for(int k =i+1; k<n;k++){
           if(arr[i]<arr[k]){
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            } 
        }
    }
    for(int i=0;i<n;i++){
        if (i==n-1){
            printf("%d", arr[n-1]);
        }
        else{
            printf("%d,", arr[i]);
        }
    }
}
