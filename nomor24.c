//https://tlx.toki.id/problems/bnpchs-2010-penyisihan/B
#include <stdio.h>
int main(){
    int a, b, c, d, e,t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        a=b=c=d=e=0;
        int n;
        scanf("%d", &n);
        for(int j = 0; j<n; j++){
            int temp=0;
            scanf("%d", &temp);
            if (temp>a){
                e = d;
                d = c;
                c = b;
                b = a;
                a = temp;
            }
            else if (temp>b){  
                e = d;
                d = c;
                c = b;
                b = temp;
            }
            else if (temp>c){ 
                e = d; 
                d = c;
                c = temp;
            }
            else if (temp>d){
                e = d;
                d = temp;
            }
            else if (temp>e){
                e = temp;
            }
        }
        printf("%d\n", a+b+c+d+e);
    }
}