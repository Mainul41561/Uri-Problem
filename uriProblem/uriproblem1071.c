#include <stdio.h>
int main(){
    int x,y,max,min;
    int i ,sum=0;
    scanf("%d %d", &x, &y);
    if(x<y){
        max = y;
        min = x;
    }else{
        max= x;
        min = y;
    }
    for(i= (min+1); i<max; ++i){
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("%d\n", sum);
    return 0;
}