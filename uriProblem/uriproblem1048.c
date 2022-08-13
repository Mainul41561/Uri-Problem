#include <stdio.h>
int main(){
    double salary;
    scanf("%lf", &salary);
    if(salary > 0 && salary <= 400.00)
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %\n", salary+(salary*.15), salary*.15);
    else if(salary > 400.00 && salary <= 800.00)
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %\n", salary+(salary*.12), salary*.12);
    else if(salary > 800.00 && salary <= 1200.00)
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %\n", salary+(salary*.10), salary*.10);
    else if(salary > 1200.00 && salary <= 2000.00)
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %\n", salary+(salary*.07), salary*.07);
    else if(salary > 2000.00)
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %\n", salary+(salary*.04), salary*.04);

    return 0;
}