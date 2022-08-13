#include <stdio.h>
int main(){
    int x;
    int i;
    scanf("%d", &x);
    for(i= x; i<(x+(6*2)); i+=2){
        int odd;
        if(i%2 == 0){
            odd = i +1;
            printf("%d\n", odd);
        }else{
            odd = i;
            printf("%d\n", odd);
        }
    
    }
    return 0;
}