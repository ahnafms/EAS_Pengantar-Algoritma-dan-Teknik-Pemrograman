//https://www.hackerrank.com/contests/praktikum-modul-2-patp-2022/challenges/terjemahin-dong-1
#include <stdio.h>  
#include <ctype.h> 
#include <string.h>

int main()     
{  
    int n, i; scanf("%d", &n);
    
    for (int i=0; i<n; i++){
        char str[1000];
        scanf("%s", str);
        const char s[2]=";";
        char *token;
        token = strtok(str, s);

        if (strcmp(token, "ADD")==0){
            token = strtok(NULL, s);
            if (strcmp(token, "include")==0){
                printf("#include");
                token = strtok(NULL, s);
                printf("<%s>", token);
            }else if (strcmp(token, "function")==0){
                printf("int ");
                token = strtok(NULL, s);
                printf("%s(){", token);
            }else if (strcmp(token, "variable")==0){
                token = strtok(NULL, s);
                if (strcmp(token, "integer")==0){
                    printf("int ");
                }else {
                    printf("char ");
                }
                token = strtok(NULL, s);
                printf("%s;", token);
            }else if (strcmp(token, "scanf")==0){
                token = strtok(NULL, s);
                if (strcmp(token, "integer")==0){
                    printf("scanf(\"%%d\",&");
                }else {
                    printf("scanf(\"%%c\",&");
                }
                token = strtok(NULL, s);
                printf("%s);", token);
            }else if(strcmp(token, "printf")==0){
                token = strtok(NULL, s);
                if (strcmp(token, "integer")==0){
                    printf("printf(\"%%d\",");
                }else {
                    printf("printf(\"%%c\",");
                }
                token = strtok(NULL, s);
                printf("%s);", token);
            }
            printf("\n");
        }else {
            printf("return 0;\n}");
        }
    }
}