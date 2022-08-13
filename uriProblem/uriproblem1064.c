#include <stdio.h>
int main(){
    float input,sum=0;
    int i, n= 0;
    for ( i = 1; i <= 6; i++){
        scanf("%f", &input);
        if(input > 0){
            sum = sum + input;
            n = n + 1;
        }   
    }
    float avg = sum/n;
    printf("%d valores positivos\n",n );
    printf("%.1f\n", avg);
    return 0;
}