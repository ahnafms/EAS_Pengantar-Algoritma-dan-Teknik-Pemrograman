//https://www.hackerrank.com/contests/praktikum-final-patp-2022/challenges/bantu-urutin-dong
#include <stdio.h>
#include <string.h>

struct database{   
    char nama[21];
    int mtk;
    int bhs;
    int nilai_total;
};

int partition(struct database arr[],int low, int high) {
  int pivot = arr[high].nilai_total;
  int pivotidx = high;
  int i = (low - 1);
  for (int j = low; j < high; j++){
    if (arr[j].nilai_total <= pivot) {
        if (arr[j].nilai_total == pivot)
        {
            if (arr[j].mtk <= arr[pivotidx].mtk)
            {
                if (arr[j].mtk == arr[pivotidx].mtk)
                {
                        if (strcmp(arr[j].nama, arr[pivotidx].nama) > 0)
                        {
                            i++;
                            struct database temp;
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    
                } else {
                    i++;
                    struct database temp;
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                }
            }
            
        } else {
            i++;
            struct database temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
    }
}
struct database temp;
            temp = arr[i+1];
            arr[i+1] = arr[high];
            arr[high] = temp;
            return (i + 1);
}

void quickSort(struct database arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main(){
    int n;
    scanf("%d", &n);
    struct database arr[n];
    for(int i = 0;i<n; i++){
        scanf("%d", &arr[i].mtk);
        scanf("%d", &arr[i].bhs);
        scanf("%s", &arr[i].nama);
        arr[i].nilai_total = arr[i].mtk + arr[i].bhs;
    }
    quickSort(arr, 0, n-1);
    for(int i = n-1; i>=0; i--){
        printf("%d %d %s\n", arr[i].mtk, arr[i].bhs, arr[i].nama);
    }
}