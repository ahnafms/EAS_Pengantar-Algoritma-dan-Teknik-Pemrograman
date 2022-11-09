//https://tlx.toki.id/problems/toki-exercise-1/P05/submissions/mine
#include <stdio.h>

int count = 0;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    count++;
}

void sort(int arr[], int n){
    for(int i = 1; i<=n; i++){
        int temp = i;
        for(int j=i+1; j<=n; j++){
            if(arr[temp] > arr[j]) temp = j;
        }
        if (temp != i){
            swap(&arr[temp], &arr[i]);
        }
    }
}

int main(){
    int a;
    scanf("%d", &a);
    int arr[a+1];
    for(int i =1 ; i<=a;i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, a);
    printf("%d\n", count);
    return 0;
}