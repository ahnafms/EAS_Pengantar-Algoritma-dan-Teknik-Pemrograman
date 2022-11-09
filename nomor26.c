//https:tlx.toki.id/problems/osn-2010/0A/submissions/1005154
#include <stdio.h>
#include <ctype.h>
int main(){
    char input [10], cek[] = "halo dunia";
    scanf("%[^\n]", input);
    int count = 0;
    for(int i = 0; i<10; i++){
        input[i] = tolower(input[i]);
        if(input[i] == cek[i]){
            count++;
        }
    }
    printf("%d", count);
}