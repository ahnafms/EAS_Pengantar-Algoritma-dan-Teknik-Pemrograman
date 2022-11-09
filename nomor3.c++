//https://github.com/AlproITS/DasarPemrograman/wiki/Modul-1:-Percabangan(nomor 2)
#include <stdio.h>

int main()
{
    int input;
    printf("Kalimat dari angka ");
    scanf("%d", &input);

    if (input == 0){
        printf("nol");
    }
    if (input > 99){
        int ratus = input/100;
        if (ratus == 1){
            printf("seratus ");
        }   
        else if (ratus == 2){
            printf("dua ratus ");
        }
        else if (ratus == 3){
            printf("tiga ratus ");
        }
        else if (ratus == 4){
            printf("empat ratus ");
        }
        else if (ratus == 5){
            printf("lima ratus ");
        }
        else if (ratus == 6){
            printf("enam ratus ");
        }
        else if (ratus == 7){
            printf("tujuh ratus ");
        }
        else if (ratus == 8){
            printf("delapan ratus ");
        }
        else if (ratus == 9){
            printf("sembilan ratus ");
        }
        input = input % 100;
    }
    bool flag = true;
    if (input > 9){
        int puluh = input/10;

        if (input < 20){ //case untuk belasan dan sepuluh
            flag = false;
            if (input == 10){
                printf("sepuluh");
            }else if (input == 11){
                printf("sebelas");
            }else if (input == 12){
                printf("dua belas");
            }else if (input == 13){
                printf("tiga belas");
            }else if (input == 14){
                printf("empat belas");
            }else if (input == 15){
                printf("lima belas");
            }else if (input == 16){
                printf("enam belas");
            }else if (input == 17){
                printf("tujuh belas");
            }else if (input == 18){
                printf("delapan belas");
            }else if (input == 19){
                printf("sembilan belas");
            }
        }    
        else{
            if (puluh == 2){
                printf("dua ");
            }else if (puluh == 3){
                printf("tiga ");
            }else if (puluh == 4){
                printf("empat ");
            }else if (puluh == 5){
                printf("lima ");
            }else if (puluh == 6){
                printf("enam ");
            }else if (puluh == 7){
                printf("tujuh ");
            }else if (puluh == 8){
                printf("delapan ");
            }else if (puluh == 9){
                printf("sembilan ");
            }
                printf("puluh ");
            }
            input = input % 10;
        }
    if (flag == true){
        if (input == 1){
            printf("satu");
        }else if (input == 2){
            printf("dua");
        }else if (input == 3){
            printf("tiga");
        }else if (input == 4){
            printf("empat");
        }else if (input == 5){
            printf("lima");
        }else if (input == 6){
            printf("enam");
        }else if (input == 7){
            printf("tujuh");
        }else if (input == 8){
            printf("delapan");
        }else if (input == 9){
            printf("sembilan");
        }
    }
    return 0;
    }