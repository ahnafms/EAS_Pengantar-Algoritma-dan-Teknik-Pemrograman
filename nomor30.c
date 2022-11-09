//https://tlx.toki.id/problems/osn-2010/2B
#include <stdio.h>
int main(){
	int dollar[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int count[10]={0};
	int k;
	scanf("%d", &k);
	while(k>0){
		for(int i=0;i<10;i++){
			if(dollar[i] <= k){
				k = k - dollar[i];
				count[i]++;
                break;
			}
		}
	}
	for(int j=0;j<10;j++){
		if(count[j]>0){
			printf("%d %d\n", dollar[j], count[j]);
		}
	}
}