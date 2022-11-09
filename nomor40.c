//https://tlx.toki.id/problems/inc-2009/A/submissions/mine
#include <stdio.h>
int main(){
    int t, n, m;
    scanf("%d", &t);
    int num[t];
    for(int k = 0; k<t; k++){
        scanf("%d %d", &n , &m);
        int arr[5]= { 0 }, vote;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                scanf("%d", &vote);
                arr[j] += vote;
            } 
        }
        int max = -1, flag = 0;
        for(int i = 0; i<n; i++){
            if (arr[i] > max){
                max = arr[i];
                flag = i;
            }
        }
        num[k] = flag;
    }
    for(int i = 0; i<t; i++){
        printf("%d\n", num[i]+1);
    }
}