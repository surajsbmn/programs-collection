//Author:Suraj Subramanian Date:19/2/19
//21 match stick game
#include<stdio.h>
int main(){
    printf("Lets play a game!\n21 matchsticks\n");
    int matchstick_count=21;
    int pickCount,invalid=0;
    for(int i=0;i<5;i++){
        printf("Your Turn:\nEnter a number of matchsticks to pick (1,2,3,4)\n");
        scanf("%d",&pickCount);
        if(pickCount>4){
            invalid=1;
            break;
        }
        matchstick_count-=pickCount;
        printf("You pick %d Matchstick\nRemaining Matchsticks = %d\n",pickCount,matchstick_count);
        if(matchstick_count<1){
            printf("You lost!!!\n");
            break;
        }
        printf("My Turn!\n");
        pickCount=5-pickCount;
        printf("I pick %d matchsticks\n",pickCount);
        matchstick_count-=pickCount; 
        printf("Remaining Matchsticks = %d\n",matchstick_count);
        
    }
    if(invalid)
        printf("Invalid input\n");
    printf("Thank You for playing\n");
    return 0;
}
