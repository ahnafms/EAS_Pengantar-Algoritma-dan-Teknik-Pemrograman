#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	char n[10]={'k','a','m','e','h','a','m','e','h','a'};
	char vokal[2]={'a','e'};
    int arr[a];
    for(int i = 0; i<a; i++){
        scanf("%d", &arr[i]);
    } 
    for(int i = 0; i<a; i++){
        for(int j = 0; j<10; j++){
            int flag = 1;
            for(int k=0; k<2; k++){
                if(n[j] == vokal[k]){
                    for(int z=1; z<arr[i]; z++){
                        printf("%c",vokal[k]);
                        flag = 0;
                    }
                }
            }
    printf("%c",n[j]);
    }
    printf("\n");
    }
}