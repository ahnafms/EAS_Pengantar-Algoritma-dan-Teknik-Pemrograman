//https://tlx.toki.id/problems/toki-exercise-1/P16
#include <stdio.h>
#include <stdbool.h>

int count = 0;

bool IsPrime(int n){
    if (n == 2 || n == 3) return true;
    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

void gabung(int a, int b){
    for (int i = a; i<=b; i++){
        for(int j = a; j<=b; j++){
            if (IsPrime(i) == true){
                if (IsPrime(j) == true){
                    int temp = j, temp2 = i, flag = 1;
                    while(flag == 1){
                        temp = temp/10;
                        temp2 = temp2 * 10;
                        if (temp == 0) {
                            flag = 0;
                        }
                    }
                    int num = temp2 + j;
                    IsPrime(num);
                    if (IsPrime(num) == true){
                        count++;
                        printf("%d %d\n", i, j);
                    }
                }       
            } 
        }
    } 
}
        

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    gabung(a, b);
    if (count == 0){
        printf("TIDAK ADA");
    }
}