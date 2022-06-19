#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   int c=1;
    int tool,otool;
    while(c){
    
    srand(time(0));
    otool = rand() % 3 + 1;
    printf("**********\n \n #Select your tool by number::-- \n #stone(Press 1)\n #paper(Press 2)\n #scusior(press 3)\n*********\n");
    scanf("%d",&tool);
    printf("otool::-- %d\n",otool);
    if(tool==otool){
        printf("Its a tie\n**********\n");
    }
    else if(tool==1 && otool==2){
        printf("Paper selected by mahine and you selected stone\n You lossed mahine win\n**********\n");
    }
    else if(tool==2 && otool==3){
        printf(" sucusior selected by mahine and you selected paper\n You lossed mahine win\n**********\n");
    }
    else if(tool==3 && otool==1){
        printf("stone selected by mahine and you selected scusior\n You lossed mahine win\n**********\n");
    }
    else if(otool==1 && tool==2){
        printf("Stone selected by mahine and you selected Paper\n You win \n**********\n");
    }
    else if(otool==2 && tool==3){
        printf("paper selected by mahine and you selected sucior\n You win\n**********\n");
    }
    else if(otool==3 && tool==1){
        printf("suior selected by mahine and you selected stone\n You win\n**********\n");
    }
    else{
        printf(" Wrong Choice \n");
    }
    printf("Do you want to play again?(0/1)\n");
    scanf("%d",&c);
    }
    

    return 0;
}