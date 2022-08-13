// #include <stdio.h>
// int main(){
//     int m, n,sum= 0;
//     int i,x,j;
//     for(i = 1; i<100; i++){
//         scanf("%d %d", &m, &n);
//         if(m<=0 || n<=0)break;
//         if(m>n){
//             x = m;
//             m = n;
//             n = x;
//         }
//         for(j=m; j<=n; j++){
//             printf("%d ", j);
//             sum+=j;
//         }
//         printf("Sum=%d\n", sum);
//         sum = 0;
//     }
    
//    return 0;
// }

#include <stdio.h>
int main(){
    int m, n,sum= 0;
    int i;
    for(i = 1; i<100; i++){
    scanf("%d %d", &m , &n);
    if(m<=0 ||n<=0)break;
    if(m>n){
        for(i=n; i<=m; i++){
            printf("%d ", i);
            sum+=i;
        }
        // printf("SUM=%d\n", i,sum);
    }else if(n>m){
        for(i=m; i<=n; i++){
            printf("%d ", i);
            sum+=i;
        }
       

    }
     printf("SUM=%d\n",sum);
     sum = 0;
 } 

    return 0;
}