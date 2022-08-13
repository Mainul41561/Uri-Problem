#include <stdio.h>
int main(){
    int n,i;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        if(i%2==0){
            int area = i*i;
            printf("%d^2 = %d\n",i,area);
        }
    }
    return 0;
}