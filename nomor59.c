#include <stdio.h>
int main(){
    float berat_badan, tinggi_badan;
    printf("Program mengukur berat badan ideal!\n");
    printf("Masukkan berat badanmu dan tinggi badanmu\n");
    scanf("%f %f", &berat_badan, &tinggi_badan);
    float IMT = berat_badan/((tinggi_badan/100)*(tinggi_badan/100));
    printf("%0.2f\n", IMT);
}