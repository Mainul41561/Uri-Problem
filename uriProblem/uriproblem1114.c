// #include <stdio.h>
// int main(){
//     int password,i;
//     for(i =0; i< 100; i++){
//     scanf("%d", &password);
//     if(password ==2002){
//         printf("Acesso Permitido\n");
//         break;

//     }else
//     printf("Senha Invalida\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int password;
    scanf("d", &password);
    while(1){
        scanf("%d", &password);
    if(password ==2002){
        printf("Acesso Permitido\n");
        break;

    }else
    printf("Senha Invalida\n");
 }

}
