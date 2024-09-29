#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// a function for snake
int snake(int n, int length, int * pos){
    if(* pos == n){
        * pos = * pos - length;
        printf("A snake has appeared, your position is now: %d\n", * pos);
    }  
    return 0;
}
//a function for ladder
int ladder(int n, int length, int * pos){
    if(* pos ==n){
        * pos = * pos + length;
        printf("You have taken a ladder, your position is now: %d\n", * pos);
    }
    return 0;
}

int main(){
    //all the required variables
    int pos1 =0;
    int pos2 =0;
    int turn =0;
    int n =0;
    int o1 = 0;
    int o2 =0;
    printf("Player-1 position: %d\nPlayer-2 position: %d \n", pos1, pos2);

    //main loop which determines if game is won or lost
    while(pos1 <100 && pos2 <100){
        if(turn ==0){
            printf("PLAYER-1\nEnter a number from 1-6: "); //user input for die
            scanf("%d", &n);
            if(n>6){ //loop checks that user is'nt trying to enter a number >6
                printf("You lost your turn for trying to cheat.\n");
                printf("PLayer-2 has won!");
                break;
            } else if( n==0){ //checks if user can use a no-move
                o1++;
                printf("You have used no move. \nNumber of no-moves you have left: %d\n", o1);
                printf("______________________ \n");
                if(o1 > 3){
                    printf("You are of no-moves. \nYOU LOST\n");
                    printf("Player-2 has won.");
                    break;
                }
            } 
            else{
                pos1 = pos1 + n; //increases the player's position

                //random function for determing the positions and number of ladders and snakes
                int r1=rand()%pos1+7;
                int len1 = rand()%pos1; 
                int ran1 = rand()%1+1;
                if(ran1 == 0){
                    snake(r1, len1, &pos1);
                } else{
                    len1= rand()%20+1;
                    ladder(r1, len1, &pos1);
                }
                
                printf("Player-1 position: %d\nPlayer-2 position: %d \n", pos1, pos2);
                printf("______________________ \n");
            }
            turn =1; //changes it to the other player's turn
        } 
        //same for the other player
        else{
            printf("PLAYER-2\nEnter a number from 1-6: ");
            scanf("%d", &n);
            if(n>6){
                printf("You lost your turn for trying to cheat.\n");
                printf("Player-1 has won");
                break;
            } else if( n==0){
                o2++;
                printf("You have used no move. \nNumber of no-moves you have left: %d\n", o2);
                printf("______________________ \n");
                if(o2 > 3){
                    printf("You are of no-moves. \nYOU LOST\n");
                    printf("Player-1 has won.");
                    break;
                }
            }            
            else{
                pos2 = pos2 + n;
                //snakes
                int r=rand()%pos2+7;
                int len = rand()%pos2/2+1; 
                int ran = rand()%1+1;
                if(ran == 0){
                    snake(r, len, &pos2);
                } else{
                    ladder(r, len, &pos2);
                }
            
                printf("Player-1 position: %d\nPlayer-2 position: %d\n", pos1, pos2);
                printf("______________________\n");
            }
            turn =0;
        }
    }
    //checks if anyone has won
    if(pos1 == 100){ 
        printf("Player-1 has won");
    } else if(pos2 == 100){
        printf("PLayer-2 has won");
    } else if(pos1 >100){
        printf("Player-1 went out of bounds \nPlayer-2 has won");
    } else if(pos2 >100){
        printf("Player-2 went out of bounds \nPlayer-1 has won");
    }

    return 0;
}