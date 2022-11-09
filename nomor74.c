//https://github.com/AlproITS/DasarPemrograman/wiki/Modul-2:-Perulangan,-Array,-dan-String(nomor 6)
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int i, num, j, index=0;
    char input[100];
    scanf("%s", &input);
    num = strlen(input);
    j = num - 1;
    char ans[j];
    bool flag = false;
    for (i = 0; i < num; i++){
        if (input[i] == '_'){
            flag = true;
            continue;
        }if (flag == true){
            flag = false;
            if (input[i] > 96){
                ans[index] = input[i] - 32;
                index++;
            }else{
                ans[index] = input[i];
                index++;
                }
        }else{
            if (input[i] < 91){
                ans[index] = input[i] + 32;
            }
            else{
                ans[index] = input[i];
            }
            index++;
        }
    }
    for (i = 0; i<j; i++){
        printf("%c", ans[i]);
    }
    return 0;
}
