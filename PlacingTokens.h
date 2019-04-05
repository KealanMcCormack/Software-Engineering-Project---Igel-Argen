#include <stdio.h>

extern struct player Players[6];
extern int playerCount;
extern char boardIndex[6][9][25];
void PlacingTokens(void){
    int i,j;
    for(i=0;i<4;i++){
        printf("Everyone place down token number %d", i);
        for(j=0;j<playerCount;j++){
            printf("%c player place down token number %d\n", players[j].colour, i);
            printf("Choose the x y coordinates for counter %d", i);
                if(i==0){
                    scanf("%d %d", &players[j].counter_1[0], &players[j].counter_1[1]);
                }
                if(i==1){
                    scanf("%d %d", &players[j].counter_2[0], &players[j].counter[1]);
                }
                if(i==2){
                    scanf("%d %d", &players[j].counter_3[0], &players[j].counter_3[1]);
                }
                if(i==3){
                    scanf("%d %d", &players[j].counter_4[0], &players[j].counter_4[1]);
                }
        }
    }
}