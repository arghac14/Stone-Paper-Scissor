#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<ctype.h>
#include <time.h>
#include <windows.h>
char name[10];
int p=0;

int game(){
    int pch,cch,ch,w,p=0,m,cs=0;
    char d,e1,e2,e3;
    
   while(1){
   	system("color 0A");
   	printf("______________________Welcome to STONE-PAPER-SCISSOR game!_____________________\n\n");
    printf("\n\nPress 1 for ----------> 'Stone'\n");
    printf("\nPress 2 for ----------> 'Paper'\n");
    printf("\nPress 3 for ----------> 'Scissor'\n\n\n");
    printf("Your choice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1: printf("\nYou have selected Stone!\n");
                pch=1;
                break;
        case 2: printf("\nYou have selected Paper!\n");
                pch=2;
                break;
        case 3: printf("\nYou have selected Scissor!\n");
                pch=3;
                break;
        default: printf("Invalid choice!");
        		 exit(1);
    }
    Sleep(1000);
    printf("\nWait for computer to select...\n");
    Sleep(2500);
    srand(time(0));
    m=((rand() % (3 - 1 + 1))+1);
    switch(m){
        case 1: printf("\nComputer has selected Stone!\n");
                cch=1;
                break;
        case 2: printf("\nComputer has selected Paper!\n");
                cch=2;
                break;
        case 3: printf("\nComputer has selected Scissor!\n");
                cch=3;
                break;
    }
    if(pch==1 & cch==2){
         w=2;
    }
    else if(pch==1 & cch==3){
        w=1;
    }
    else if(pch==2 & cch==1){
        w=1;
    }
    else if(pch==2 & cch==3){
        w=2;
    }
    else if(pch==3 & cch==1){
        w=2;
    }
    else if(pch==3 & cch==2){
        w=1;
    }
    else{
        w=0;
    }

    if(w==1){
        printf("\nYou win!");
        p=p+1;
    }
    else if(w==2){
        printf("\nComputer wins!");
	cs=cs+1;
    }
    else{
        printf("\nTie!");
    }
    Sleep(1000);
    printf("\n\nYour current score is %d",p);
    printf("\n\nComputer's current score is %d\n",cs);
    Sleep(1500);
    scanf("%c",&e3);
    system("cls");
    system("color f5");
    printf("______________________Welcome to STONE-PAPER-SCISSOR game!_____________________\n\n");
   	printf("\n\nDo you want to play another time?\n\nIF YES THEN PRESS : 'y' or 'Y'.\n\nIF NO THEN PRESS : 'n' or 'N' + Enter.\n");
	d=getche();
	if(d=='y'||d=='Y'){
	//scanf("%c",&e1);
    system("cls");
		continue;
	}
	else{
		scanf("%c",&e2);
        system("cls");
		system("color 0D");
		printf("______________________Welcome to STONE-PAPER-SCISSOR game!_____________________\n\n");
		printf("\n\n\n%s Your final score is %d.\n\nWell played,hope you liked it and have a nice day! %c\n\n\n\n\nAuthor: arghac14\n\n",name,p,1);
		exit(1);    
	}
	
}

   
   
}
void player(){
    int e;
    system("color 0C");
    printf("______________________Welcome to STONE-PAPER-SCISSOR game!_____________________\n\n");
    printf("Enter Your name: ");
    gets(name);
    printf("\nGood luck %s!\nPress Enter to start playing..",name);
    scanf("%c",&e);
    system("cls");
}
int main(){
    int ch,i,e;
    char l;
    printf("______________________Welcome to STONE-PAPER-SCISSOR game!_____________________\n");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\tLoadinng...\n\t\t\t");
    for(i=0;i<26;i++){
    
    	printf("%c",177);
    	Sleep(150);
	}
	printf("\n\t\t\t\tDone!");
	Sleep(500);
	system("cls");
    
    system("color 0F");
    
    printf("______________________Welcome to STONE-PAPER-SCISSOR game!_____________________\n");
    Sleep(1500);
    system("color f5");
    printf("                                                                                                          \n");
    printf(" Rule:                                                                                                    \n");
    printf(" Two players have to choose between three options:                                                        \n");
    printf(" 1.STONE 2.PAPER or 3.SCISSOR                                                                             \n");
    printf(" 1.Rock crushes scissors!                                                                                 \n");
    printf(" 2.Paper covers rock!                                                                                     \n");
    printf(" 3.Scissor cuts paper!                                                                                    \n");
    printf("________________________________________________________________________________\n");
    Sleep(3000);
    
    printf("Press Enter to continue..\n");
    scanf("%c",&e);
    system("cls");
    player();
    game();
    
}
