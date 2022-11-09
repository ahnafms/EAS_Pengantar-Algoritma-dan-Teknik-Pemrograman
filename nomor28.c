//https://tlx.toki.id/problems/osn-2008/2D
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int j=0;
	for(int i=1; i<=n;i++){
		j = j + i;
		printf("%d\n", j);
	}
    return 0;
}