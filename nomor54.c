//https://tlx.toki.id/problems/bnpchs-2011-penyisihan/C
#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int n){
    if (n == 2 || n == 3) return true;
    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main(){
    int t;
    scanf("%d", &t);
    int a, b;
    for(int i = 0; i<t; i++){
        int count=0;
        scanf("%d %d", &a, &b);
        for(int i = a; i<=b; i++){
            int flag = 0;
            for(int j = 2; j<i; j++){
                if(IsPrime(i)==true){
                    flag = 1;
                    break;
                }
                else if(i%j==0){
                    if(IsPrime(j) == false){
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 0){
                if(i!=2){
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
}