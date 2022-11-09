//https://tlx.toki.id/problems/mikroskil-cp-2014-penyisihan/C
#include <stdio.h>
#include <string.h>
int main(){
    char arr[100] , cek[] = "ideafuse";
    scanf("%[^\n]", &arr);
    int a = 0, b = -1;
    for(int i = 0; i<strlen(arr); i++){
        while(arr[i+a] == cek[a] && a<8){
            a++;
        }
        if(a==8){
            b=i+1;
            break;
        }
        a=0;
    }
    printf("%i", b);
    return 0;
}