//https:/tlx.toki.id/problems/toki-exercise-1/P15/submissions/mine
#include <stdio.h>

int main(){
	long int n, m, max=0;
	scanf("%ld %ld", &n, &m);
	long int arr[n];
	for(int i=0; i<n; i++){
		scanf("%ld", &arr[i]);
	}
    for(int i=0; i<m; i++){
        max += arr[i];
    }
    long int temp=max;
    for(int i=m; i<n; i++){
        temp = temp + arr[i]-arr[i-m];
        if(temp>max) max = temp;
    }
    printf("%ld",max);
    return 0;
}