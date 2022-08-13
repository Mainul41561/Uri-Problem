#include <stdio.h>
int main(){
    float input;
    int i, n= 0;
    for ( i = 1; i <= 6; i++){
        scanf("%f", &input);
        if(input > 0){
            n = n + 1;
        }   
    }
    printf("%d valores positivos\n",n );
    return 0;
}