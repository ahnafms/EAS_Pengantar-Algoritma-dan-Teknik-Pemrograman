//Soal penyisihan FindIT UGM 2022 (Problem Pesulap)
#include <stdio.h>
#include <stdbool.h>
int ganjil(int a, int count){
	if ((a - 1) % 2 == 0){
		for(int i = 1; i<= a; i++){
			if(a % i == 0){
				count++;
			}
		}
		return count;
	}
	else{
		return - 1;
	}
}
int genap(int a, int count){
	if(a%2==0){
		for(int i=1; i<=a; i++){
			if(a % i == 0){
				count++;
			}
		}
		return count;
	}
	else{
		return -1;
	}
}
bool IsPrime(int n){
    if (n == 2 || n == 3) {
        return true;
    }
    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}


int main(){
	int t;
	scanf("%d", &t);
	long long int ans[t];
	for(int i=0 ; i<t;i++){
		scanf("%lld", &ans[i]);
	}
	for(int i = 0; i<t; i++){
		long long int arr[ans[i]];
		for(int j = 1; j<=ans[i]; j++){
			int count=0;
			if(IsPrime(j) == true){
				arr[j-1] = 2;
			}
			else if(ganjil(j, count) != -1){
				arr[j-1] = ganjil(j, count);
			}
			else if(genap(j, count) != -1){
				arr[j-1] = genap(j, count);
			}
			// printf("%d\n", arr[j-1]);
		}
		long long int jawaban = 1;
		for(int z=0; z<ans[i]; z++){
			jawaban *= arr[z];
			jawaban = jawaban % 1000000007;
			
		}
		printf("%lld\n", jawaban);
	}
}