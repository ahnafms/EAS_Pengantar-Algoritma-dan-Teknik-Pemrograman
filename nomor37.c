//https://tlx.toki.id/problems/osn-2011/0B
#include <stdio.h>
#include <string.h>

int main(){
    char arr[8];
    scanf("%s", &arr);
    if(arr[0] != arr[1]){
        if(arr[2] == arr[0]){
            printf("2");
        }
        else{
            printf("1");
        }
    }else{
        for(int i = 2; i<strlen(arr); i++){
            if(arr[0] != arr[i]){
                printf("%d", i+1);
                break;
            }
        }
    }
}