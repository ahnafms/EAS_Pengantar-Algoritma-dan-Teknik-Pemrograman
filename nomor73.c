///https://github.com/AlproITS/DasarPemrograman/wiki/Modul-2:-Perulangan,-Array,-dan-String(nomor 5)
#include <stdio.h>
#include <string.h>

int main(){
    char arr[100]; 
    memset(arr, '0', 100);//Agar index yang tidak terisi diganti dengan nol, untuk menghindari terjadinya printf dump
    int vokal_A=0, vokal_I=0, vokal_U=0, vokal_E=0, vokal_O=0;
    gets(arr);
    for (int i=0; i<100; i++){
        if (arr[i] == 65 || arr[i] == 97){
            vokal_A += 1;
        }else if(arr[i] == 73 || arr[i] == 105){
            vokal_I += 1;
        }else if(arr[i] == 69 || arr[i] == 101){
            vokal_E += 1;
        }else if(arr[i] == 79 || arr[i] == 111){
            vokal_O += 1;
        }else if(arr[i] == 85 || arr[i] == 117){
            vokal_U += 1;
        }
    }
    printf("A/a : %d\nI/i : %d\nU/u : %d\nE/e : %d\nO/o : %d", vokal_A, vokal_I, vokal_U, vokal_E, vokal_O);
    return 0;
}   