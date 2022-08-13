#include <stdio.h>
int main(){
    int unqNum;
    scanf("%d", &unqNum);
    if(unqNum == 61)printf("Brasilia\n");
    else if(unqNum == 71)printf("Salvador\n");
    else if(unqNum == 11)printf("Sao Paulo\n");
    else if(unqNum == 21)printf("Rio de Janeiro\n");
    else if(unqNum == 32)printf("Juiz de Fora\n");
    else if(unqNum == 19)printf("Campinas\n");
    else if(unqNum == 27)printf("Vitoria\n");
    else if(unqNum == 31)printf("Belo Horizonte\n");
    else {
        printf("DDD nao cadastrado\n");
    }

    return 0;
}