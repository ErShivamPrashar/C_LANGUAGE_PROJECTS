#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<time.h>




void version (){
	printf ("\n\n\n\t\t \33[93mGAME VERSION\n\n");
	
	printf ("Game Name : DICE ROLLER Game\n");
	printf ("Game Religion : Made In India\n");
	printf ("Game Developer : Shivam Parashar\n");
	printf ("Game Develop language : C Language\n");
	printf ("Game Made Date : 12/12/2024\n");
	printf ("Game Version : spv24.01.12\n");
	
}


void playgame(){
	system("cls");
	int bate,a,b;
	char ch;

	
	printf("\n\n\n\n\t\t\t\t\33[92mDICE ROLLER\n");
    printf("\t\t\t       --------------\n\n\n");
    
   printf ("\t-------------\t\t\t\t\t----------------\n");
    printf("\t|    1      |\t\t\t\t\t|     2        |\n");
    printf("\t|  sum of   |\t\t\t\t\t|  sum of      |\n");
    printf("\t|  dice=7   |\t\t\t\t\t|  dice>or<7   |\n");
    printf("\t|  won 2x   |\t\t\t\t\t|  loss bate   |\n");
    printf ("\t-------------\t\t\t\t\t----------------\n");
    
    
    
    
    printf ("\nenter user bates (max 100 rs): ");
    scanf ("%d",&bate);
  if (bate>=100){
  srand (time(0));  	

for (int i=0;i<250;i++){
	system("cls");
	a=rand()%6+1;
b=rand()%6+1;
	
	printf ("\n\n\n\t\t\t\t %d\t %d\n\n\n",a,b);
	
}

printf ("\t-------------\t\t\t\t\t----------------\n");
    printf("\t|    1      |\t\t\t\t\t|     2        |\n");
    printf("\t|  sum of   |\t\t\t\t\t|  sum of      |\n");
    printf("\t|  dice=7   |\t\t\t\t\t|  dice>or<7   |\n");
    printf("\t|  won 2x   |\t\t\t\t\t|  loss bate   |\n");
    printf ("\t-------------\t\t\t\t\t----------------\n");
    
printf("\n\n\t\t\t\t your bate is : %d",bate);


if(a+b==7){
	printf ("\n\t\t\t\tdice 1 = %d & dice 2 = %d",a,b);
	printf ("\n\t\t\t\tsum of two dice : %d",a+b);
	printf ("\n\t\t\t\tyou won %d rs",2*bate);
	printf ("\n\t\t\t\t congratulation");
}
else{
		printf ("\n\t\t\t\tdice 1 = %d & dice 2 = %d",a,b);
			printf ("\n\t\t\t\tsum of two dice : %d",a+b);
	printf("\n\t\t\t\tyou loss %d",bate);
	printf ("\n\t\t\t\t bad luck !");
}

printf ("\n\t do you want play game (Y/N) : ");
scanf ("%s",&ch);

switch(ch){
	
	case 'y':
		case 'Y':
			playgame();
			
				case 'n':
		case 'N':
		return ;
		
		
}



}
else{
	playgame();
}



}



	
	


void rules(){
	
	
	
}

int main(){
	
	int choice;
while(1){		
system("cls");
printf("\n\n\n\n\t\t\33[95mDICE ROLLER\n");
    printf("\t       --------------\n\n");
    
    printf("\t \33[96m     ---------------");
    printf("\n\t      | 1.PLAY GAME |\n");
    printf("\t      ---------------");
    
    printf("\n\n\n\n\n\n\t\t-----------");
    printf("\n\t\t| 4. EXIT |");
    printf("\n\t\t-----------\n");
    
    printf("\n\n\n\n\n\n------------------\t\t  -----------");
    printf("\n| 2.GAME VERSION |\t\t  | 3.RULES |");
    printf("\n------------------\t\t  -----------\n\n\n");
    
    printf("\t\t\t\t\t\t power by :- shivam parashar\n\n\n");
    
    printf ("enter your choice : ");
    scanf ("%d",&choice);
    
    switch (choice){
    	case 1:
    		playgame();
    		break;
    		
      case 2:
      	version();
      	break;
      	
     	case 3:
     		rules();
     		break;
     		
      case 4:
      	return 0;
      	break;
      	
     	default :
     		printf ("Invalid choice");
    }
    
	getch();
}
	return 0;
	
}



