//https://tlx.toki.id/problems/bnpchs-2011-penyisihan/A
#include <stdio.h>
#include <math.h>
int main(){
    int a;
    scanf("%d", &a);
       int arr[a];
    for(int i = 0; i<a; i++){
        int temp;
        scanf("%d", &arr[i]);
        if(pow(arr[i]-2 ,3)>0){
            arr[i] = pow(arr[i],3) - pow(arr[i]-2 ,3);
        }
        else{
            arr[i]= (pow(arr[i],3));
        }
        printf("%d\n", arr[i]);
    }
}