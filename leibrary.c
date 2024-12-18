#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
 
 typedef struct BCAbook {
 int id;
 int price;
 char bookname[50];
 char authorname[50];
 }book;
 book fstsem,sdsem,trdsem,frtsem,ftsem,
 bfstsem,bsdsem,btrdsem,bfrtsem,bftsem;
 
 
 typedef struct Issuebook {
 char studentname [25];
 char date[25];
 int roll;
 int id;
 char bookname[25];
 }issue;
 issue ifstsem,isdsem,itrdsem,ifrtsem,iftsem,
 ibfstsem,ibsdsem,ibtrdsem,ibfrtsem,ibftsem;
 
 typedef struct submitbook{
 int id;
 char bookname[50];
 char studentname[25];
 char date[25];
 char rdate[25];
 int roll;
 char status[20];
 }submit;
 submit sfstsem,ssdsem,strdsem,sfrtsem,sftsem,
 sbfstsem,sbsdsem,sbtrdsem,sbfrtsem,sbftsem;
 
 // add bca book 1st sem to 5th sem
 
 void fbcabook(){
 char an [25];
 FILE *fp;
 fp=fopen ("bca1st.txt","ab");
 printf("\n\n \33[95m     :: BCA 1st Sem. LEIBRARY ::\n");
 printf("****************************************\n\n");
 
 printf("\t\33[93m Enter Book's Id : ");
 scanf("%d",&fstsem.id);
 fflush (stdin);
 
printf("  Enter Book's Name : ");
 scanf("%s",&fstsem.bookname);
 fflush (stdin);
 
 printf("  Enter Author's Name : ");
 scanf("%s",&fstsem.authorname);
 fflush (stdin);
 
 printf("\t Enter Book's Price : ");
 scanf("%d",&fstsem.price);
 fflush (stdin);
 
 printf("\n\t\33[92m Book added Sucessful \n");
 printf("\33[93m________________________________________\n\n");
puts ("\n   \33[90m   Press Any key ...........");
  gets (an);
  getchar ();
  
 
 
 fwrite (&fstsem, sizeof(fstsem), 1, fp);
 fclose (fp);
 
 
 }
 
 
 void sdcabook(){
 char an [25];
 FILE *fp1;
 fp1=fopen ("bca2nd.txt","ab");
 printf("\n\n \33[95m   :: BCA 2nd Sem. LEIBRARY ::\n");
 printf("****************************************\n\n");
 
 printf("\t \33[93mEnter Book's Id : ");
 scanf("%d",&sdsem.id);
 fflush (stdin);
 
 printf("  Enter Book's Name : ");
 scanf("%s",&sdsem.bookname);
 fflush (stdin);
 
 printf("  Enter Author's Name : ");
 scanf("%s",&sdsem.authorname);
 fflush (stdin);
 
 printf("\t Enter Book's Price : ");
 scanf("%d",&sdsem.price);
 fflush (stdin);
 
 printf("\n\t\33[92m Book added Sucessful \n");
 printf("\33[93m________________________________________\n\n");
puts ("\n  \33[90m    Press Any key ...........");
  gets (an);
  getchar ();
  
 
 fwrite (&sdsem, sizeof(sdsem), 1, fp1);
 fclose (fp1);
 
 }
 
 
 void tdcabook(){
 char an [25];
 FILE *fp2;
 fp2=fopen ("bca3rd.txt","ab");
 printf("\n\n   \33[95m :: BCA 3rd Sem. LEIBRARY ::\n");
 printf("****************************************\n\n");
 
 printf("\t \33[93mEnter Book's Id : ");
 scanf("%d",&trdsem.id);
 fflush (stdin);
 
 printf("  Enter Book's Name : ");
 scanf("%s",&trdsem.bookname);
 fflush (stdin);
 
 printf("  Enter Author's Name : ");
 scanf("%s",&trdsem.authorname);
 fflush (stdin);
 
 printf("\t Enter Book's Price : ");
 scanf("%d",&trdsem.price);
 fflush (stdin);
 
 printf("\n\t\33[92m Book added Sucessful \n");
 printf("\33[93m________________________________________\n\n");
puts ("\n   \33[90m   Press Any key ...........");
  gets (an);
  getchar ();
  
 
 fwrite (&trdsem, sizeof(trdsem), 1, fp2);
 fclose (fp2);
 
 }
 char an[25];
 
 void fhcabook (){
 FILE *fp3;
 fp3=fopen ("bca4th.txt","ab");
 printf("\n\n  \33[95m  :: BCA 4th Sem. LEIBRARY ::\n");
 printf("****************************************\n\n");
 
 printf("\t\33[93m Enter Book's Id : ");
 scanf("%d",&frtsem.id);
 fflush (stdin);
 
 printf("  Enter Book's Name : ");
 scanf("%s",&frtsem.bookname);
 fflush (stdin);
 
 printf("  Enter Author's Name : ");
 scanf("%s",&frtsem.authorname);
 fflush (stdin);
 
 printf("\t Enter Book's Price : ");
 scanf("%d",&frtsem.price);
 fflush (stdin);
 
 printf("\n\t \33[92mBook added Sucessful \n");
 printf("\33[93m________________________________________\n\n");
puts ("\n    \33[90m  Press Any key ...........");
  gets (an);
  getchar ();
  
 
 
 fwrite (&frtsem, sizeof(frtsem), 1, fp3);
 fclose (fp3);
 
 
 }
 
 
 void fibcabook(){
 char an[25];
FILE *fp4;
 fp4=fopen ("bca5th.txt","ab");
 printf("\n\n  \33[95m  :: BCA 5th Sem. LEIBRARY ::\n");
 printf("****************************************\n\n");
 
 printf("\t \33[93mEnter Book's Id : ");
 scanf("%d",&ftsem.id);
 fflush (stdin);
 
 printf("  Enter Book's Name : ");
 scanf("%s",&ftsem.bookname);
 fflush (stdin);
 
 printf("  Enter Author's Name : ");
 scanf("%s",&ftsem.authorname);
 fflush (stdin);
 
 printf("\t Enter Book's Price : ");
 scanf("%d",&ftsem.price);
 fflush (stdin);
 
 printf("\n\t\33[92m Book added Sucessful \n");
 printf("\33[93m________________________________________\n\n");
 puts ("\n   \33[90m   Press Any key ...........");
  gets (an);
  getchar ();
  
 
 fwrite (&ftsem, sizeof(ftsem), 1, fp4);
 fclose (fp4);
 
 
 }
 
 
 ////////////////////
 
 void bcabook ()
 {
 
 while (1){
int cb;
char an[25];
   printf("\n\n\t \33[95m    Add BCA Book");
   printf("\n***************************************\n\n");
   printf("   \33[96m    1. Add 1st Sem. BCA Book \n");
   printf("       2. Add 2nd Sem. BCA Book \n");
   printf("       3. Add 3rd Sem. BCA Book \n");
   printf("       4. Add 4th Sem. BCA Book \n");
   printf("       5. Add 5th Sem. BCA Book \n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&cb);
   printf("***************************************\n\n");
  
  switch (cb)
  {
  
  case 0 :
  printf("\n \t\33[92m Exit Success ");
  printf("\n \33[93m**************************************\n");
  puts ("\n   \33[90m   Press Any key ...........");
  gets (an);
  getchar ();
  
 return ;
  break ;
  
  case 1 :
  fbcabook ();
  break ;
  
  case 2 :
  sdcabook ();
  break ;
  
  
  case 3 :
  tdcabook ();
  break ;
  
  
  case 4 :
  fhcabook ();
  break ;
  
  
  case 5 :
  fibcabook ();
  break;
  
  
  default:
  printf("\33[91m  Invalid Option! Please Try Again");
  break ;
  
 }
  
  }
  
 }

// add bba book 1st sem to 5th sem

void fbbabook(){
 FILE *ft1;
 ft1=fopen ("bba1st.txt","ab");
 printf("\n\n  \33[95m   :: BBA 1st Sem. LEIBRARY ::\n");
 printf("****************************************\n\n");
 
 printf("\t\33[93m Enter Book's Id : ");
 scanf("%d",&bfstsem.id);
 fflush (stdin);
 
 printf("  Enter Book's Name : ");
 scanf("%s",&bfstsem.bookname);
 fflush (stdin);
 
 printf("  Enter Author's Name : ");
 scanf("%s",&bfstsem.authorname);
 fflush (stdin);
 
 printf("\t Enter Book's Price : ");
 scanf("%d",&bfstsem.price);
 fflush (stdin);
 
 printf("\n\t\33[92m Book added Sucessful \n");
 printf("\33[93m________________________________________\n\n");

 
 fwrite (&bfstsem, sizeof(bfstsem), 1, ft1);
 fclose (ft1);
 
 
 }
 
 
 void sdbbabook(){
 
FILE *ft2;
 ft2=fopen ("bba2nd.txt","ab");
 printf("\n\n    \33[95m :: BCA 2nd Sem. LEIBRARY ::\n");
 printf("****************************************\n\n");
 
 printf("\t \33[93mEnter Book's Id : ");
 scanf("%d",&bsdsem.id);
 fflush (stdin);
 
 printf("  Enter Book's Name : ");
 scanf("%s",&bsdsem.bookname);
 fflush (stdin);
 
 printf("  Enter Author's Name : ");
 scanf("%s",&bsdsem.authorname);
 fflush (stdin);
 
 printf("\t Enter Book's Price : ");
 scanf("%d",&bsdsem.price);
 fflush (stdin);
 
 printf("\n\t\33[92m Book added Sucessful \n");
 printf("\33[93m________________________________________\n\n");

 
 fwrite (&bsdsem, sizeof(bsdsem), 1, ft2);
 fclose (ft2);
 
 
 }
 
 
 void tdbbabook(){
 
 FILE *ft3;
 ft3=fopen ("bba3rd.txt","ab");
 printf("\n\n \33[95m    :: BCA 3rd Sem. LEIBRARY ::\n");
 printf("****************************************\n\n");
 
 printf("\t\33[93m Enter Book's Id : ");
 scanf("%d",&btrdsem.id);
 fflush (stdin);
 
 printf("  Enter Book's Name : ");
 scanf("%s",&btrdsem.bookname);
 fflush (stdin);
 
 printf("  Enter Author's Name : ");
 scanf("%s",&btrdsem.authorname);
 fflush (stdin);
 
 printf("\t Enter Book's Price : ");
 scanf("%d",&btrdsem.price);
 fflush (stdin);
 
 printf("\n\t \33[92mBook added Sucessful \n");
 printf("\33[93m________________________________________\n\n");

 
 fwrite (&btrdsem, sizeof(btrdsem), 1, ft3);
 fclose (ft3);
 
 
 }
 
 
 void fhbbabook (){
 
 FILE *ft4;
 ft4=fopen ("bba4th.txt","ab");
 printf("\n\n   \33[95m  :: BCA 4th Sem. LEIBRARY ::\n");
 printf("****************************************\n\n");
 
 printf("\t\33[93m Enter Book's Id : ");
 scanf("%d",&bfrtsem.id);
 fflush (stdin);
 
 printf("  Enter Book's Name : ");
 scanf("%s",&bfrtsem.bookname);
 fflush (stdin);
 
 printf("  Enter Author's Name : ");
 scanf("%s",&bfrtsem.authorname);
 fflush (stdin);
 
 printf("\t Enter Book's Price : ");
 scanf("%d",&bfrtsem.price);
 fflush (stdin);
 
 printf("\n\t\33[92m Book added Sucessful \n");
 printf("\33[93m________________________________________\n\n");

 
 fwrite (&bfrtsem, sizeof(bfrtsem), 1, ft4);
 fclose (ft4);
 
 }
 
 
 void fibbabook(){
 FILE *ft5;
 ft5=fopen ("bba5th.txt","ab");
 printf("\n\n  \33[95m   :: BCA 5th Sem. LEIBRARY ::\n");
 printf("****************************************\n\n");
 
 printf("\t\33[93m Enter Book's Id : ");
 scanf("%d",&bftsem.id);
 fflush (stdin);
 
 printf("  Enter Book's Name : ");
 scanf("%s",&bftsem.bookname);
 fflush (stdin);
 
 printf("  Enter Author's Name : ");
 scanf("%s",&bftsem.authorname);
 fflush (stdin);
 
 
  printf("\t Enter Book's Price : ");
 scanf("%d",&bftsem.price);
 fflush (stdin);
 
 printf("\n\t\33[92m Book added Sucessful \n");
 printf("\33[93m________________________________________\n\n");

 
 fwrite (&bftsem, sizeof(bftsem), 1, ft5);
 fclose (ft5);
 
 }
 
 // menu bar

void bbabook ()
{

 while (1){
int rb;
char an[30];
   printf("\n\n\t   \33[95m   Add BBA Book");
   printf("\n***************************************\n\n");
   printf("   \33[96m    1. Add 1st Sem. BBA Book \n");
   printf("       2. Add 2nd Sem. BBA Book \n");
   printf("       3. Add 3rd Sem. BBA Book \n");
   printf("       4. Add 4th Sem. BBA Book \n");
   printf("       5. Add 5th Sem. BBA Book \n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&rb);
   printf("***************************************\n\n");
  
  switch (rb)
  {
  
  case 0 :
  printf("\n \t \33[92mExit Success ");
  printf("\n \33[93m**************************************\n");
  puts ("\n   \33[90m   Press Any key ...........");
  gets (an);
  getchar ();
  
  return ;
  break ;
  
  case 1 :
  fbbabook ();
  break ;
  
  case 2 :
  sdbbabook ();
  break ;
  
  
  case 3 :
  tdbbabook ();
  break ;
  
  
  case 4 :
  fhbbabook ();
  break ;
  
  
  case 5 :
  fibbabook ();
  break;
  
  
  default:
  printf(" \33[91m Invalid Option! Please Try Again");
  break ;
  
 }
  
  }
  

}

 ////////
 
void addbook ()
{
while (1){
int lb;
char an[30];
   printf("\n\n\t \33[95m   Add VOCATIONAL Book");
   printf("\n***************************************\n\n");
   printf(" \t \33[96m1. Add BCA Book \n");
   printf(" \t 2. Add BBA Book \n");
   printf(" \t 0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&lb);
   printf("***************************************\n\n");
  
  switch (lb)
  {
  
  case 0 :
  printf("\n \t\33[92m Exit Success ");
  printf("\n\33[93m **************************************\n");
  puts ("\n  \33[90m    Press Any key ...........");
  gets (an);
  getchar ();
  
  return ;
  break ;
  
  case 1 :
  bcabook ();
  break ;
  
  
  case 2 :
  bbabook ();
  break;
  
  
  default:
  printf(" \33[91m Invalid Option! Please Try Again");
  break ;
  
 }
  
  }


}


// view bca book

void vfbcabook(){

FILE *fp;
fp=fopen("bca1st.txt","rb");

printf("\33[93mBook Id       Book price           Book name                Author name\n\n");
while (fread (&fstsem, sizeof(fstsem), 1, fp)==1){
printf("   %-10d   %-15d    %-20s    %-20s\n",fstsem.id,fstsem.price,fstsem.bookname, fstsem.authorname);

}
fclose(fp);

}

void vsdcabook(){
FILE *fp1;
fp1=fopen("bca2nd.txt","rb");

printf("\33[93mBook Id       Book price           Book name                Author name\n\n");
while (fread (&sdsem, sizeof(sdsem), 1, fp1)==1){
printf("   %-10d   %-15d    %-20s    %-20s\n",sdsem.id,sdsem.price,sdsem.bookname, sdsem.authorname);

}
fclose(fp1);

}


void vtdcabook(){
FILE *fp2;
fp2=fopen("bca3rd.txt","rb");

printf("\33[93mBook Id       Book price           Book name                Author name\n\n");
while (fread (&trdsem, sizeof(trdsem), 1, fp2)==1){
printf("   %-10d   %-15d    %-20s    %-20s\n",trdsem.id,trdsem.price,trdsem.bookname, trdsem.authorname);

}
fclose(fp2);

}


void vfhcabook(){

 FILE *fp3;
fp3=fopen("bca4th.txt","rb");

printf("\33[93mBook Id       Book price           Book name                Author name\n\n");
while (fread (&frtsem, sizeof(frtsem), 1, fp3)==1){
printf("   %-10d   %-15d    %-20s    %-20s\n",frtsem.id,frtsem.price,frtsem.bookname, frtsem.authorname);

}
fclose(fp3);

}


void vfibcabook(){

FILE *fp4;
fp4=fopen("bca5th.txt","rb");

printf("\33[93mBook Id       Book price           Book name                Author name\n\n");
while (fread (&ftsem, sizeof(ftsem), 1, fp4)==1){
printf("   %-10d   %-15d    %-20s    %-20s\n",ftsem.id,ftsem.price,ftsem.bookname, ftsem.authorname);

}
fclose(fp4);

}




void viewbcabook()
{
while (1){
int bc;
char an[25];
   printf("\n\n    \33[96m   1. View 1st Sem. BCA Book \n");
   printf("       2. View 2nd Sem. BCA Book \n");
   printf("       3. View 3rd Sem. BCA Book \n");
   printf("       4. View 4th Sem. BCA Book \n");
   printf("       5. View 5th Sem. BCA Book \n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&bc);
   printf("***************************************\n\n");
  
  switch (bc)
  {
  
  case 0 :
  printf("\n \t\33[92m Exit Success ");
  printf("\n\33[93m **************************************\n");
  puts ("\n \33[90m     Press Any key ...........");
  gets (an);
  getchar ();
  
 return ;
  break ;
  
  case 1 :
  vfbcabook ();
  break ;
  
  case 2 :
  vsdcabook ();
  break ;
  
  
  case 3 :
  vtdcabook ();
  break ;
  
  
  case 4 :
  vfhcabook ();
  break ;
  
  
  case 5 :
  vfibcabook ();
  break;
  
  
  default:
  printf(" \33[91m Invalid Option! Please Try Again");
  break ;
  
 }
  
  }

}


// view bba book

void vfbbabook(){
FILE *ft1;
ft1=fopen("bba1st.txt","rb");

printf("\33[93mBook Id       Book price           Book name                Author name\n\n");
while (fread (&bfstsem, sizeof(bfstsem), 1, ft1)==1){
printf("   %-10d   %-15d    %-20s    %-20s\n",bfstsem.id,bfstsem.price,bfstsem.bookname, bfstsem.authorname);

}
fclose(ft1);

}


void vsdbabook(){
FILE *ft2;
ft2=fopen("bba2nd.txt","rb");

printf("\33[93mBook Id       Book price           Book name                Author name\n\n");
while (fread (&bsdsem, sizeof(bsdsem), 1, ft2)==1){
printf("   %-10d   %-15d    %-20s    %-20s\n",bsdsem.id,bsdsem.price,bsdsem.bookname, bsdsem.authorname);

}
fclose(ft2);

}


void vtdbabook(){

FILE *ft3;
ft3=fopen("bba3rd.txt","rb");

printf("\33[93mBook Id       Book price           Book name                Author name\n\n");
while (fread (&btrdsem, sizeof(btrdsem), 1, ft3)==1){
printf("   %-10d   %-15d    %-20s    %-20s\n",btrdsem.id,btrdsem.price,btrdsem.bookname, btrdsem.authorname);

}
fclose(ft3);

}


void vfhbabook(){

FILE *ft4;
ft4=fopen("bba4th.txt","rb");

printf("\33[93mBook Id       Book price           Book name                Author name\n\n");
while (fread (&bfrtsem, sizeof(bfrtsem), 1, ft4)==1){
printf("   %-10d   %-15d    %-20s    %-20s\n",bfrtsem.id,bfrtsem.price,bfrtsem.bookname, bfrtsem.authorname);

}
fclose(ft4);

}


void vfibbabook(){
FILE *ft5;
ft5=fopen("bba4th.txt","rb");

printf("\33[93mBook Id       Book price           Book name                Author name\n\n");
while (fread (&bftsem, sizeof(bftsem), 1, ft5)==1){
printf("   %-10d   %-15d    %-20s    %-20s\n",bftsem.id,bftsem.price,bftsem.bookname, bftsem.authorname);

}
fclose(ft5);

}



void viewbbabook()
{
while (1){
int cr;
char an[25];
   printf("\n\n  \33[96m     1. View 1st Sem. BBA Book \n");
   printf("       2. View 2nd Sem. BBA Book \n");
   printf("       3. View 3rd Sem. BBA Book \n");
   printf("       4. View 4th Sem. BBA Book \n");
   printf("       5. View 5th Sem. BBA Book \n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&cr);
   printf("***************************************\n\n");
  
  switch (cr)
  {
  
  case 0 :
  printf("\n \t \33[92mExit Success ");
  printf("\n \33[93m**************************************\n");
  puts ("\n    \33[90m  Press Any key ...........");
  gets (an);
  getchar ();
  
 return ;
  break ;
  
  case 1 :
  vfbbabook ();
  break ;
  
  case 2 :
  vsdbabook ();
  break ;
  
  
  case 3 :
  vtdbabook ();
  break ;
  
  
  case 4 :
  vfhbabook ();
  break ;
  
  
  case 5 :
  vfibbabook ();
  break;
  
  
  default:
  printf(" \33[91m Invalid Option! Please Try Again");
  break ;
  
 }
  
  }

}


void viewbook ()
{

while (1){
int tb;
char an[20];
   printf(" \t\33[96m 1. View BCA Book \n");
   printf(" \t 2. View BBA Book \n");
   printf(" \t 0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&tb);
   printf("***************************************\n\n");
  
  switch (tb)
  {
  
  case 0 :
  printf("\n \t \33[92mExit Success ");
  printf("\n\33[93m **************************************\n");
  puts ("\n   \33[90m   Press Any key ...........");
  gets (an);
  getchar ();
  
  return ;
  break ;
  
  case 1 :
  viewbcabook ();
  break ;
  
  
  case 2 :
  viewbbabook ();
  break;
  
  
  default:
  printf(" \33[91m Invalid Option! Please Try Again\n\n");
  break ;
  
 }
  
  }

}

// remove bca and bba books

void rfbcabook(){
FILE *fp;
FILE *fm;
int id,f=0;
fp=fopen ("bca1st.txt","rb");
fm=fopen ("temp1.txt","ab");
printf (" \t\33[93mEnter Book Id : ");
scanf ("%d",&id);
while (fread (&fstsem, sizeof(fstsem),1,fp)==1){
if (id==fstsem.id){
f=1;
}
else{
fwrite (&fstsem, sizeof(fstsem),1, fm);
}

}

if (f==1){
 printf ("\n\t\33[92mBook Delete Sucessful \n");
}

if (id!=fstsem.id){
printf("\n\t\33[91m Book not Found.......\n");
}

fclose (fp);
fclose (fm);

remove ("bca1st.txt");
rename ("temp1.txt", "bca1st.txt");

}

void rsdbcabook(){
FILE *fp1;
FILE *fm1;
int id,f=0;
fp1=fopen ("bca2nd.txt","rb");
fm1=fopen ("temp2.txt","ab");
printf ("\t\33[93m Enter Book Id : ");
scanf ("%d",&id);
while (fread (&sdsem, sizeof(sdsem),1,fp1)==1){
if (id==sdsem.id){
f=1;
}
else{
fwrite (&sdsem, sizeof(sdsem),1, fm1);
}

}

if (f==1){
 printf ("\n\t\33[92mBook Delete Sucessful \n");
}
if (id!=sdsem.id){
printf("\n\t\33[91m  Book not Found........\n");
}

fclose (fp1);
fclose (fm1);

remove ("bca2nd.txt");
rename ("temp2.txt", "bca2nd.txt");

}

void rtdbcabook(){
FILE *fp2;
FILE *fm2;
int id,f=0;
fp2=fopen ("bca3rd.txt","rb");
fm2=fopen ("temp3.txt","ab");
printf ("\t\33[93m Enter Book Id : ");
scanf ("%d",&id);
while (fread (&trdsem, sizeof(trdsem),1,fp2)==1){
if (id==trdsem.id){
f=1;
}
else{
fwrite (&trdsem, sizeof(trdsem),1, fm2);
}

}

if (f==1){
 printf ("\n\t\33[92mBook Delete Sucessful \n");
}

if (id!=trdsem.id){
printf("\n\t\33[91m  Book not Found........\n");
}

fclose (fp2);
fclose (fm2);

remove ("bca3rd.txt");
rename ("temp3.txt", "bca3rd.txt");


}

void rfhbcabook(){

FILE *fp3;
FILE *fm3;
int id,f=0;
fp3=fopen ("bca4th.txt","rb");
fm3=fopen ("temp4.txt","ab");
printf ("\t\33[93mEnter Book Id : ");
scanf ("%d",&id);
while (fread (&frtsem, sizeof(frtsem),1,fp3)==1){
if (id==frtsem.id){
f=1;
}
else{
fwrite (&frtsem, sizeof(frtsem),1, fm3);
}

}

if (f==1){
 printf ("\n\t\33[92mBook Delete Sucessful \n");
}

if (id!=frtsem.id){
printf("\n\t\33[91m  Book not Found........\n");
}

fclose (fp3);
fclose (fm3);

remove ("bca4th.txt");
rename ("temp4.txt", "bca4th.txt");

}

void rfibcabook(){
FILE *fp4;
FILE *fm4;
int id,f=0;
fp4=fopen ("bca5th.txt","rb");
fm4=fopen ("temp5.txt","ab");
printf ("\t\33[93mEnter Book Id : ");
scanf ("%d",&id);
while (fread (&ftsem, sizeof(ftsem),1,fp4)==1){
if (id==ftsem.id){
f=1;
}
else{
fwrite (&ftsem, sizeof(ftsem),1, fm4);
}

}

if (f==1){
 printf ("\n\t\33[92mBook Delete Sucessful \n");
}

if (id!=ftsem.id){
printf("\n\t\33[91m  Book not Found........\n");
}

fclose (fp4);
fclose (fm4);

remove ("bca5th.txt");
rename ("temp5.txt", "bca5th.txt");


}


void removebcabook (){

while (1){
int p;
char an[25];
   printf("\n\n   \33[96m    1. Remove 1st Sem. BCA Book \n");
   printf("       2. Remove 2nd Sem. BCA Book \n");
   printf("       3. Remove 3rd Sem. BCA Book \n");
   printf("       4. Remove 4th Sem. BCA Book \n");
   printf("       5. Remove 5th Sem. BCA Book \n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&p);
   printf("***************************************\n\n");
  
  switch (p)
  {
  
  case 0 :
  printf("\n \t\33[92m Exit Success ");
  printf("\n \33[93m **************************************\n");
  puts ("\n \33[90m     Press Any key ...........");
  gets (an);
  getchar ();
  
 return ;
  break ;
  
  case 1 :
  rfbcabook ();
  break ;
  
  case 2 :
  rsdbcabook ();
  break ;
  
  
  case 3 :
  rtdbcabook ();
  break ;
  
  
  case 4 :
  rfhbcabook ();
  break ;
  
  
  case 5 :
  rfibcabook ();
  break;
  
  
  default:
  printf(" \33[91m  Invalid Option! Please Try Again");
  break ;
  
 }
  
  }

}




void pfbbabook (){

FILE *ft1;
FILE *fk1;
int id,f=0;
ft1=fopen ("bba1st.txt","rb");
fk1=fopen ("tem1.txt","ab");
printf ("\t\33[93m Enter Book Id : ");
scanf ("%d",&id);
while (fread (&bfstsem, sizeof(bfstsem),1,ft1)==1){
if (id==bfstsem.id){
f=1;
}
else{
fwrite (&bfstsem, sizeof(bfstsem),1, fk1);
}

}

if (f==1){
 printf ("\n\t\33[92mBook Delete Sucessful \n");
}
else {
printf("\n\t\33[91m  Book not Found..........\n");
}

fclose (ft1);
fclose (fk1);

remove ("bba1st.txt");
rename ("tem1.txt", "bba1st.txt");

}

void psdbabook(){

FILE *ft2;
FILE *fk2;
int id,f=0;
ft2=fopen ("bba2nd.txt","rb");
fk2=fopen ("tem2.txt","ab");
printf ("\t\33[93m Enter Book Id : ");
scanf ("%d",&id);
while (fread (&bsdsem, sizeof(bsdsem),1,ft2)==1){
if (id==bsdsem.id){
f=1;
}
else{
fwrite (&bsdsem, sizeof(bsdsem),1, fk2);
}

}

if (f==1){
 printf ("\n\t\33[92mBook Delete Sucessful \n");
}
else {
printf("\n\t\33[91m  Book not Found..........\n");
}

fclose (ft2);
fclose (fk2);

remove ("bba2nd.txt");
rename ("tem2.txt", "bba2nd.txt");

}

void ptdbabook(){


FILE *ft3;
FILE *fk3;
int id,f=0;
ft3=fopen ("bba3rd.txt","rb");
fk3=fopen ("tem3.txt","ab");
printf ("\t\33[93m Enter Book Id : ");
scanf ("%d",&id);
while (fread (&btrdsem, sizeof(btrdsem),1,ft3)==1){
if (id==btrdsem.id){
f=1;
}
else{
fwrite (&btrdsem, sizeof(btrdsem),1, fk3);
}

}

if (f==1){
 printf ("\n\t\33[92mBook Delete Sucessful \n");
}
else {
printf("\n\t\33[91m  Book not Found..........\n");
}

fclose (ft3);
fclose (fk3);

remove ("bba3rd.txt");
rename ("tem3.txt", "bba3rd.txt");
}


void pfhbabook(){

FILE *ft4;
FILE *fk4;
int id,f=0;
ft4=fopen ("bba4th.txt","rb");
fk4=fopen ("tem4.txt","ab");
printf ("\t\33[93m Enter Book Id : ");
scanf ("%d",&id);
while (fread (&bfrtsem, sizeof(bfrtsem),1,ft4)==1){
if (id==bfrtsem.id){
f=1;
}
else{
fwrite (&bfrtsem, sizeof(bfrtsem),1, fk4);
}

}

if (f==1){
 printf ("\n\t\33[92mBook Delete Sucessful \n");
}
else {
printf("\n\t\33[91m  Book not Found..........\n");
}

fclose (ft4);
fclose (fk4);

remove ("bba4th.txt");
rename ("tem4.txt", "bba4th.txt");

}


void pfibbabook(){

FILE *ft5;
FILE *fk5;
int id,f=0;
ft5=fopen ("bba5th.txt","rb");
fk5=fopen ("tem5.txt","ab");
printf ("\t\33[93m Enter Book Id : ");
scanf ("%d",&id);
while (fread (&bftsem, sizeof(bftsem),1,ft5)==1){
if (id==bftsem.id){
f=1;
}
else{
fwrite (&bftsem, sizeof(bftsem),1, fk5);
}

}

if (f==1){
 printf ("\33[92m\n\tBook Delete Sucessful \n");
}
else {
printf("\n\t\33[91m  Book not Found..........\n");
}

fclose (ft5);
fclose (fk5);

remove ("bba5th.txt");
rename ("tem5.txt", "bba5th.txt");

}




void removebbabook(){

while (1){
int r;
char an[25];
   printf("\n\n     \33[96m  1. Remove 1st Sem. BBA Book \n");
   printf("       2. Remove 2nd Sem. BBA Book \n");
   printf("       3. Remove 3rd Sem. BBA Book \n");
   printf("       4. Remove 4th Sem. BBA Book \n");
   printf("       5. Remove 5th Sem. BBA Book \n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&r);
   printf("***************************************\n\n");
  
  switch (r)
  {
  
  case 0 :
  printf("\n \t\33[92m Exit Success ");
  printf("\n\33[93m  **************************************\n");
  puts ("\n    \33[90m  Press Any key ...........");
  gets (an);
  getchar ();
  
 return ;
  break ;
  
  case 1 :
  pfbbabook ();
  break ;
  
  case 2 :
  psdbabook ();
  break ;
  
  
  case 3 :
  ptdbabook ();
  break ;
  
  
  case 4 :
  pfhbabook ();
  break ;
  
  
  case 5 :
  pfibbabook ();
  break;
  
  
  default:
  printf(" \33[91m  Invalid Option! Please Try Again");
  break ;
  
 }
  
  }
  

}



void removebook ()
{
while (1){
int tr;
char an[20];
   printf(" \t\33[96m 1. Remove BCA Book \n");
   printf(" \t 2. Remove BBA Book \n");
   printf(" \t 0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&tr);
   printf("***************************************\n\n");
  
  switch (tr)
  {
  
  case 0 :
  printf("\n \t \33[92mExit Success ");
  printf("\n\33[93m **************************************\n");
  puts ("\n \33[90m     Press Any key ...........");
  gets (an);
  getchar ();
  
  return ;
  break ;
  
  case 1 :
  removebcabook ();
  break ;
  
  
  case 2 :
  removebbabook ();
  break;
  
  
  default:
  printf(" \33[91m  Invalid Option! Please Try Again\n\n");
  break ;
  
 }
  
  }

}

// search bca and bba book

void tfbcabook(){
FILE *fp;

int id, f=0;
printf ("\t\33[93m Enter Book Id : ");
scanf ("%d",&id);
fp=fopen ("bca1st.txt","rb");
while (fread (&fstsem, sizeof (fstsem), 1, fp)){
if (id==fstsem.id){
printf("\33[93mBook Id       Book price           Book name                Author name\n\n   %-10d   %-15d    %-20s    %-20s\n",fstsem.id,fstsem.price,fstsem.bookname, fstsem.authorname);
break;
}
}

if(id!=fstsem.id){
printf ("\n\t\33[91m  Book not Available.........");
}
fclose (fp);
}


void tsdbcabook(){

FILE *fp1;
int id,f=0;
printf ("\t\33[93m Enter Book Id : ");
scanf ("%d",&id);
fp1=fopen ("bca2nd.txt","rb");
while (fread (&sdsem, sizeof (sdsem), 1, fp1)){
if (id==sdsem.id){
printf("\33[93mBook Id       Book price           Book name                Author name\n\n   %-10d   %-15d    %-20s    %-20s\n",sdsem.id,sdsem.price,sdsem.bookname, sdsem.authorname);

}
}

if(id!=sdsem.id){
printf ("\n\t\33[91m  Book not Available.......");
}
fclose (fp1);

}


void ttdbcabook(){
FILE *fp2;
int id,f=0;
printf ("\t\33[93m Enter Book Id : ");
scanf ("%d",&id);
fp2=fopen ("bca3rd.txt","rb");
while (fread (&trdsem, sizeof (trdsem), 1, fp2)){
if (id==trdsem.id){
printf("\33[93mBook Id       Book price           Book name                Author name\n\n   %-10d   %-15d    %-20s    %-20s\n",trdsem.id,trdsem.price,trdsem.bookname, trdsem.authorname);
break ;
}
}

if(id!=trdsem.id){
printf ("\n\t\33[91m  Book not Available.......");
}
fclose (fp2);

}


void tfhbcabook(){

FILE *fp3;
int id,f=0;
printf ("\t \33[93mEnter Book Id : ");
scanf ("%d",&id);
fp3=fopen ("bca4th.txt","rb");
while (fread (&frtsem, sizeof (frtsem), 1, fp3)){
if (id==frtsem.id){
printf("\33[93mBook Id       Book price           Book name                Author name\n\n   %-10d   %-15d    %-20s    %-20s\n",frtsem.id,frtsem.price,frtsem.bookname, frtsem.authorname);

}
}

if(id!=frtsem.id){
printf ("\n\t\33[91m  Book not Available........");
}
fclose (fp3);

}


void tfibcabook(){

FILE *fp4;
int id,f=0;
printf ("\t\33[93m Enter Book Id : ");
scanf ("%d",&id);
fp4=fopen ("bca5th.txt","rb");
while (fread (&ftsem, sizeof (ftsem), 1, fp4)){
if (id==ftsem.id){
printf("\33[93mBook Id       Book price           Book name                Author name\n\n   %-10d   %-15d    %-20s    %-20s\n",ftsem.id,ftsem.price,ftsem.bookname, ftsem.authorname);

}
}

if(id!=ftsem.id){
printf ("\n\t\33[91m  Book not Available........");
}
fclose (fp4);


}



void searchbcabook(){

while (1){
int t;
char an[25];
   printf("\n\n  \33[96m     1. Search 1st Sem. BCA Book \n");
   printf("       2. Search 2nd Sem. BCA Book \n");
   printf("       3. Search 3rd Sem. BCA Book \n");
   printf("       4. Search 4th Sem. BCA Book \n");
   printf("       5. Search 5th Sem. BCA Book \n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&t);
   printf("***************************************\n\n");
  
  switch (t)
  {
  
  case 0 :
  printf("\n \t \33[92mExit Success ");
  printf("\n \33[93m**************************************\n");
  puts ("\n    \33[90m  Press Any key ...........");
  gets (an);
  getchar ();
  
 return ;
  break ;
  
  case 1 :
  tfbcabook ();
  break ;
  
  case 2 :
  tsdbcabook ();
  break ;
  
  
  case 3 :
  ttdbcabook ();
  break ;
  
  
  case 4 :
  tfhbcabook ();
  break ;
  
  
  case 5 :
  tfibcabook ();
  break;
  
  
  default:
  printf("  \33[91m Invalid Option! Please Try Again");
  break ;
  
 }
  
  }
  
  


}


////////////

void sfbbabook(){
FILE *ft1;
int id,f=0;
printf ("\t\33[93m Enter Book Id : ");
scanf ("%d",&id);
ft1=fopen ("bba1st.txt","rb");
while (fread (&bfstsem, sizeof (bfstsem), 1, ft1)){
if (id==bfstsem.id){
printf("\33[93mBook Id       Book price           Book name                Author name\n\n   %-10d   %-15d    %-20s    %-20s\n",bfstsem.id,bfstsem.price,bfstsem.bookname, bfstsem.authorname);

}
}

if(id!=bfstsem.id){
printf ("\n\t\33[91m  Book not Available.......");
}
fclose (ft1);
}

void ssdbabook(){

FILE *ft2;
int id,f=0;
printf ("\t Enter Book Id : ");
scanf ("%d",&id);
ft2=fopen ("bba2nd.txt","rb");
while (fread (&bsdsem, sizeof (bsdsem), 1, ft2)){
if (id==bsdsem.id){
printf("Book Id       Book price           Book name                Author name\n\n   %-10d   %-15d    %-20s    %-20s\n",bsdsem.id,bsdsem.price,bsdsem.bookname, bsdsem.authorname);

}
}

if(id!=bsdsem.id){
printf ("\n\t\33[91m  Book not Available.......");
}
fclose (ft2);

}

void stdbabook(){
FILE *ft3;
int id,f=0;
printf ("\t\33[93m Enter Book Id : ");
scanf ("%d",&id);
ft3=fopen ("bba3rd.txt","rb");
while (fread (&btrdsem, sizeof (btrdsem), 1, ft3)){
if (id==btrdsem.id){
printf("\33[93mBook Id       Book price           Book name                Author name\n\n   %-10d   %-15d    %-20s    %-20s\n",btrdsem.id,btrdsem.price,btrdsem.bookname, btrdsem.authorname);

}
}

if(id!=btrdsem.id){
printf ("\n\t\33[91m  Book not Available.......");
}
fclose (ft3);

}


void sfhbabook(){

FILE *ft4;
int id,f=0;
printf ("\t\33[93m Enter Book Id : ");
scanf ("%d",&id);
ft4=fopen ("bba4th.txt","rb");
while (fread (&bfrtsem, sizeof (bfrtsem), 1, ft4)){
if (id==bfrtsem.id){
printf("\33[93mBook Id       Book price           Book name                Author name\n\n   %-10d   %-15d    %-20s    %-20s\n",bfrtsem.id,bfrtsem.price,bfrtsem.bookname, bfrtsem.authorname);

}
}

if(id!=bfrtsem.id){
printf ("\n\t\33[91m  Book not Available.......");
}
fclose (ft4);
}

void sfibbabook(){
FILE *ft5;
int id,f=0;
printf ("\t\33[93m Enter Book Id : ");
scanf ("%d",&id);
ft5=fopen ("bba5th.txt","rb");
while (fread (&bftsem, sizeof (bftsem), 1, ft5)){
if (id==bftsem.id){
printf("\33[93mBook Id       Book price           Book name                Author name\n\n   %-10d   %-15d    %-20s    %-20s\n",bftsem.id,bftsem.price,bftsem.bookname, bftsem.authorname);

}
}

if(id!=bftsem.id){
printf ("\n\t\33[91m  Book not Available.......");
}
fclose (ft5);



}


void searchbbabook(){

while (1){
int s;
char an[25];
   printf("\n\n    \33[96m   1. Search 1st Sem. BBA Book \n");
   printf("       2. Search 2nd Sem. BBA Book \n");
   printf("       3. Search 3rd Sem. BBA Book \n");
   printf("       4. Search 4th Sem. BBA Book \n");
   printf("       5. Search 5th Sem. BBA Book \n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&s);
   printf("***************************************\n\n");
  
  switch (s)
  {
  
  case 0 :
  printf("\n \t\33[92m Exit Success ");
  printf("\n \33[93m**************************************\n");
  puts ("\n  \33[90m    Press Any key ...........");
  gets (an);
  getchar ();
  
 return ;
  break ;
  
  case 1 :
  sfbbabook ();
  break ;
  
  case 2 :
  ssdbabook ();
  break ;
  
  
  case 3 :
  stdbabook ();
  break ;
  
  
  case 4 :
  sfhbabook ();
  break ;
  
  
  case 5 :
  sfibbabook ();
  break;
  
  
  default:
  printf(" \33[91m  Invalid Option! Please Try Again");
  break ;
  
 }
  }

}


void searchbook ()
{
   printf("\n\n\t \33[95m SEARCH VOCATIONAL BOOK ");
   printf("\n***************************************\n\n");
while (1){
int tt;
char an[20];
   printf(" \t \33[96m1. Search BCA Book \n");
   printf(" \t 2. Search BBA Book \n");
   printf(" \t 0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&tt);
   printf("***************************************\n\n");
  
  switch (tt)
  {
  
  case 0 :
  printf("\n \t \33[92mExit Success ");
  printf("\n \33[93m**************************************\n");
  puts ("\n  \33[90m    Press Any key ...........");
  gets (an);
  getchar ();
  
  return ;
  break ;
  
  case 1 :
  searchbcabook ();
  break ;
  
  
  case 2 :
  searchbbabook ();
  break;
  
  
  default:
  printf("  \33[91m Invalid Option! Please Try Again\n\n");
  break ;
  
 }
  }
}

// issue book of bca and bba

void tffbcabook(){
FILE *fp;
int f=0;

char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(ifstsem.date, mydate);


fp=fopen("bca1st.txt","rb");
printf("\n\n\t  \33[93mEnter Issue Book Id : ");
scanf("%d",&ifstsem.id);

while (fread (&fstsem, sizeof(fstsem), 1, fp)==1){
 if (fstsem.id==ifstsem.id){
 strcpy (ifstsem.bookname, fstsem.bookname);
 f=1;
 break;
 }

}

if (f==0){
printf("\n\t  \33[91m  Book Not Found........\n");
return ;
}
fp=fopen("ibca1st.txt","ab");
 printf("\n\33[93m  Enter Student name : ");
 scanf("%s",&ifstsem.studentname);
 fflush(stdin);
 
 printf("\n\t Enter Roll Number : ");
 scanf("%d",&ifstsem.roll);
 fflush(stdin);

 
 fwrite(&ifstsem, sizeof(ifstsem), 1, fp);
 
 printf("\n\n\t\33[92m Record Sucessful ......\n");
 fclose (fp);
 
}

void tfsdbcabook(){
FILE *fp1;
int f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(isdsem.date, mydate);

fp1=fopen("bca2nd.txt","rb");
printf("\n\n\t \33[93m Enter Issue Book Id : ");
scanf("%d",&isdsem.id);

while (fread (&sdsem, sizeof(sdsem), 1, fp1)==1){
 if (sdsem.id==isdsem.id){
 strcpy (isdsem.bookname, sdsem.bookname);
 f=1;
 break;
 }

}

if (f==0){
printf("\n\t  \33[91m  Book Not Found........\n");
return ;
}
fp1=fopen("ibca2nd.txt","ab");
 printf("\n\33[93m  Enter Student name : ");
 scanf("%s",&isdsem.studentname);
 fflush(stdin);
 
 printf("\n\t Enter Roll Number : ");
 scanf("%d",&isdsem.roll);
 fflush(stdin);

 
 fwrite(&isdsem, sizeof(isdsem), 1, fp1);
 
 printf("\n\n\t\33[92m Record Sucessful ......\n");
 fclose (fp1);



}

void tftdbcabook(){
FILE *fp2;
int f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(itrdsem.date, mydate);

fp2=fopen("bca3rd.txt","rb");
printf("\n\n\t \33[93m Enter Issue Book Id : ");
scanf("%d",&itrdsem.id);

while (fread (&trdsem, sizeof(trdsem), 1, fp2)==1){
 if (trdsem.id==itrdsem.id){
 strcpy (itrdsem.bookname, trdsem.bookname);
 f=1;
 break;
 }

}

if (f==0){
printf("\n\t  \33[91m  Book Not Found........\n");
return ;
}
fp2=fopen("ibca3rd.txt","ab");
 printf("\n \33[93m Enter Student name : ");
 scanf("%s",&itrdsem.studentname);
 fflush(stdin);
 
 printf("\n\t Enter Roll Number : ");
 scanf("%d",&itrdsem.roll);
 fflush(stdin);

 
 fwrite(&itrdsem, sizeof(itrdsem), 1, fp2);
 
 printf("\n\n\t\33[92m Record Sucessful ......\n");
 fclose (fp2);

}


void tffhbcabook(){

FILE *fp3;
int f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(ifrtsem.date, mydate);

fp3=fopen("bca4th.txt","rb");
printf("\n\n\t \33[93m Enter Issue Book Id : ");
scanf("%d",&ifrtsem.id);

while (fread (&frtsem, sizeof(frtsem), 1, fp3)==1){
 if (frtsem.id==ifrtsem.id){
 strcpy (ifrtsem.bookname, frtsem.bookname);
 f=1;
 break;
 }

}

if (f==0){
printf("\n\t  \33[91m  Book Not Found........\n");
return ;
}
fp3=fopen("ibca4th.txt","ab");
 printf("\n \33[93m Enter Student name : ");
 scanf("%s",&ifrtsem.studentname);
 fflush(stdin);
 
 printf("\n\t Enter Roll Number : ");
 scanf("%d",&ifrtsem.roll);
 fflush(stdin);
 
 fwrite(&ifrtsem, sizeof(ifrtsem), 1, fp3);
 
 printf("\n\n\t\33[92m Record Sucessful ......\n");
 fclose (fp3);

}


void tffibcabook(){

FILE *fp4;
int f=0;

char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(iftsem.date, mydate);

fp4=fopen("bca5th.txt","rb");
printf("\n\n\t  \33[93mEnter Issue Book Id : ");
scanf("%d",&iftsem.id);

while (fread (&ftsem, sizeof(ftsem), 1, fp4)==1){
 if (ftsem.id==iftsem.id){
 strcpy (iftsem.bookname, ftsem.bookname);
 f=1;
 break;
 }

}

if (f==0){
printf("\n\t \33[91m  Book Not Found........\n");
return ;
}
fp4=fopen("ibca5th.txt","ab");
 printf("\n \33[93m Enter Student name : ");
 scanf("%s",&iftsem.studentname);
 fflush(stdin);
 
 printf("\n\t Enter Roll Number : ");
 scanf("%d",&iftsem.roll);
 fflush(stdin);

 
 fwrite(&iftsem, sizeof(iftsem), 1, fp4);
 
 printf("\n\n\t\33[92m Record Sucessful ......\n");
 fclose (fp4);



}

///////////

void issuebcabook (){

while (1){
int tf;
char an[25];
   printf("\n\n    \33[96m   1. Issue 1st Sem. BCA Book \n");
   printf("       2. Issue 2nd Sem. BCA Book \n");
   printf("       3. Issue 3rd Sem. BCA Book \n");
   printf("       4. Issue 4th Sem. BCA Book \n");
   printf("       5. Issue 5th Sem. BCA Book \n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&tf);
   printf("***************************************\n\n");
  
  switch (tf)
  {
  
  case 0 :
  printf("\n \t \33[92mExit Success ");
  printf("\n \33[93m**************************************\n");
  puts ("\n   \33[90m   Press Any key ...........");
  gets (an);
  getchar ();
  
 return ;
  break ;
  
  case 1 :
  tffbcabook ();
  break ;
  
  case 2 :
  tfsdbcabook ();
  break ;
  
  
  case 3 :
  tftdbcabook ();
  break ;
  
  
  case 4 :
  tffhbcabook ();
  break ;
  
  
  case 5 :
  tffibcabook ();
  break;
  
  
  default:
  printf(" \33[91m  Invalid Option! Please Try Again");
  break ;
  
 }
  
  }
  

}

///////

void dfbbabook(){
FILE *ft1;
int f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(ibfstsem.date, mydate);

ft1=fopen("bba1st.txt","rb");
printf("\n\n\t\33[93m  Enter Issue Book Id : ");
scanf("%d",&ibfstsem.id);

while (fread (&bfstsem, sizeof(bfstsem), 1, ft1)==1){
 if (bfstsem.id==ibfstsem.id){
 strcpy (ibfstsem.bookname, bfstsem.bookname);
 f=1;
 break;
 }

}

if (f==0){
printf("\n\t  \33[91m Book Not Found........\n");
return ;
}
ft1=fopen("ibba1st.txt","ab");
 printf("\n \33[93m Enter Student name : ");
 scanf("%s",&ibfstsem.studentname);
 fflush(stdin);
 
 printf("\n\t Enter Roll Number : ");
 scanf("%d",&ibfstsem.roll);
 fflush(stdin);

 fwrite(&ibfstsem, sizeof(ibfstsem), 1, ft1);
 
 printf("\n\n\t \33[92mRecord Sucessful ......\n");
 fclose (ft1);

}


void dsdbabook(){

FILE *ft2;
int f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(ibsdsem.date, mydate);

ft2=fopen("bba2nd.txt","rb");
printf("\n\n\t  \33[93mEnter Issue Book Id : ");
scanf("%d",&ibsdsem.id);

while (fread (&bsdsem, sizeof(bsdsem), 1, ft2)==1){
 if (bsdsem.id==ibsdsem.id){
 strcpy (ibsdsem.bookname, bsdsem.bookname);
 f=1;
 break;
 }

}

if (f==0){
printf("\n\t   \33[91m Book Not Found........\n");
return ;
}
ft2=fopen("ibba2nd.txt","ab");
 printf("\n \33[93m Enter Student name : ");
 scanf("%s",&ibsdsem.studentname);
 fflush(stdin);
 
 printf("\n\t Enter Roll Number : ");
 scanf("%d",&ibsdsem.roll);
 fflush(stdin);

 
 fwrite(&ibsdsem, sizeof(ibsdsem), 1, ft2);
 
 printf("\n\n\t\33[92m Record Sucessful ......\n");
 fclose (ft2);
 
}


void dtdbabook(){

FILE *ft3;
int f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(ibtrdsem.date, mydate);

ft3=fopen("bba3rd.txt","rb");
printf("\n\n\t  \33[93mEnter Issue Book Id : ");
scanf("%d",&ibtrdsem.id);

while (fread (&btrdsem, sizeof(btrdsem), 1, ft3)==1){
 if (btrdsem.id==ibtrdsem.id){
 strcpy (ibtrdsem.bookname, btrdsem.bookname);
 f=1;
 break;
 }

}

if (f==0){
printf("\n\t  \33[91m  Book Not Found........\n");
return ;
}
ft3=fopen("ibba3rd.txt","ab");
 printf("\n  \33[93mEnter Student name : ");
 scanf("%s",&ibtrdsem.studentname);
 fflush(stdin);
 
 printf("\n\t Enter Roll Number : ");
 scanf("%d",&ibtrdsem.roll);
 fflush(stdin);
 
 fwrite(&ibtrdsem, sizeof(ibtrdsem), 1, ft3);
 
 printf("\n\n\t\33[92m Record Sucessful ......\n");
 fclose (ft3);
 

}


void dfhbabook(){

FILE *ft4;
int f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(ibfrtsem.date, mydate);

ft4=fopen("bba4th.txt","rb");
printf("\n\n\t  \33[93mEnter Issue Book Id : ");
scanf("%d",&ibfrtsem.id);

while (fread (&bfrtsem, sizeof(bfrtsem), 1, ft4)==1){
 if (bfrtsem.id==ibfrtsem.id){
 strcpy (ibfrtsem.bookname, bfrtsem.bookname);
 f=1;
 break;
 }

}

if (f==0){
printf("\n\t  \33[91m  Book Not Found........\n");
return ;
}
ft4=fopen("ibba4th.txt","ab");
 printf("\n \33[93m Enter Student name : ");
 scanf("%s",&ibfrtsem.studentname);
 fflush(stdin);
 
 printf("\n\t Enter Roll Number : ");
 scanf("%d",&ibfrtsem.roll);
 fflush(stdin);

 fwrite(&ibfrtsem, sizeof(ibfrtsem), 1, ft4);
 
 printf("\n\n\t\33[92m Record Sucessful ......\n");
 fclose (ft4);


}


void dfibbabook(){

FILE *ft5;
int f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(ibftsem.date, mydate);

ft5=fopen("bba5th.txt","rb");
printf("\n\n\t\33[93m  Enter Issue Book Id : ");
scanf("%d",&ibftsem.id);

while (fread (&bftsem, sizeof(bftsem), 1, ft5)==1){
 if (bftsem.id==ibftsem.id){
 strcpy (ibftsem.bookname, bftsem.bookname);
 f=1;
 break;
 }

}

if (f==0){
printf("\n\t  \33[91m  Book Not Found........\n");
return ;
}
ft5=fopen("ibba5th.txt","ab");
 printf("\n \33[93m Enter Student name : ");
 scanf("%s",&ibftsem.studentname);
 fflush(stdin);
 
 printf("\n\t Enter Roll Number : ");
 scanf("%d",&ibftsem.roll);
 fflush(stdin);

 
 fwrite(&ibftsem, sizeof(ibftsem), 1, ft5);
 
 printf("\n\n\t\33[92m Record Sucessful ......\n");
 fclose (ft5);

}

///////////

void issuebbabook (){

while (1){
int ap;
char an[25];
   printf("\n\n   \33[96m    1. Issue 1st Sem. BBA Book \n");
   printf("       2. Issue 2nd Sem. BBA Book \n");
   printf("       3. Issue 3rd Sem. BBA Book \n");
   printf("       4. Issue 4th Sem. BBA Book \n");
   printf("       5. Issue 5th Sem. BBA Book \n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&ap);
   printf("***************************************\n\n");
  
  switch (ap)
  {
  
  case 0 :
  printf("\n \t \33[92mExit Success ");
  printf("\n\33[93m  **************************************\n");
  puts ("\n  \33[90m    Press Any key ...........");
  gets (an);
  getchar ();
  
 return ;
  break ;
  
  case 1 :
  dfbbabook ();
  break ;
  
  case 2 :
  dsdbabook ();
  break ;
  
  
  case 3 :
  dtdbabook ();
  break ;
  
  
  case 4 :
  dfhbabook ();
  break ;
  
  
  case 5 :
  dfibbabook ();
  break;
  
  
  default:
  printf("  \33[91m Invalid Option! Please Try Again");
  break ;
  
 }
  
  }

}



void Issuebook (){

printf("\n\n\t\33[95m  ISSUE VOCATIONAL BOOK ");
   printf("\n***************************************\n\n");
while (1){
int et;
char an[20];
   printf(" \t \33[96m1. Issue BCA Book \n");
   printf(" \t 2. Issue BBA Book \n");
   printf(" \t 0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&et);
   printf("***************************************\n\n");
  
  switch (et)
  {
  
  case 0 :
  printf("\n \t \33[92mExit Success ");
  printf("\n \33[93m**************************************\n");
  puts ("\n   \33[90m   Press Any key ...........");
  gets (an);
  getchar ();
  
  return ;
  break ;
  
  case 1 :
  issuebcabook ();
  break ;
  
  
  case 2 :
  issuebbabook ();
  break;
  
  
  default:
  printf(" \33[91m  Invalid Option! Please Try Again\n\n");
  break ;
  
 }
  }

}

//view issue list of bca and bba

void nfbcabook(){
FILE *fp;
fp=fopen("ibca1st.txt","rb");

printf("\33[93mBook Id    Student Name        Roll           Book name                 Date\n\n");
while (fread (&ifstsem, sizeof(ifstsem), 1, fp)==1){
printf(" \33[93m  %-5d   %-17s    %-10d    %-20s   %-s\n",ifstsem.id,ifstsem.studentname,ifstsem.roll,ifstsem.bookname,ifstsem.date);

}
fclose(fp);

}


void nsdcabook(){
FILE *fp1;
fp1=fopen("ibca2nd.txt","rb");

printf("\33[93mBook Id    Student Name        Roll           Book name                 Date\n\n");
while (fread (&isdsem, sizeof(isdsem), 1, fp1)==1){
printf(" \33[93m  %-5d   %-17s    %-10d    %-20s   %-s\n",isdsem.id,isdsem.studentname,isdsem.roll,isdsem.bookname,isdsem.date);

}
fclose(fp1);
}


void ntdcabook(){
FILE *fp2;
fp2=fopen("ibca3rd.txt","rb");

printf("\33[93mBook Id    Student Name        Roll           Book name                 Date\n\n");
while (fread (&itrdsem, sizeof(itrdsem), 1, fp2)==1){
printf("\33[93m   %-5d   %-17s    %-10d    %-20s   %-s\n",itrdsem.id,itrdsem.studentname,itrdsem.roll,itrdsem.bookname,itrdsem.date);

}
fclose(fp2);
}


void nfhcabook(){
FILE *fp3;
fp3=fopen("ibca4th.txt","rb");

printf("\33[93mBook Id    Student Name        Roll           Book name                 Date\n\n");
while (fread (&ifrtsem, sizeof(ifrtsem), 1, fp3)==1){
printf(" \33[93m  %-5d   %-17s    %-10d    %-20s   %-s\n",ifrtsem.id,ifrtsem.studentname,ifrtsem.roll,ifrtsem.bookname,ifrtsem.date);
}
fclose(fp3);

}


void nfibcabook(){
FILE *fp4;
fp4=fopen("ibca5th.txt","rb");

printf("\33[93mBook Id    Student Name        Roll           Book name                 Date\n\n");
while (fread (&iftsem, sizeof(iftsem), 1, fp4)==1){
printf(" \33[93m  %-5d   %-17s    %-10d    %-20s   %-s\n",iftsem.id,iftsem.studentname,iftsem.roll,iftsem.bookname,iftsem.date);
}
fclose(fp4);




}





///////////

void viewissuebcabook(){
while (1){
int bcr;
char an[25];
   printf("\n\n    \33[96m   1. View Issue 1st Sem. BCA Book \n");
   printf("       2. View Issue 2nd Sem. BCA Book \n");
   printf("       3. View Issue 3rd Sem. BCA Book \n");
   printf("       4. View Issue 4th Sem. BCA Book \n");
   printf("       5. View Issue 5th Sem. BCA Book \n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&bcr);
   printf("***************************************\n\n");
  
  switch (bcr)
  {
  
  case 0 :
  printf("\n \t\33[92m Exit Success ");
  printf("\n\33[93m **************************************\n");
  puts ("\n   \33[90m   Press Any key ...........");
  gets (an);
  getchar ();
  
 return ;
  break ;
  
  case 1 :
  nfbcabook ();
  break ;
  
  case 2 :
  nsdcabook ();
  break ;
  
  
  case 3 :
  ntdcabook ();
  break ;
  
  
  case 4 :
  nfhcabook ();
  break ;
  
  
  case 5 :
  nfibcabook ();
  break;
  
  
  default:
  printf(" \33[91m  Invalid Option! Please Try Again");
  break ;
  
 }
  
  }


}


///////////////

void yfbbabook(){
FILE *ft1;
ft1=fopen("ibba1st.txt","rb");

printf("\33[93mBook Id    Student Name        Roll           Book name                 Date\n\n");
while (fread (&ibfstsem, sizeof(ibfstsem), 1, ft1)==1){
printf(" \33[93m  %-5d   %-17s    %-10d    %-20s   %-s\n",ibfstsem.id,ibfstsem.studentname,ibfstsem.roll,ibfstsem.bookname,ibfstsem.date);

}
fclose(ft1);

}




void ysdbabook(){

FILE *ft2;
ft2=fopen("ibba2nd.txt","rb");

printf("\33[93mBook Id    Student Name        Roll           Book name                 Date\n\n");
while (fread (&ibsdsem, sizeof(ibsdsem), 1, ft2)==1){
printf(" \33[93m  %-5d   %-17s    %-10d    %-20s   %-s\n",ibsdsem.id,ibsdsem.studentname,ibsdsem.roll,ibsdsem.bookname,ibsdsem.date);

}
fclose(ft2);

}




void ytdbabook(){
FILE *ft3;
ft3=fopen("ibba3rd.txt","rb");

printf("\33[93mBook Id    Student Name        Roll           Book name                 Date\n\n");
while (fread (&ibtrdsem, sizeof(ibtrdsem), 1, ft3)==1){
printf("\33[93m   %-5d   %-17s    %-10d    %-20s   %-s\n",ibtrdsem.id,ibtrdsem.studentname,ibtrdsem.roll,ibtrdsem.bookname,ibtrdsem.date);

}
fclose(ft3);
}




void yfhbabook(){
FILE *ft4;
ft4=fopen("ibba4th.txt","rb");

printf("\33[93mBook Id    Student Name        Roll           Book name                 Date\n\n");
while (fread (&ibfrtsem, sizeof(ibfrtsem), 1, ft4)==1){
printf(" \33[93m  %-5d   %-17s    %-10d    %-20s   %-s\n",ibfrtsem.id,ibfrtsem.studentname,ibfrtsem.roll,ibfrtsem.bookname,ibfrtsem.date);

}
fclose(ft4);
}



void yfibbabook(){
FILE *ft5;
ft5=fopen("ibba5th.txt","rb");

printf("\33[93mBook Id    Student Name        Roll           Book name                 Date\n\n");
while (fread (&ibftsem, sizeof(ibftsem), 1, ft5)==1){
printf("\33[93m   %-5d   %-17s    %-10d    %-20s   %-s\n",ibftsem.id,ibftsem.studentname,ibftsem.roll,ibftsem.bookname,ibftsem.date);

}
fclose(ft5);

}






//////////

void viewissuebbabook(){

while (1){
int pp;
char an[25];
   printf("\n\n    \33[96m   1. View Issue 1st Sem. BBA Book \n");
   printf("       2. View Issue 2nd Sem. BBA Book \n");
   printf("       3. View Issue 3rd Sem. BBA Book \n");
   printf("       4. View Issue 4th Sem. BBA Book \n");
   printf("       5. View Issue 5th Sem. BBA Book \n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&pp);
   printf("***************************************\n\n");
  
  switch (pp)
  {
  
  case 0 :
  printf("\n \t \33[92mExit Success ");
  printf("\n \33[93m**************************************\n");
  puts ("\n  \33[90m    Press Any key ...........");
  gets (an);
  getchar ();
  
 return ;
  break ;
  
  case 1 :
  yfbbabook ();
  break ;
  
  case 2 :
  ysdbabook ();
  break ;
  
  
  case 3 :
  ytdbabook ();
  break ;
  
  
  case 4 :
  yfhbabook ();
  break ;
  
  
  case 5 :
  yfibbabook ();
  break;
  
  
  default:
  printf(" \33[91m  Invalid Option! Please Try Again");
  break ;
  
 }
  
  }
  



}




////////

void viewissuebook(){
while (1){
int trb;
char an[20];
   printf(" \t\33[96m 1. View Issue BCA Book \n");
   printf(" \t 2. View Issue BBA Book \n");
   printf(" \t 0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&trb);
   printf("***************************************\n\n");
  
  switch (trb)
  {
  
  case 0 :
  printf("\n \t\33[92m Exit Success ");
  printf("\n \33[93m**************************************\n");
  puts ("\n   \33[90m   Press Any key ...........");
  gets (an);
  getchar ();
  
  return ;
  break ;
  
  case 1 :
  viewissuebcabook ();
  break ;
  
  
  case 2 :
  viewissuebbabook ();
  break;
  
  
  default:
  printf(" \33[91m  Invalid Option! Please Try Again\n\n");
  break ;
  
 }
  
  }

}
// terms and condition of leibrary

void terms (){
char ch[20];
printf("\n\n \33[95m  :: TERMS & CONDITIONS OF LEIBRARY ::\n");
  printf("\33[95m****************************************\n\n"); 

printf("\33[91m1. Borrowing Policy:-\n\n");
printf ("\33[90m=> Users may borrow a maximum of [number] books at a time.\n");
printf ("=> The standard loan period is [duration, e.g., 7 days], with options for renewal unless the book is reserved by another user.\n\n");

printf("\33[91m2. Return Policy:-\n\n");
printf ("\33[90m=> Books must be returned by the due date. Late returns will incur fines at the rate of [amount per day].\n");
printf ("=> Users are responsible for any lost or damaged items.\n\n");

printf("\33[91m3. Reservation Policy:-\n\n");
printf("\33[90m=> Users may place holds on checked-out books. Notifications will be sent when the book is available.\n");
printf("=> Reserved books must be picked up within [number] days of notification.\n\n");

printf("\33[91m4. Conduct Guidelines:-\n\n");
printf ("\33[90m=> Users must respect library property and maintain a conducive environment.\n");
printf("=> Disruptive behavior or misuse of library resources may result in suspension of privileges.\n\n");

printf("\33[91m5. Data Privacy:-\n\n");
printf("\33[90m=> User data will be protected and used only for library purposes, in compliance with applicable privacy laws.\n");
printf("=>Users consent to the collection and use of their data as outlined in the privacy policy.\n\n");

printf("\33[91m6. Support and Feedback:-\n\n");
printf("\33[90m=>Users are encouraged to report issues and provide feedback through designated channels.\n");
printf("The library reserves the right to modify these terms and conditions at any time, with notice provided to users.\n\n");

printf("\t\tBy using the Library Management System, you acknowledge that you have read, understood, and agree to these terms and conditions.\n\n");

printf("\tpress any key.....\n\n\n");

gets(ch);
getchar();
}



// return book with fine (bca)


void xfbcabook(){

printf("\n\n\t   \33[95m Search Student Record   ");
printf("\n________________________________________\n\n");


FILE *fp;
int roll,f=0;


printf ("\t\33[93m Enter student roll : ");
scanf ("%d",&roll);
fp=fopen ("ibca1st.txt","rb");
while (fread (&ifstsem, sizeof (ifstsem), 1, fp)){
if (roll==ifstsem.roll){
printf("Book Id       Roll No.            Book name               Student name\n\n   %-10d   %-15d    %-20s    %-20s\n",ifstsem.id,ifstsem.roll,ifstsem.bookname, ifstsem.studentname);
break;
}
}

if(roll!=ifstsem.roll){
printf ("\n  \33[91m  Student don't take Book.......");
}
fclose (fp);





int day;
char date[25];
if (roll==ifstsem.roll){
printf("\n\n  \33[95m :: Student Return Book (fine) :: ");
printf("\n_______________________________________\n\n");

 
printf("   \33[93m  Enter Return of book days: ");
scanf("%d",&day);

int a=0;
int j=8;
while (1){
a=a+10;

if(day<j){
printf("\n\n\33[93mstudent name which takes book : %s",ifstsem.studentname);
 printf("\nLate return;  pay with fine : Rs 00/-");
 break ;
}

else if(day==j){
printf("\n\nStudent name which takes book : %s\n",ifstsem.studentname);
 printf("Late return;  pay with fine : Rs %d/-",a);
 break ;
}

j++;
}

char ch ;
char cp;
printf("\n\n\t Are You Submit Book?(y/n) : ");
scanf(" %c",&cp);

if (cp=='y' || cp=='Y'){
printf("\n\n\n  \33[95mStudent Record Remove To Issue List ");
printf("\n______________________________________\n\n");

FILE *fp;
FILE *fm;

fp=fopen ("ibca1st.txt","rb");
fm=fopen ("tbca1st.txt","ab");
printf (" \t\33[93mEnter Student Roll: ");
scanf ("%d",&roll);
while (fread (&ifstsem, sizeof(ifstsem),1,fp)==1){
if (roll==ifstsem.roll){
f=1;
}
else{
fwrite (&ifstsem, sizeof(ifstsem),1, fm);
}

}

if (f==1){
 printf ("\n  \33[92mStudent Detail Delete Sucessful \n");
 
}

else if (roll!=ifstsem.roll){
printf("\n   \33[91m  Student Detail not Found.......\n");
}

fclose (fp);
fclose (fm);

remove ("ibca1st.txt");
rename ("tbca1st.txt", "ibca1st.txt");




printf("\n\n  \33[95m  :: Student Record Submit :: ");
printf("\n_____________________________________\n\n");

char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(sfstsem.rdate, mydate);

FILE *fn;
fn=fopen("sbca1.txt","ab");
printf("\t\33[93menter student name : ");
scanf("%s",&sfstsem.studentname);
fflush (stdin);

printf("\tenter Roll number : ");
scanf("%d",&sfstsem.roll);
fflush (stdin);

printf("\tenter book name : ");
scanf("%s",&sfstsem.bookname);
fflush (stdin);

printf("\tenter check status : ");
scanf("%s",&sfstsem.status);
fflush (stdin);

fwrite (&sfstsem, sizeof (sfstsem), 1, fn);
fclose (fn);

printf ("\n  \33[92m  Student Detail submit Sucessful ");

}

 }


}


void xsdcabook(){

printf("\n\n\t   \33[95m Search Student Record   ");
printf("\n________________________________________\n\n");


FILE *fp1;
int roll,f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(ssdsem.rdate, mydate);

printf ("\t\33[93m Enter student roll : ");
scanf ("%d",&roll);
fp1=fopen ("ibca2nd.txt","rb");
while (fread (&isdsem, sizeof (isdsem), 1, fp1)){
if (roll==isdsem.roll){
printf("Book Id       Roll No.            Book name               Student name\n\n   %-10d   %-15d    %-20s    %-20s\n",isdsem.id,isdsem.roll,isdsem.bookname, isdsem.studentname);
break;
}
}

if(roll!=isdsem.roll){
printf ("\n  \33[91m  Student don't take Book.......");
}
fclose (fp1);





int day;
char date[25];
if (roll==isdsem.roll){
printf("\n\n  \33[95m :: Student Return Book (fine) :: ");
printf("\n_______________________________________\n\n");

printf("    \33[93m enter Return of book days: ");
scanf("%d",&day);


int a=0;
int j=8;
while (1){
a=a+10;

if(day<j){
printf("\n\nstudent name which takes book : %s",isdsem.studentname);
 printf("\nLate return;  pay with fine : Rs 00/-");
 break ;
}

else if(day==j){
printf("\n\nStudent name which takes book : %s\n",isdsem.studentname);
 printf("Late return;  pay with fine : Rs %d/-",a);
 break ;
}

j++;
}

char ch ;
char cp;
printf("\n\n\t Are You Submit Book?(y/n) : ");
scanf(" %c",&cp);

if (cp=='y' || cp=='Y'){
printf("\n\n\n\33[95m  Student Record Remove To Issue List");
printf("\n______________________________________\n\n");

FILE *fp1;
FILE *fm1;

fp1=fopen ("ibca2nd.txt","rb");
fm1=fopen ("tbca2nd.txt","ab");
printf (" \tEnter Student Roll: ");
scanf ("%d",&roll);
while (fread (&isdsem, sizeof(isdsem),1,fp1)==1){
if (roll==isdsem.roll){
f=1;
}
else{
fwrite (&isdsem, sizeof(isdsem),1, fm1);
}

}

if (f==1){
 printf ("\n \33[92m Student Detail Delete Sucessful \n");
 
}

else if (roll!=isdsem.roll){
printf("\n  \33[91m   Student Detail not Found.......\n");
}

fclose (fp1);
fclose (fm1);

remove ("ibca2nd.txt");
rename ("tbca2nd.txt", "ibca2nd.txt");


printf("\n\n  \33[95m  :: Student Record Submit :: ");
printf("\n_____________________________________\n\n");



FILE *fn1;
fn1=fopen("sbca2.txt","ab");
printf("\t\33[93menter student name : ");
scanf("%s",&ssdsem.studentname);
fflush (stdin);

printf("\tenter Roll number : ");
scanf("%d",&ssdsem.roll);
fflush (stdin);

printf("\tenter book name : ");
scanf("%s",&ssdsem.bookname);
fflush (stdin);


printf("\tenter check status : ");
scanf("%s",&ssdsem.status);
fflush (stdin);

fwrite (&ssdsem, sizeof (ssdsem), 1, fn1);
fclose (fn1);

printf ("\n   \33[92m Student Detail submit Sucessful ");
}

 }
 
}



void xtdcabook(){

printf("\n\n\t    \33[95mSearch Student Record   ");
printf("\n________________________________________\n\n");


FILE *fp2;
int roll,f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(strdsem.rdate, mydate);

printf ("\t \33[93mEnter student roll : ");
scanf ("%d",&roll);
fp2=fopen ("ibca3rd.txt","rb");
while (fread (&itrdsem, sizeof (itrdsem), 1, fp2)){
if (roll==itrdsem.roll){
printf("Book Id       Roll No.            Book name               Student name\n\n   %-10d   %-15d    %-20s    %-20s\n",itrdsem.id,itrdsem.roll,itrdsem.bookname, itrdsem.studentname);
break;
}
}

if(roll!=itrdsem.roll){
printf ("\n  \33[91m Student don't take Book.......");
}
fclose (fp2);





int day;
char date[25];
if (roll==itrdsem.roll){
printf("\n\n \33[95m  :: Student Return Book (fine) :: ");
printf("\n_______________________________________\n\n");

 
printf("   \33[93m  enter Return of book days: ");
scanf("%d",&day);

int a=0;
int j=8;
while (1){
a=a+10;

if(day<j){
printf("\n\nstudent name which takes book : %s",itrdsem.studentname);
 printf("\nLate return;  pay with fine : Rs 00/-");
 break ;
}

else if(day==j){
printf("\n\nStudent name which takes book : %s\n",itrdsem.studentname);
 printf("Late return;  pay with fine : Rs %d/-",a);
 break ;
}

j++;
}

char ch ;
char cp;
printf("\n\n\t Are You Submit Book?(y/n) : ");
scanf(" %c",&cp);

if (cp=='y' || cp=='Y'){
printf("\n\n\n \33[95m Student Record Remove To Issue List ");
printf("\n______________________________________\n\n");

FILE *fp2;
FILE *fm2;

fp2=fopen ("ibca3rd.txt","rb");
fm2=fopen ("tbca3rd.txt","ab");
printf (" \tEnter Student Roll: ");
scanf ("%d",&roll);
while (fread (&itrdsem, sizeof(itrdsem),1,fp2)==1){
if (roll==itrdsem.roll){
f=1;
}
else{
fwrite (&itrdsem, sizeof(itrdsem),1, fm2);
}

}

if (f==1){
 printf ("\n \33[92m Student Detail Delete Sucessful \n");
 
}

else if (roll!=itrdsem.roll){
printf("\n   \33[91m  Student Detail not Found.......\n");
}

fclose (fp2);
fclose (fm2);

remove ("ibca3rd.txt");
rename ("tbca3rd.txt", "ibca3rd.txt");


printf("\n\n   \33[95m :: Student Record Submit :: ");
printf("\n_____________________________________\n\n");



FILE *fn2;
fn2=fopen("sbca3.txt","ab");
printf("\t\33[93menter student name : ");
scanf("%s",&strdsem.studentname);
fflush (stdin);

printf("\tenter Roll number : ");
scanf("%d",&strdsem.roll);
fflush (stdin);

printf("\tenter book name : ");
scanf("%s",&strdsem.bookname);
fflush (stdin);

printf("\tenter check status : ");
scanf("%s",&strdsem.status);
fflush (stdin);

fwrite (&strdsem, sizeof (strdsem), 1, fn2);
fclose (fn2);

printf ("\n   \33[92m Student Detail submit Sucessful ");
}
 }

}



void xfhcabook(){

printf("\n\n\t\33[95m    Search Student Record   ");
printf("\n________________________________________\n\n");


FILE *fp3;
int roll,f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(sfrtsem.rdate, mydate);

printf ("\t \33[93mEnter student roll : ");
scanf ("%d",&roll);
fp3=fopen ("ibca4th.txt","rb");
while (fread (&ifrtsem, sizeof (ifrtsem), 1, fp3)){
if (roll==ifrtsem.roll){
printf("Book Id       Roll No.            Book name               Student name\n\n   %-10d   %-15d    %-20s    %-20s\n",ifrtsem.id,ifrtsem.roll,ifrtsem.bookname, ifrtsem.studentname);
break;
}
}

if(roll!=ifrtsem.roll){
printf ("\n\33[91m   Student don't take Book.......");
}
fclose (fp3);





int day;
char date[25];
if (roll==ifrtsem.roll){
printf("\n\n  \33[95m :: Student Return Book (fine) :: ");
printf("\n_______________________________________\n\n");

 
printf("   \33[93m  enter Return of book days: ");
scanf("%d",&day);
int a=0;
int j=8;
while (1){
a=a+10;

if(day<j){
printf("\n\nstudent name which takes book : %s",ifrtsem.studentname);
 printf("\nLate return;  pay with fine : Rs 00/-");
 break ;
}

else if(day==j){
printf("\n\nStudent name which takes book : %s\n",ifrtsem.studentname);
 printf("Late return;  pay with fine : Rs %d/-",a);
 break ;
}

j++;
}

char ch ;
char cp;
printf("\n\n\t Are You Submit Book?(y/n) : ");
scanf(" %c",&cp);

if (cp=='y' || cp=='Y'){

printf("\n\n\n  \33[95mStudent Record Remove To Issue List ");
printf("\n______________________________________\n\n");

FILE *fp3;
FILE *fm3;

fp3=fopen ("ibca4th.txt","rb");
fm3=fopen ("tbca4th.txt","ab");
printf (" \tEnter Student Roll: ");
scanf ("%d",&roll);
while (fread (&ifrtsem, sizeof(ifrtsem),1,fp3)==1){
if (roll==ifrtsem.roll){
f=1;
}
else{
fwrite (&ifrtsem, sizeof(ifrtsem),1, fm3);
}

}

if (f==1){
 printf ("\n \33[92m Student Detail Delete Sucessful \n");
 
}

else if (roll!=ifrtsem.roll){
printf("\n \33[91m    Student Detail not Found.......\n");
}

fclose (fp3);
fclose (fm3);

remove ("ibca4th.txt");
rename ("tbca4th.txt", "ibca4th.txt");



printf("\n\n   \33[95m :: Student Record Submit :: ");
printf("\n_____________________________________\n\n");



FILE *fn3;
fn3=fopen("sbca4.txt","ab");
printf("\t\33[93menter student name : ");
scanf("%s",&sfrtsem.studentname);
fflush (stdin);

printf("\tenter Roll number : ");
scanf("%d",&sfrtsem.roll);
fflush (stdin);

printf("\tenter book name : ");
scanf("%s",&sfrtsem.bookname);
fflush (stdin);

printf("\tenter check status : ");
scanf("%s",&sfrtsem.status);
fflush (stdin);

fwrite (&sfrtsem, sizeof (sfrtsem), 1, fn3);
fclose (fn3);

printf ("\n  \33[92m  Student Detail submit Sucessful ");

}
 }

}



void xfibcabook(){


printf("\n\n\t\33[95m::  Search Student Record  :: ");
printf("\n________________________________________\n\n");


FILE *fp4;
int roll,f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(sftsem.rdate, mydate);

printf ("\t \33[93mEnter student roll : ");
scanf ("%d",&roll);
fp4=fopen ("ibca5th.txt","rb");
while (fread (&iftsem, sizeof (iftsem), 1, fp4)){
if (roll==iftsem.roll){
printf("Book Id       Roll No.            Book name               Student name\n\n   %-10d   %-15d    %-20s    %-20s\n",iftsem.id,iftsem.roll,iftsem.bookname, iftsem.studentname);
break;
}
}

if(roll!=iftsem.roll){
printf ("\n  \33[91m Student don't take Book.......");
}
fclose (fp4);





int day;
char date[25];
if (roll==iftsem.roll){
printf("\n\n  \33[95m :: Student Return Book (fine) :: ");
printf("\n_______________________________________\n\n");

 
printf("   \33[93m  enter Return of book days: ");
scanf("%d",&day);

int a=0;
int j=8;
while (1){
a=a+10;

if(day<j){
printf("\n\nstudent name which takes book : %s",iftsem.studentname);
 printf("\nLate return;  pay with fine : Rs 00/-");
 break ;
}

else if(day==j){
printf("\n\nStudent name which takes book : %s\n",iftsem.studentname);
 printf("Late return;  pay with fine : Rs %d/-",a);
 break ;
}

j++;
}

char ch ;
char cp;
printf("\n\n\t Are You Submit Book?(y/n) : ");
scanf(" %c",&cp);

if (cp=='y' || cp=='Y'){
printf("\n\n\n  \33[95mStudent Record Remove To Issue List ");
printf("\n______________________________________\n\n");

FILE *fp4;
FILE *fm4;

fp4=fopen ("ibca5th.txt","rb");
fm4=fopen ("tbca5th.txt","ab");
printf (" \tEnter Student Roll: ");
scanf ("%d",&roll);
while (fread (&iftsem, sizeof(iftsem),1,fp4)==1){
if (roll==iftsem.roll){
f=1;
}
else{
fwrite (&iftsem, sizeof(iftsem),1, fm4);
}

}

if (f==1){
 printf ("\n \33[92m Student Detail Delete Sucessful \n");
 
}

else if (roll!=iftsem.roll){
printf("\n  \33[91m   Student Detail not Found.......\n");
}

fclose (fp4);
fclose (fm4);

remove ("ibca5th.txt");
rename ("tbca5th.txt", "ibca5th.txt");

printf("\n\n  \33[95m  :: Student Record Submit :: ");
printf("\n_____________________________________\n\n");



FILE *fn4;
fn4=fopen("sbca5.txt","ab");
printf("\t\33[93menter student name : ");
scanf("%s",&sftsem.studentname);
fflush (stdin);

printf("\tenter Roll number : ");
scanf("%d",&sftsem.roll);
fflush (stdin);

printf("\tenter book name : ");
scanf("%s",&sftsem.bookname);
fflush (stdin);


printf("\tenter check status : ");
scanf("%s",&sftsem.status);
fflush (stdin);

fwrite (&sftsem, sizeof (sftsem), 1, fn4);
fclose (fn4);

printf ("\n  \33[92m  Student Detail submit Sucessful ");

 }
}
}




/////////




void returnbcabook(){
while (1){
int bcd;
char an[25];
   printf("\n\n   \33[96m    1. Return 1st Sem. BCA Book \n");
   printf("       2. Return 2nd Sem. BCA Book \n");
   printf("       3. Return 3rd Sem. BCA Book \n");
   printf("       4. Return 4th Sem. BCA Book \n");
   printf("       5. Return 5th Sem. BCA Book \n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&bcd);
   printf("***************************************\n\n");
  
  switch (bcd)
  {
  
  case 0 :
  printf("\n \t \33[92mExit Success ");
  printf("\n **************************************\n");
  puts ("\n    \33[90m  Press Any key ...........");
  gets (an);
  getchar ();
  
 return ;
  break ;
  
  case 1 :
  xfbcabook ();
  break ;
  
  case 2 :
  xsdcabook ();
  break ;
  
  
  case 3 :
  xtdcabook ();
  break ;
  
  
  case 4 :
  xfhcabook ();
  break ;
  
  
  case 5 :
  xfibcabook ();
  break;
  
  
  default:
  printf(" \33[91m  Invalid Option! Please Try Again");
  break ;
  
 }
  
  }



}





// retuen book with fine (bba)

void zfbbabook(){

printf("\n\n\t\33[95m::  Search Student Record  :: ");
printf("\n________________________________________\n\n");


FILE *ft1;
int roll,f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(sbfstsem.rdate, mydate);

printf ("\t\33[93m Enter student roll : ");
scanf ("%d",&roll);
ft1=fopen ("ibba1st.txt","rb");
while (fread (&ibfstsem, sizeof (ibfstsem), 1, ft1)){
if (roll==ibfstsem.roll){
printf("Book Id       Roll No.            Book name               Student name\n\n   %-10d   %-15d    %-20s    %-20s\n",ibfstsem.id,ibfstsem.roll,ibfstsem.bookname, ibfstsem.studentname);
break;
}
}

if(roll!=ibfstsem.roll){
printf ("\n \33[91m   Student don't take Book.......");
}
fclose (ft1);





int day;
char date[25];
if (roll==ibfstsem.roll){
printf("\n\n \33[95m  :: Student Return Book (fine) :: ");
printf("\n_______________________________________\n\n");

 
printf("   \33[93m  enter Return of book days: ");
scanf("%d",&day);

int a=0;
int j=8;
while (1){
a=a+10;

if(day<j){
printf("\n\nstudent name which takes book : %s",ibfstsem.studentname);
 printf("\nLate return;  pay with fine : Rs 00/-");
 break ;
}

else if(day==j){
printf("\n\nStudent name which takes book : %s\n",ibfstsem.studentname);
 printf("Late return;  pay with fine : Rs %d/-",a);
 break ;
}

j++;
}


char ch ;
char cp;
printf("\n\n\t Are You Submit Book?(y/n) : ");
scanf(" %c",&cp);

if (cp=='y' || cp=='Y'){

printf("\n\n\n \33[95m Student Record Remove To Issue List:: ");
printf("\n______________________________________\n\n");

FILE *ft1;
FILE *fb1;

ft1=fopen ("ibba1st.txt","rb");
fb1=fopen ("bbba1st.txt","ab");
printf (" \tEnter Student Roll: ");
scanf ("%d",&roll);
while (fread (&ibfstsem, sizeof(ibfstsem),1,ft1)==1){
if (roll==ibfstsem.roll){
f=1;
}
else{
fwrite (&ibfstsem, sizeof(ibfstsem),1, fb1);
}

}

if (f==1){
 printf ("\n\33[92m  Student Detail Delete Sucessful \n");
 
}

else if (roll!=ibfstsem.roll){
printf("\n  \33[91m   Student Detail not Found.......\n");

}

fclose (ft1);
fclose (fb1);

remove ("ibba1st.txt");
rename ("bbba1st.txt", "ibba1st.txt");




printf("\n\n  \33[95m  :: Student Record Submit :: ");
printf("\n_____________________________________\n\n");



FILE *fi1;
fi1=fopen("sbbba1.txt","ab");
printf("\tenter student name : ");
scanf("%s",&sbfstsem.studentname);
fflush (stdin);

printf("\t\33[93menter Roll number : ");
scanf("%d",&sbfstsem.roll);
fflush (stdin);

printf("\tenter book name : ");
scanf("%s",&sbfstsem.bookname);
fflush (stdin);


printf("\tenter check status : ");
scanf("%s",&sbfstsem.status);
fflush (stdin);

fwrite (&sbfstsem, sizeof (sbfstsem), 1, fi1);
fclose (fi1);

printf ("\n  \33[92m  Student Detail submit Sucessful ");

}
 }
 
}


void zsdbabook(){

printf("\n\n\t\33[95m::  Search Student Record  :: ");
printf("\n________________________________________\n\n");


FILE *ft2;
int roll,f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(sbsdsem.rdate, mydate);

printf ("\t\33[93m Enter student roll : ");
scanf ("%d",&roll);
ft2=fopen ("ibba2nd.txt","rb");
while (fread (&ibsdsem, sizeof (ibsdsem), 1, ft2)){
if (roll==ibsdsem.roll){
printf("Book Id       Roll No.            Book name               Student name\n\n   %-10d   %-15d    %-20s    %-20s\n",ibsdsem.id,ibsdsem.roll,ibsdsem.bookname, ibsdsem.studentname);
break;
}
}

if(roll!=ibsdsem.roll){
printf ("\n  \33[91m  Student don't take Book.......");
}
fclose (ft2);





int day;
char date[25];
if (roll==ibsdsem.roll){
printf("\n\n  \33[95m :: Student Return Book (fine) :: ");
printf("\n_______________________________________\n\n");

 
printf("   \33[93m  enter Return of book days: ");
scanf("%d",&day);

int a=0;
int j=8;
while (1){
a=a+10;

if(day<j){
printf("\n\nstudent name which takes book : %s",ibsdsem.studentname);
 printf("\nLate return;  pay with fine : Rs 00/-");
 break ;
}

else if(day==j){
printf("\n\nStudent name which takes book : %s\n",ibsdsem.studentname);
 printf("Late return;  pay with fine : Rs %d/-",a);
 break ;
}

j++;
}

char ch ;
char cp;
printf("\n\n\t Are You Submit Book?(y/n) : ");
scanf(" %c",&cp);

if (cp=='y' || cp=='Y'){

printf("\n\n\n\33[95m  Student Record Remove To Issue List:: ");
printf("\n______________________________________\n\n");

FILE *ft2;
FILE *fb2;

ft2=fopen ("ibba2nd.txt","rb");
fb2=fopen ("bbba2nd.txt","ab");
printf (" \tEnter Student Roll: ");
scanf ("%d",&roll);
while (fread (&ibsdsem, sizeof(ibsdsem),1,ft2)==1){
if (roll==ibsdsem.roll){
f=1;
}
else{
fwrite (&ibsdsem, sizeof(ibsdsem),1, fb2);
}

}

if (f==1){
 printf ("\n\33[92m  Student Detail Delete Sucessful \n");
 
}

else if (roll!=ibsdsem.roll){
printf("\n \33[91m    Student Detail not Found.......\n");
}

fclose (ft2);
fclose (fb2);

remove ("ibbba2nd.txt");
rename ("bbba2nd.txt", "ibbba2nd.txt");


printf("\n\n   \33[95m :: Student Record Submit :: ");
printf("\n_____________________________________\n\n");



FILE *fi2;
fi2=fopen("sbbba2.txt","ab");
printf("\t\33[93menter student name : ");
scanf("%s",&sbsdsem.studentname);
fflush (stdin);

printf("\tenter Roll number : ");
scanf("%d",&sbsdsem.roll);
fflush (stdin);

printf("\tenter book name : ");
scanf("%s",&sbsdsem.bookname);
fflush (stdin);


printf("\tenter check status : ");
scanf("%s",&sbsdsem.status);
fflush (stdin);

fwrite (&sbsdsem, sizeof (sbsdsem), 1, fi2);
fclose (fi2);

printf ("\n \33[92m   Student Detail submit Sucessful ");


 }

}

}


void ztdbabook(){

printf("\n\n\t\33[95m::  Search Student Record  :: ");
printf("\n________________________________________\n\n");


FILE *ft3;
int roll,f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(sbtrdsem.rdate, mydate);

printf ("\t\33[93m Enter student roll : ");
scanf ("%d",&roll);
ft3=fopen ("ibba3rd.txt","rb");
while (fread (&ibtrdsem, sizeof (ibtrdsem), 1, ft3)){
if (roll==ibtrdsem.roll){
printf("Book Id       Roll No.            Book name               Student name\n\n   %-10d   %-15d    %-20s    %-20s\n",ibtrdsem.id,ibtrdsem.roll,ibtrdsem.bookname, ibtrdsem.studentname);
break;
}
}

if(roll!=ibtrdsem.roll){
printf ("\n\33[91m    Student don't take Book.......");
}
fclose (ft3);





int day;
char date[25];
if (roll==ibtrdsem.roll){
printf("\n\n\33[95m   :: Student Return Book (fine) :: ");
printf("\n_______________________________________\n\n");


printf("   \33[93m  enter Return of book days: ");
scanf("%d",&day);

int a=0;
int j=8;
while (1){
a=a+10;

if(day<j){
printf("\n\nstudent name which takes book : %s",ibtrdsem.studentname);
 printf("\nLate return;  pay with fine : Rs 00/-");
 break ;
}

else if(day==j){
printf("\n\nStudent name which takes book : %s\n",ibtrdsem.studentname);
 printf("Late return;  pay with fine : Rs %d/-",a);
 break ;
}

j++;
}

char ch ;
char cp;
printf("\n\n\t Are You Submit Book?(y/n) : ");
scanf(" %c",&cp);

if (cp=='y' || cp=='Y'){
printf("\n\n\n  \33[95mStudent Record Remove To Issue List:: ");
printf("\n______________________________________\n\n");

FILE *ft3;
FILE *fb3;

ft3=fopen ("ibba3rd.txt","rb");
fb3=fopen ("bbba3rd.txt","ab");
printf (" \tEnter Student Roll: ");
scanf ("%d",&roll);
while (fread (&ibtrdsem, sizeof(ibtrdsem),1,ft3)==1){
if (roll==ibtrdsem.roll){
f=1;
}
else{
fwrite (&ibtrdsem, sizeof(ibtrdsem),1, fb3);
}

}

if (f==1){
 printf ("\n\33[92m  Student Detail Delete Sucessful \n");
 
}

else if (roll!=ibtrdsem.roll){
printf("\n \33[91m   Student Detail not Found.......\n");
}

fclose (ft3);
fclose (fb3);

remove ("ibba3rd.txt");
rename ("bbba3rd.txt", "ibba3rd.txt");


printf("\n\n  \33[95m  :: Student Record Submit :: ");
printf("\n_____________________________________\n\n");



FILE *fi3;
fi3=fopen("sbbba3.txt","ab");
printf("\t\33[93menter student name : ");
scanf("%s",&sbtrdsem.studentname);
fflush (stdin);

printf("\tenter Roll number : ");
scanf("%d",&sbtrdsem.roll);
fflush (stdin);

printf("\tenter book name : ");
scanf("%s",&sbtrdsem.bookname);
fflush (stdin);

printf("\tenter check status : ");
scanf("%s",&sbtrdsem.status);
fflush (stdin);

fwrite (&sbtrdsem, sizeof (sbtrdsem), 1, fi3);
fclose (fi3);

printf ("\n  \33[92m  Student Detail submit Sucessful ");

 }
 
}

}


void zfhbabook(){

printf("\n\n\t\33[95m::  Search Student Record  :: ");
printf("\n________________________________________\n\n");


FILE *ft4;
int roll,f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(sbfrtsem.rdate, mydate);

printf ("\t\33[93m Enter student roll : ");
scanf ("%d",&roll);
ft4=fopen ("ibba4th.txt","rb");
while (fread (&ibfrtsem, sizeof (ibfrtsem), 1, ft4)){
if (roll==ibfrtsem.roll){
printf("Book Id       Roll No.            Book name               Student name\n\n   %-10d   %-15d    %-20s    %-20s\n",ibfrtsem.id,ibfrtsem.roll,ibfrtsem.bookname, ibfrtsem.studentname);
break;
}
}

if(roll!=ibfrtsem.roll){
printf ("\n \33[91m   Student don't take Book.......");
}
fclose (ft4);





int day;
char date[25];
if (roll==ibfrtsem.roll){
printf("\n\n  \33[95m :: Student Return Book (fine) :: ");
printf("\n_______________________________________\n\n");


printf("  \33[93m   enter Return of book days: ");
scanf("%d",&day);

int a=0;
int j=8;
while (1){
a=a+10;

if(day<j){
printf("\n\nstudent name which takes book : %s",ibfrtsem.studentname);
 printf("\nLate return;  pay with fine : Rs 00/-");
 break ;
}

else if(day==j){
printf("\n\nStudent name which takes book : %s\n",ibfrtsem.studentname);
 printf("Late return;  pay with fine : Rs %d/-",a);
 break ;
}

j++;
}

char ch ;
char cp;
printf("\n\n\t Are You Submit Book?(y/n) : ");
scanf(" %c",&cp);

if (cp=='y' || cp=='Y'){
printf("\n\n\n \33[95m Student Record Remove To Issue List:: ");
printf("\n______________________________________\n\n");

FILE *ft4;
FILE *fb4;

ft4=fopen ("ibba4th.txt","rb");
fb4=fopen ("bbba4th.txt","ab");
printf (" \tEnter Student Roll: ");
scanf ("%d",&roll);
while (fread (&ibfrtsem, sizeof(ibfrtsem),1,ft4)==1){
if (roll==ibfrtsem.roll){
f=1;
}
else{
fwrite (&ibfrtsem, sizeof(ibfrtsem),1, fb4);
}

}

if (f==1){
 printf ("\n\33[92m  Student Detail Delete Sucessful \n");
 
}

else if (roll!=ibfrtsem.roll){
printf("\n \33[91m   Student Detail not Found.......\n");
}

fclose (ft4);
fclose (fb4);

remove ("ibba4th.txt");
rename ("bbba4th.txt", "ibba4th.txt");



printf("\n\n  \33[95m  :: Student Record Submit :: ");
printf("\n_____________________________________\n\n");



FILE *fi4;
fi4=fopen("sbbba4.txt","ab");
printf("\t\33[93menter student name : ");
scanf("%s",&sbfrtsem.studentname);
fflush (stdin);

printf("\tenter Roll number : ");
scanf("%d",&sbfrtsem.roll);
fflush (stdin);

printf("\tenter book name : ");
scanf("%s",&sbfrtsem.bookname);
fflush (stdin);

printf("\tenter check status : ");
scanf("%s",&sbfrtsem.status);
fflush (stdin);

fwrite (&sbfrtsem, sizeof (sbfrtsem), 1, fi4);
fclose (fi4);

printf ("\n  \33[92m  Student Detail submit Sucessful ");


 }

}

}


void zfibbabook(){

printf("\n\n\t\33[95m::  Search Student Record  :: ");
printf("\n________________________________________\n\n");


FILE *ft5;
int roll,f=0;
char mydate[12];
time_t t=time(NULL);
struct tm tm=*localtime(&t);
sprintf (mydate, "%02d/%02d/%d" , tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
strcpy(sbftsem.rdate, mydate);

printf ("\t \33[93mEnter student roll : ");
scanf ("%d",&roll);
ft5=fopen ("ibba5th.txt","rb");
while (fread (&ibftsem, sizeof (ibftsem), 1, ft5)){
if (roll==ibftsem.roll){
printf("Book Id       Roll No.            Book name               Student name\n\n   %-10d   %-15d    %-20s    %-20s\n",ibftsem.id,ibftsem.roll,ibftsem.bookname, ibftsem.studentname);
break;
}
}

if(roll!=ibftsem.roll){
printf ("\n  \33[91m  Student don't take Book.......");
}
fclose (ft5);





int day;
char date[25];
if (roll==ibftsem.roll){
printf("\n\n  \33[95m :: Student Return Book (fine) :: ");
printf("\n_______________________________________\n\n");

 
printf("  \33[93m   enter Return of book days: ");
scanf("%d",&day);

int a=0;
int j=8;
while (1){
a=a+10;

if(day<j){
printf("\n\nstudent name which takes book : %s",ibftsem.studentname);
 printf("\nLate return;  pay with fine : Rs 00/-");
 break ;
}

else if(day==j){
printf("\n\nStudent name which takes book : %s\n",ibftsem.studentname);
 printf("Late return;  pay with fine : Rs %d/-",a);
 break ;
}

j++;
}

char ch ;
char cp;
printf("\n\n\t Are You Submit Book?(y/n) : ");
scanf(" %c",&cp);

if (cp=='y' || cp=='Y'){

printf("\n\n\n \33[95m Student Record Remove To Issue List:: ");
printf("\n______________________________________\n\n");

FILE *ft5;
FILE *fb5;

ft5=fopen ("ibba5th.txt","rb");
fb5=fopen ("bbba5th.txt","ab");
printf (" \tEnter Student Roll: ");
scanf ("%d",&roll);
while (fread (&ibftsem, sizeof(ibftsem),1,ft5)==1){
if (roll==ibftsem.roll){
f=1;
}
else{
fwrite (&ibftsem, sizeof(ibftsem),1, fb5);
}

}

if (f==1){
 printf ("\n \33[92m Student Detail Delete Sucessful \n");
 
}

else if (roll!=ibftsem.roll){
printf("\n  \33[91m   Student Detail not Found.......\n");
}

fclose (ft5);
fclose (fb5);

remove ("ibba5th.txt");
rename ("bbba5th.txt", "ibba5th.txt");

printf("\n\n \33[95m   :: Student Record Submit :: ");
printf("\n_____________________________________\n\n");



FILE *fi5;
fi5=fopen("sbbba5.txt","ab");
printf("\t\33[93menter student name : ");
scanf("%s",&sbftsem.studentname);
fflush (stdin);

printf("\tenter Roll number : ");
scanf("%d",&sbftsem.roll);
fflush (stdin);

printf("\tenter book name : ");
scanf("%s",&sbftsem.bookname);
fflush (stdin);

printf("\tenter check status : ");
scanf("%s",&sbftsem.status);
fflush (stdin);

fwrite (&sbftsem, sizeof (sbftsem), 1, fi5);
fclose (fi5);

printf ("\n  \33[92m  Student Detail submit Sucessful ");

 }

}

}


//////


void returnbbabook(){
while (1){
int pi;
char an[25];
   printf("\n\n   \33[96m    1. Return 1st Sem. BBA Book \n");
   printf("       2. Return 2nd Sem. BBA Book \n");
   printf("       3. Return 3rd Sem. BBA Book \n");
   printf("       4. Return 4th Sem. BBA Book \n");
   printf("       5. Return 5th Sem. BBA Book \n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&pi);
   printf("***************************************\n\n");
  
  switch (pi)
  {
  
  case 0 :
  printf("\n \t\33[92m Exit Success ");
  printf("\n\33[93m **************************************\n");
  puts ("\n   \33[90m   Press Any key ...........");
  gets (an);
  getchar ();
  
 return ;
  break ;
  
  case 1 :
  zfbbabook ();
  break ;
  
  case 2 :
  zsdbabook ();
  break ;
  
  
  case 3 :
  ztdbabook ();
  break ;
  
  
  case 4 :
  zfhbabook ();
  break ;
  
  
  case 5 :
  zfibbabook ();
  break;
  
  
  default:
  printf(" \33[91m Invalid Option! Please Try Again");
  break ;
  
 }
  
  }


}


//////

 void returnbook (){

while (1){
int trc;
char an[20];
   printf(" \t\33[96m 1. Return BCA Book \n");
   printf(" \t 2. Return BBA Book \n");
   printf(" \t 0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&trc);
   printf("***************************************\n\n");
  
  switch (trc)
  {
  
  case 0 :
  printf("\n \t\33[92m Exit Success ");
  printf("\n\33[93m **************************************\n");
  puts ("\n    \33[90m  Press Any key ...........");
  gets (an);
  getchar ();
  
  return ;
  break ;
  
  case 1 :
  returnbcabook ();
  break ;
  
  
  case 2 :
  returnbbabook ();
  break;
  
  
  default:
  printf(" \33[91m  Invalid Option! Please Try Again\n\n");
  break ;
  
 }
  
  }


}

// submit bbok records of bca and bba student

void rdfst(){

FILE *fp;
fp=fopen("sbca1.txt","rb");

printf("\33[93mStudent Name        Roll        Book name           Return Date           Status\n\n");
while (fread (&sfstsem, sizeof(sfstsem), 1, fp)==1){
printf("\33[93m%-15s     %-10d  %-20s  %-20s%-15s\n",sfstsem.studentname,sfstsem.roll,sfstsem.bookname, sfstsem.rdate,sfstsem.status);

}
fclose(fp);


}


void rdsd(){
FILE *fp1;
fp1=fopen("sbca2.txt","rb");

printf("\33[93mStudent Name        Roll        Book name           Return Date           Status\n\n");
while (fread (&sfstsem, sizeof(sfstsem), 1, fp1)==1){
printf("\33[93m%-15s     %-10d  %-20s  %-20s%-15s\n",sfstsem.studentname,sfstsem.roll,sfstsem.bookname, sfstsem.rdate,sfstsem.status);

}
fclose(fp1);



}


void rdtrd(){
FILE *fp2;
fp2=fopen("sbca3.txt","rb");

printf("\33[93mStudent Name        Roll        Book name           Return Date           Status\n\n");
while (fread (&sfstsem, sizeof(sfstsem), 1, fp2)==1){
printf("\33[93m%-15s     %-10d  %-20s  %-20s%-15s\n",sfstsem.studentname,sfstsem.roll,sfstsem.bookname, sfstsem.rdate,sfstsem.status);

}
fclose(fp2);




}


void rdfrt(){


FILE *fp3;
fp3=fopen("sbca4.txt","rb");

printf("\33[93mStudent Name        Roll        Book name           Return Date           Status\n\n");
while (fread (&sfstsem, sizeof(sfstsem), 1, fp3)==1){
printf("\33[93m%-15s     %-10d  %-20s  %-20s%-15s\n",sfstsem.studentname,sfstsem.roll,sfstsem.bookname, sfstsem.rdate,sfstsem.status);

}
fclose(fp3);



}



void rdft(){

FILE *fp4;
fp4=fopen("sbca5.txt","rb");

printf("Student Name        Roll        Book name           Return Date           Status\n\n");
while (fread (&sfstsem, sizeof(sfstsem), 1, fp4)==1){
printf("\33[93m%-15s     %-10d  %-20s  %-20s%-15s\n",sfstsem.studentname,sfstsem.roll,sfstsem.bookname, sfstsem.rdate,sfstsem.status);

}
fclose(fp4);



}






///////


void subbcabook(){

while (1){
int pit;
char an[25];
   printf("\n\n    \33[96m   1. View 1st Sem BCA Book Records\n");
   printf("       2. View 2nd Sem BCA Book Records\n");
   printf("       3. View 3rd Sem BCA Book Records\n");
   printf("       4. View 4th Sem BCA Book Records\n");
   printf("       5. View 5th Sem BCA Book Records\n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&pit);
   printf("***************************************\n\n");
  
  switch (pit)
  {
  
  case 0 :
  printf("\n \t \33[92mExit Success ");
  printf("\n\33[93m **************************************\n");
  puts ("\n  \33[90m    Press Any key ...........");
  gets (an);
  getchar ();
  
 return ;
  break ;
  
  case 1 :
  rdfst ();
  break ;
  
  case 2 :
  rdsd ();
  break ;
  
  
  case 3 :
  rdtrd();
  break ;
  
  
  case 4 :
  rdfrt();
  break ;
  
  
  case 5 :
  rdft ();
  break;
  
  
  default:
  printf(" \33[91m Invalid Option! Please Try Again");
  break ;
  
 }
  
  }






}
///////////
void rfst(){
FILE *ft1;
ft1=fopen("sbbba1.txt","rb");

printf("\33[93mStudent Name        Roll        Book name           Return Date           Status\n\n");
while (fread (&sfstsem, sizeof(sfstsem), 1, ft1)==1){
printf("\33[93m%-15s     %-10d  %-20s  %-20s%-15s\n",sfstsem.studentname,sfstsem.roll,sfstsem.bookname, sfstsem.rdate,sfstsem.status);

}
fclose(ft1);


}



void rsd(){
FILE *ft2;
ft2=fopen("sbbba2.txt","rb");

printf("\33[93mStudent Name        Roll        Book name           Return Date           Status\n\n");
while (fread (&sfstsem, sizeof(sfstsem), 1, ft2)==1){
printf("\33[93m%-15s     %-10d  %-20s  %-20s%-15s\n",sfstsem.studentname,sfstsem.roll,sfstsem.bookname, sfstsem.rdate,sfstsem.status);

}
fclose(ft2);



}




void rtrd(){
FILE *ft3;
ft3=fopen("sbbba3.txt","rb");

printf("\33[93mStudent Name        Roll        Book name           Return Date           Status\n\n");
while (fread (&sfstsem, sizeof(sfstsem), 1, ft3)==1){
printf("\33[93m%-15s     %-10d  %-20s  %-20s%-15s\n",sfstsem.studentname,sfstsem.roll,sfstsem.bookname, sfstsem.rdate,sfstsem.status);

}
fclose(ft3);




}




void rfrt(){
FILE *ft4;
ft4=fopen("sbbba4.txt","rb");

printf("\33[93mStudent Name        Roll        Book name           Return Date           Status\n\n");
while (fread (&sfstsem, sizeof(sfstsem), 1, ft4)==1){
printf("\33[93m%-15s     %-10d  %-20s  %-20s%-15s\n",sfstsem.studentname,sfstsem.roll,sfstsem.bookname, sfstsem.rdate,sfstsem.status);

}
fclose(ft4);



}




void rft(){
FILE *ft5;
ft5=fopen("sbbba5.txt","rb");

printf("\33[93mStudent Name        Roll        Book name           Return Date           Status\n\n");
while (fread (&sfstsem, sizeof(sfstsem), 1, ft5)==1){
printf("\33[93m%-15s     %-10d  %-20s  %-20s%-15s\n",sfstsem.studentname,sfstsem.roll,sfstsem.bookname, sfstsem.rdate,sfstsem.status);

}
fclose(ft5);




}



///////

void subbbabook (){


while (1){
int pii;
char an[25];
   printf("\n\n   \33[96m    1. View 1st Sem BBA Book Records\n");
   printf("       2. View 2nd Sem BBA Book Records\n");
   printf("       3. View 3rd Sem BBA Book Records\n");
   printf("       4. View 4th Sem BBA Book Records\n");
   printf("       5. View 5th Sem BBA Book Records\n");
   printf("       0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&pii);
   printf("***************************************\n\n");
  
  switch (pii)
  {
  
  case 0 :
  printf("\n \t\33[92m Exit Success ");
  printf("\n\33[93m **************************************\n");
  puts ("\n   \33[90m   Press Any key ...........");
  gets (an);
  getchar ();
  
 return ;
  break ;
  
  case 1 :
  rfst ();
  break ;
  
  case 2 :
  rsd ();
  break ;
  
  
  case 3 :
  rtrd();
  break ;
  
  
  case 4 :
  rfrt();
  break ;
  
  
  case 5 :
  rft ();
  break;
  
  
  default:
  printf(" \33[91m  Invalid Option! Please Try Again");
  break ;
  
 }
  
  }





}


///////

void subbook (){

while (1){
int trcf;
char an[20];
   printf(" \t\33[96m 1. View Submit BCA Book Records\n");
   printf(" \t 2. View Submit BBA Book Records\n");
   printf(" \t 0. Exit \n\n");
   
   printf("       Enter Choise Option : ");
   scanf("%d",&trcf);
   printf("***************************************\n\n");
  
  switch (trcf)
  {
  
  case 0 :
  printf("\n \t\33[92m Exit Success ");
  printf("\n\33[93m **************************************\n");
  puts ("\n   \33[90m   Press Any key ...........");
  gets (an);
  getchar ();
  
  return ;
  break ;
  
  case 1 :
  subbcabook ();
  break ;
  
  
  case 2 :
  subbbabook ();
  break;
  
  
  default:
  printf(" \33[91m  Invalid Option! Please Try Again\n\n");
  break ;
  
 }
  
  }


}



// main function login page 


int main()
{
  char an[25];
  char username [25] = "shivam2024";
  char password [25] = "shivam1234";
  char un [25];
  char pd [25];


    printf("\n\t \33[1m \33[95m   -: LOGIN PAGE :-  \n");
    printf("\t\33[0m\33[95m*************************\n");
    
   while (1){
    printf("\n  \33[0m     Enter Username : ");
    scanf("%s",&un);
    printf("\n       Enter Password : ");
    scanf("%s",&pd);
    
    if (strcmp(username,un)==0 && strcmp (password,pd)==0){
    printf("\n\t  \33[92m Login Sucessful.....");
    printf("\n\33[93m________________________________________\n");
    break;
    }
    else{
    printf("\n\33[91m     Incorrect Username Or Password\n");
    }
    puts ("\n         Please Try Again.....");
    printf("\n________________________________________\n");
  
  gets (an);
  getchar ();
  
 } 
  
  while (1)
  {
  int ch;
  printf("\n\n \033[95m :: BCA LEIBRARY MANAGEMENT SYSTEM ::\n");
  printf("****************************************\n"); 
  printf("\n  \033[96m         1. Terms & Condition ");
  printf("\n           2. Add Books ");
  printf("\n           3. View Books List");
  printf("\n           4. Remove Books ");
  printf("\n           5. Search Book ");
  printf("\n           6. Issue Book ");
  printf("\n           7. View Issue Book List");
  printf("\n           8. Return Book With Fine");
  printf("\n           9. View Submit Book Records");
  printf("\n           0. Exit \n");
  printf("\n Enter choose option : ");
  scanf("%d",&ch);
  printf("\33[93m________________________________________\n\n");
  
  switch (ch)
  {
  
  case 0 :
  printf(" \t\33[92m Exit Success ");
  return 0;
  break;
  
  
  case 1:
  terms ();
  break;
  
  
   case 2 :
   addbook ();
   break ;
   
   
   case 3 :
   viewbook ();
   break;
   
   
   case 4 :
   removebook ();
   break;
   
   
   case 5 :
   searchbook ();
   break;
   
   
   case 6 :
   Issuebook ();
   break ;
   
   
   case 7 :
   viewissuebook ();
   break;
   
   
   case 8 :
   returnbook();
   break;
   
   
   case 9 :
   subbook();
   break;
   
   default :
   printf("  \33[91m Invalid Option! Please Try Again");
   break;
  
  }
} 
    return 0;
}
