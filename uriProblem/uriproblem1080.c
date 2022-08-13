#include <stdio.h>
int main(){
    int arr[100], count;
    int i, j=0;
    for(i=0; i<100; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<100; i++){
        if(arr[i]>j){
            j = arr[i];
            count = i +1;
        }
    }
    printf("%d\n", j);
    printf("%d\n", count);
    return 0;
}