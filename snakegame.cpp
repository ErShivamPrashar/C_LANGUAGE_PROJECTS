#include<stdio.h>
#include<windows.h>
#include<conio.h>//|| j==0 || j==width
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

int height=30,width=100,i,j;
int x,y,foodx,foody,score=0,over=0,flag=0;


void input(){
	srand (time(0));
	x=height/2;
	y=width/2;
	
	label1 :
	foodx= rand()%25;
	if (foodx==0){
		goto label1;
	}
	
	label2 :
	foody= rand()%100;
	if (foody==0){
		goto label2;
	}
	
}

void logic(){
	switch (flag){
		case 1:
			y--;
			break;
			
		case 2:
			y++;
			break;
			
		case 3:
			x--;
			break;
			
		case 4:
			x++;
			break;
			
			
	}
	if ( x==1 || x==height ||  y==1 || y==width){
	over =1;

	}
	
	if (x==foodx && y==foody){
			label1 :
	foodx= rand()%25;
	if (foodx==0){
		goto label1;
	}
	
	label2 :
	foody= rand()%100;
	if (foody==0){
		goto label2;
	}
	}
}


void setting(){
	if(kbhit()){
		switch(getch()){
			case 'a':
				flag=1;
				break;
				
			case 'd':
				flag=2;
				break;
				
			case 'w':
				flag=3;
				break;
				
			case 'x':
				flag=4;
				break;
				
			
				
				
		}
	}
}


void draw(){
	for(i=1;i<=height;i++){
		for(j=1;j<=width;j++){
			if ( i==1 || i==height ||  j==1 || j==width){
				printf ("\33[94m#");
			}
			
			
			else{
				if(i==x && j==y){
					printf("\33[93mO");
				}
				if(i==foodx && j==foody){
					printf("\33[91m@");
				}
				printf(" ");
			}
		}
		printf ("\n");
	}
	
	
	

	if (x==foodx && y==foody){
		
			printf ("\n\n\t\t\t score = %d",score+10);

}
}

void playgame(){
	input();
		
	while(over!=1){
		system("cls");
	setting();
	draw();
	logic();

	}
}


void howplay(){
	system ("cls");
	printf ("\n\n\t\t\t\t\33[92mpress a : move left");
		printf ("\n\t\t\t\tpress d : move right");
			printf ("\n\t\t\t\tpress w : move up");
				printf ("\n\n\t\t\t\tpress a : move left");
					printf ("\n\t\t\t\tpress a : move down\n\n\n");
					
					getch();
}
int main (){
	int choice;
	while(1){
		
		system ("cls");
	
	printf ("\n\n\t\t\t\t \33[92m  SNAKE GAME\n");
	printf ("\t\t\t\t ---------------\n\n\n");
	
	printf ("\t\t\t 1. How to play ?\n");
	printf ("\t\t\t 2. play game\n\n");
	
	printf ("\t\t\tenter your choice : ");
	scanf ("%d",&choice);
	
	switch(choice){
		case 1 :
			howplay();
			break;
			
		case 2 :
		playgame();
		break;
		
		default :
		printf ("\n\t\t invalid option");
		break;	
	}
}
	getch ();	
	
	return 0;
}
