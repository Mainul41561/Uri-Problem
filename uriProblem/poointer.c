// #include <stdio.h>

// int main(){
//    printf(“\n you are\”awesome \" ");

//     return 0;
// }

// #include <stdio.h>

// int main () {

//    int  var = 20;   /* actual variable declaration */
//    int  *ip;        /* pointer variable declaration */

//    ip = &var;  /* store address of var in pointer variable*/

//    printf("Address of var variable: %x\n", &var  );

//    /* address stored in pointer variable */
//    printf("Address stored in ip variable: %x\n", ip );

//    /* access the value using the pointer */
//    printf("Value of *ip variable: %d\n", *ip );

//    return 0;
// }


 // uri problem no 1010
// #include <stdio.h>

// int main()
// {
//    int productCode, unit;
//    double price, paid1,paid2, totalPaid;
//    scanf ("%d %d %lf", &productCode, &unit, &price);
//    paid1 = unit * price;
//    scanf ("%d %d %lf", &productCode, &unit, &price);
//    paid2 = unit * price;
//    totalPaid = paid1 + paid2;
//    printf("VALOR A PAGAR: R$ %.2lf\n", totalPaid);

//     return 0;
// }


// uri problem no 1040
// #include <stdio.h>

// int main()
// {
//     double A, B ,C , D;
//     double media,last;
//     scanf("%lf %lf %lf %lf", &A , &B, &C, &D);
//     media  = (A*2+B*3+C*4+D)/10;
//     printf("Media: %.1lf\n", media);
//     if (media >= 7.0 ){
//         printf("Aluno aprovado.%.1lf\n", media);

//     }else if(media>= 5.0){
//         printf("Aluno em exame.\n");
//         scanf("%lf", &last);
//         printf( "Nota do exame: %.1lf\n", last);
//         if(last+media/2 > 5.0){
//             printf("Aluno aprovado.\n");
//         }else{
//             printf("Aluno reprovado.\n");
//         }
//         printf("Media final: %.1lf\n", (last+media)/2.0);
//     }else{
//             printf("Aluno reprovado.\n");
//         }

    
//     return 0;
// }

// uri problem 1041

// #include <stdio.h>
// int main()
// {
//     double X , Y;
//     scanf("%lf %lf", &X, &Y);
//     if (X+Y == 0){
//         printf("Origem\n");
//     }else if(X == 0){
//         printf("Eixo Y\n");
//     }else if(Y == 0){
//         printf("Eixo X\n");
//     }else if (X>0 && Y>0){
//         printf("Q1\n");
//     }else if(X<0 && Y>0){
//         printf("Q2\n");
//     }else if(X<0 && Y< 0){
//         printf("Q3\n");
//     }else if(X>0 && Y<0){
//         printf("Q4\n");
//     }
//     return 0;
// }

// uri problem 1042

#include<stdio.h>

int main(){
    int a,b,c,aux;
    int v[3];
    
    scanf("%d %d %d", &a, &b, &c);
    v[0] = a;
    v[1] = b;
    v[2] = c;
    
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                    if(v[i] < v[j]){
                            aux = v[j];
                            v[j] = v[i];
                            v[i] = aux;
                    }
            }
    }
    
    printf("%d\n%d\n%d\n", v[0], v[1], v[2]);
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}