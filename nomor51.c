//https://tlx.toki.id/problems/impl-sort/C
#include <stdio.h>

int getMax(long int a[],long int n) {  
   int max = a[0];  
   for(int i = 1; i<n; i++) {  
      if(a[i] > max)  
         max = a[i];  
   }  
   return max; 
}  

void countSort(long int a[], long int n) 
{  
   int output[n+1];  
   int max = getMax(a, n);  
   int count[max+1]; 
  
  
  for (int i = 0; i <= max; ++i)   
  {  
    count[i] = 0; 
  }  
    
  for (int i = 0; i < n; i++) 
  {  
    count[a[i]]++;  
  }  
  
   for(int i = 1; i<=max; i++)   
      count[i] += count[i-1]; 
 
  for (int i = n - 1; i >= 0; i--) {  
    output[count[a[i]] - 1] = a[i];  
    count[a[i]]--; 
}  
  
   for(int i = 0; i<n; i++) {  
      a[i] = output[i]; 
   }  
} 
  
int main(){
    long int n;
    scanf("%li", &n);
    long int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%li", &arr[i]);
    }
    countSort(arr, n);
    for(int i = 0; i<n; i++){
        printf("%li\n", arr[i]);
    }
    return 0;
}
