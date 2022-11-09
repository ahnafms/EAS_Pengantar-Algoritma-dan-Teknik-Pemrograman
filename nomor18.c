//https://tlx.toki.id/problems/toki-exercise-1/P02
#include <stdio.h>

int main(){
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    if (op == '+'){
        printf("%d\n", a+b);
    }
    else if(op == '-'){
        printf("%d\n", a-b);
    }
    else if(op == '*'){
        printf("%d\n", a*b);
    }
    else if(op == '='){
        if(a == b){
            printf("benar\n");
        }
        else{
            printf("salah\n");
        }
    }
    else if(op == '>'){
        if(a > b){
            printf("benar\n");
        }
        else{
            printf("salah\n");
        }
    }
    else if(op == '<'){
        if(a < b){
            printf("benar\n");
        }
        else{
            printf("salah\n");
        }
    }
}