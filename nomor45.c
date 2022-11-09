//https://tlx.toki.id/problems/mikroskil-cp-2014-final/A
#include <stdio.h>
int main(){
    int k,n;
    scanf("%d %d", &k, &n);
    printf("Think of a number, any number\nMultiply it by %d\nAdd %d to your number\nNow, divide your total by %d\nFinally, subtract the result from the first number you pick\nBRAVO!!!\nYour answer is %d", k, k*n, k, n);
}