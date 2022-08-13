// #include <stdio.h>
// int main()
// {
//     int startTime,endTime;
//     scanf ("%d %d", &startTime, &endTime);
//     if(startTime==endTime)
//         printf("O JOGO DUROU %d HORA(S)\n",24-startTime+endTime);
//     else if(startTime<=endTime)
//         printf ("O JOGO DUROU %d HORA(S)\n",endTime-startTime);
//     else
//         printf("O JOGO DUROU %d HORA(S)\n",24-startTime+endTime);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int startTime,endTime;
    scanf ("%d %d", &startTime, &endTime);
    // if(startTime==endTime)
    //     printf("O JOGO DUROU %d HORA(S)\n",24-startTime+endTime);
    // else 
    if(startTime < endTime)
        printf ("O JOGO DUROU %d HORA(S)\n",endTime-startTime);
    else
        printf("O JOGO DUROU %d HORA(S)\n",24-startTime+endTime);
    return 0;
}

