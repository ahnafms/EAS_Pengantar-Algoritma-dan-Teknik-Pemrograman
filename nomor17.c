#include <stdio.h>
#include <stdbool.h>

int sn1(int a){
    if (a == 1){
        return 4;
    }
    else{
        a = (a/2)*(8+(a-1)*4);
        return a;
    }
}
int sn2(int a){
    if (a == 1){
        return 7;
    }
    else{
        a = (a/2)*(14+(a-1)*7);
        return a;
    }
}

int main(){
    int t, n;
    scanf("%d", &t);
    int arr[t], temp, temp1;
    for(int i = 0; i<t; i++){
        scanf("%d", &arr[i]);
        temp = arr[i]/4;
        temp1 = arr[i]/7;
        int a = sn1(temp) + sn2(temp1);
        printf("%d\n", a);
    }
}
