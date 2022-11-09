//https://www.hackerrank.com/contests/praktikum-modul-2-patp-2022/challenges/kanan-atau-kiri
#include <stdio.h>  
#include <string.h>

int main()     
{  
   const int sz=1000;
   char kiri[sz], kanan[sz];
   scanf("%s%s", &kiri, &kanan);
   if (strstr(kanan, kiri) && strstr(kiri, kanan)){
      printf("keduanya\n");
   }
   else if (strstr(kiri, kanan)){
      printf("yang kanan\n");
   }else if (strstr(kanan, kiri)) {
      printf("yang kiri\n");
   }else {
      printf("gak keduanya\n");
   }
}