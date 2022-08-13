#include <stdio.h>
int main(){
    int  x, y, n, i;
    double result;
    scanf("%d",&n);
    for(i = 0; i<n; i++){
        scanf("%d %d",&x, &y);
        if(y==0){
            printf("divisao impossivel\n");
        }else{
            result =(double) x/y;
            printf("%.1lf\n",result);
        }
    }
    return 0;
}