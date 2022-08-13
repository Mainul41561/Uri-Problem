#include <stdio.h>
int main(){
    double input, media, d= 0,sum=0;
    while(1){
        if(d==2)break;
        scanf("%lf", &input);
        if(input>=0 && input<=10){
            d++;
            sum+=input;
        }else{
            printf("nota invalida\n");
        }
        media = sum/2;
        
    }
    printf("media = %.2lf\n", media);
    return 0;
}