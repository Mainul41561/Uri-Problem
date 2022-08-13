#include <stdio.h>
int main(){
    int input, a= 0, b=0, c=0;
    while(1){
        scanf("%d", &input);
        if(input==4)break;
        else if(input==1) a++;
        else if(input==2) b++;
        else if(input==3) c++;
        else continue;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", b);
    printf("Diesel: %d\n", c);

    return 0;
}