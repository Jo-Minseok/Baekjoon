#include <stdio.h>

int main(){
    int a,b, i, result;

    while(1){

        scanf("%d %d", &a, &b);
        result=a+b;
        
        if(result>0){
            printf("%d\n", result);
        }
        else{
            break;
        }

    }
    return 0;
}