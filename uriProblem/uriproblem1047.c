#include <stdio.h>
int main(){
    int startHour, startMin , endHour, endMin;
    int diffarnce;
    scanf("%d %d %d %d", &startHour, &startMin, &endHour, &endMin);

    diffarnce = ((60*endHour)+endMin) - ((60*startHour)+startMin);

    if (diffarnce<=0) diffarnce += 24*60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", diffarnce/60, diffarnce%60);

    return 0;
}