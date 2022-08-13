#include <stdio.h>
int main(){
    int n, i,num,total;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    double per1, per2, per3;
    char name;
    scanf("%d", &n);
    for(i = 1; i<= n; i++){
        scanf("%d %c", &num, &name);
    if(name =='C') sum1 = num + sum1;
    else if(name == 'R') sum2 = num + sum2;
    else if(name == 'S') sum3 = num + sum3; 
 }
    total = sum1 + sum2 + sum3;
    per1 = (sum1*100.00)/total;
    per2 = (sum2*100.00)/total;
    per3 = (sum3*100.00)/total;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n",sum1);
    printf("Total de ratos: %d\n", sum2);
    printf("Total de sapos: %d\n", sum3);
    printf("Percentual de coelhos: %.2lf %\n",per1);
    printf("Percentual de ratos: %.2lf %\n",per2);
    printf("Percentual de sapos: %.2lf %\n", per3);
    return 0;
}