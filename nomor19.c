//https://tlx.toki.id/problems/toki-exercise-1/P03
#include <stdio.h>
int main(){
    int a, b, c;
    int arr[101]={0};
    scanf("%d %d %d",&a,&b,&c);
    int x,y;
    scanf("%d %d", &x, &y);
    for(int i = x; i<y; i++){
        arr[i] = a;
    }
    scanf("%d %d", &x, &y);
    for(int i = x; i<y; i++){
        if(arr[i] == a){
            arr[i] = b;
        }
        else arr[i] = a;
    }
    scanf("%d %d", &x, &y);
    for(int i = x; i<y; i++){
        if(arr[i] == a){
            arr[i] = b;
        }
        else if(arr[i] == b){
            arr[i] = c;
        }
        else{
            arr[i] = a;
        }
    }
    int sum = 0;
    for(int i = 0; i<101; i++){
        int cost = arr[i];
        if(cost == a){
            sum += cost;
        }
        else if(cost == b){
            sum += cost*2;
        }
        else if(cost == c){
            sum += cost*3;
        }
    }
    printf("%d", sum);
}