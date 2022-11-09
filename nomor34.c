//https://tlx.toki.id/problems/inc-2019/A/submissions/mine
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int score_team[n], score_op[n]; 
    for (int i = 0; i<n; i++){
        scanf("%d", &score_team[i]);
    }
    for(int i = 0; i<n; i++){
        scanf("%d", &score_op[i]);
    }
    int count = 0;
    for(int i = 0; i < n ; i++){
        if(score_team[i] > score_op[i]){
            count += 3;
        }
        else if(score_team[i] < score_op[i]){
            count += 0;
        }
        else{
            count += 1;
        }
    }
    printf("%d", count);
}