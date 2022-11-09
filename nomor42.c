//https://tlx.toki.id/problems/bnpchs-2018-final/A
#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	int n,a,b,k, arr[t];
	for(int i = 0; i<t; i++){
		scanf("%d %d %d %d", &n, &a, &b, &k);
		arr[i] = n+k*(b-a);
	}
	for(int i=0; i<t; i++){
		printf("Kasus #%d: %d\n", i+1, arr[i]);
	}
}