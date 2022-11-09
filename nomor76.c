//https://github.com/AlproITS/DasarPemrograman/wiki/Modul-4:-Pointer-dan-Struct(nomor2)
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct data_UN
{   
    char nama[100];
    int nilai_Matematika;
    int nilai_IPA;
    int nilai_Bindo;
    int nilai_Binggris;
};


int main(){
    int i, j, n;
    char arr2[100];

    scanf("%d", &n);

    struct data_UN arr1[n];
    for (i = 0; i<n ; i++){
        scanf("%s", &arr1[i].nama);
        scanf("%d", &arr1[i].nilai_Matematika);
        scanf("%d", &arr1[i].nilai_IPA);
        scanf("%d", &arr1[i].nilai_Bindo);
        scanf("%d", &arr1[i].nilai_Binggris);
    }

    scanf("%d", &j);
    for(int l=0; l<j; l++){
        scanf("%s", arr2);
        bool flag = 1;
        for(int k = 0; k<n; k++){
            if(strcmp(arr2 , arr1[k].nama) == 0){
                printf("Nilai %s\n", arr1[k].nama);
                printf("Matematika : %d\n", arr1[k].nilai_Matematika);
                printf("IPA : %d\n", arr1[k].nilai_IPA);
                printf("Bahasa Indonesia : %d\n", arr1[k].nilai_Bindo);
                printf("Bahasa Inggris : %d\n", arr1[k].nilai_Binggris);            
                flag = 0;
                break;
            }
        }
        if (flag == 1) printf("Nilai %s tidak ditemukan\n", arr2);
    }
}

        


