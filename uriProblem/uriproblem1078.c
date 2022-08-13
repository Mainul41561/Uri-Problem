#include <stdio.h>
int main(){
    int n , i;
    scanf("%d", &n);
    for(i = 1; i<=10; i++){
        int multi = i*n;
        printf("%d x %d = %d\n",i,n,multi);
    }
    return 0;
}