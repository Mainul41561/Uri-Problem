#include <stdio.h>
int main(){
    int n, i;
    double a, b, c;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        scanf("%lf",&a);
        scanf("%lf",&b);
        scanf("%lf",&c);
        printf("%.1lf\n",(a*2 + b*3 + c*5)/(2.0+3.0+5.0));
    }
    return 0;
}