//https://www.hackerrank.com/contests/praktikum-final-patp-2022/challenges/drakor/submissions/code/1345121742
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
struct drakor{
    char nama[100000];
    char kategori[100000];
    char tahun[100000];
};

int my_comp(char *strg1, char *strg2)
{
    while( ( *strg1 != '\0' && *strg2 != '\0' ) && *strg1 == *strg2 )
    {
        strg1++;
        strg2++;
    }
    if(*strg1 == *strg2)
    {
        return 0;
    }

    else
    {
        int a = *strg1 - *strg2;
        return a;
    }
}

int main(){
    char *holdtoken[10];
    char str[100];
    int idx=0;
    struct drakor film[100];
    while(scanf("%s", str) != EOF){
        char *token;
        token = strtok(str, ";");
        holdtoken[idx] = strdup(token);
        strcpy(film[idx].nama, holdtoken[idx]);
        free(holdtoken[idx]);
        for (int i=0; i<2; i++){
            if (i == 0){
                token = strtok(NULL, ";");
                holdtoken[idx] = strdup(token);
                strcpy(film[idx].tahun, holdtoken[idx]);
                free(holdtoken[idx]);
            }
            if (i == 1){
                token = strtok(NULL, "\n");
                holdtoken[idx] = strdup(token);
                strcpy(film[idx].kategori, holdtoken[idx]);
                free(holdtoken[idx]);
            }
        }
        idx++;
    }
    for(int i = 0; i<idx-1;i++){
        for(int j = i+1; j<idx;j++){
            struct drakor temp;
            if(my_comp(film[i].kategori, film[j].kategori)>0){
                temp = film[i];
                film[i] = film[j];
                film[j] = temp; 
            }
            
        }
    }
    
    for(int i = 0; i<idx-1;i++){
        for(int j = i+1; j<idx; j++){
            if(my_comp(film[i].kategori, film[j].kategori)==0){
                if(my_comp(film[i].tahun, film[j].tahun)>0){ 
                    struct drakor temp;
                    temp = film[i];
                    film[i] = film[j];
                    film[j] = temp;
                }
            }
            else{
                break;
            }
        }
    }

    for(int i = 0; i<idx-1;i++){
        for(int j = i+1; j<idx; j++){
            if(my_comp(film[i].kategori, film[j].kategori) == 0){
                if(my_comp(film[i].tahun, film[j].tahun) == 0){
                    if(my_comp(film[i].nama, film[j].nama) > 0){
                        struct drakor temp;
                        temp = film[i];
                        film[i] = film[j];
                        film[j] = temp; 
                    }
                }
                else{
                    break;
                }
            }
            else{
                break;
            }
        }
    }
    
    int i = 0;
    printf("================================\n");
    for(i=0; i<idx;i++){
        printf("Kategori: %s\n\n", film[i].kategori);
        printf("Nama: %s\n", film[i].nama);
        printf("Tahun-rilis: %s\n\n", film[i].tahun);
        int flag = 0;
        for(int j = i+1; j<idx; j++){
            if(my_comp(film[i].kategori, film[j].kategori)==0){
                printf("Nama: %s\n", film[j].nama);
                printf("Tahun-rilis: %s\n\n", film[j].tahun);
                i++;
            }
            else{
                flag = 1;
                printf("================================\n");
                break;
            }
        }
        if(flag == 0) printf("================================");
    }
    printf("\n");
}