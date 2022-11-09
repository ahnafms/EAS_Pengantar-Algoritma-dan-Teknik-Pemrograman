////https://github.com/AlproITS/DasarPemrograman/wiki/Modul-2:-Perulangan,-Array,-dan-String(nomor3)
#include <stdio.h>

int main(){
    int input, i, j;
    scanf("%d", &input);
    for(i=2; i<=input; i++){
        for (j=2; j<=i; j++){
            int mod = i % j;
            if (j>1 && j<i){
                if (mod == 0){
                    printf("%d ", i);
                    break;  
                }
                else{
                    continue;
                }
            }
            else if(mod == 0){
                printf("* ");
                break;
            }
        }
    }
        return 0;
}

    