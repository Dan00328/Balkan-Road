#include <stdio.h>
#include <conio.h> //pt citirea tastei apasate
#include <windows.h> //pt functia sleep()

int main(){
//marimea hartii:
int lanes=4;
int length=10;
//pozitii NPC:
int pozE,laneE;
laneE= rand();pozE=9;
//coordonate player
int laneP;
laneP=3;
//variabile ajutatoare
int i,j;
char key;
//stats:
int speed=100;
int score; score=0;
//game:
while(1){
        //curata consola pt un frame nou
        system("cls");

    //Desenam drumul

    for(j=0;j<lanes;j++){
            printf("|");
            if(laneE!=j&&pozE!=i||laneP)
        for(i=0;i<length;i++){
           if(laneE==j&&i==pozE)
                printf(" < ");
            else if(laneP==j&&i==0)
                printf(" > ");
                    else
                    printf("---");
        }
    printf("|\n");

    }


//inamicul se misca
    pozE--;
//conditie de pierdere
    if(laneE==laneP&&pozE==0){
        printf("!GAME OVER!");
    break;
    }
//resetare inamic
    if(pozE<0){
        pozE=length-1;
        laneE=rand()%4;
        score++;
    }
//citire input pt control
    if (_kbhit()){
        key= _getch();
        if(key=='w'&&laneP>0)
            laneP-=1;
        if(key=='s'&&laneP<lanes-1)
            laneP+=1;
         if(key=='a'&&speed<400)
            speed+=100;
            if(key=='d'&&speed>0)
            speed-=100;

    }
    //printare stats
    printf("SCORE:%d\n",score);
    printf("SPEED Restriction:-%d",speed);
    //viteza jocului
    Sleep(speed);
}
return 0;
}



