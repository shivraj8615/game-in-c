# include<stdio.h>
# include<stdlib.h>
# include<time.h>
int main(void){
int num,guess,n=1;
srand(time(0));
num=rand()%100+1;
//printf("Your number%d",num);
 do{
 printf("Guess a number\n");
 scanf("%d",&guess);
 if(guess>num)
 {
 printf("Enter a Lower Number\n");
 
 }
 else if(guess<num)
 {
 printf("Enter a Higher Number\n");
 
 }
 else{
 printf("You guessed it in %d attempts\n",n);
 }
 n++;
 }while(guess!=num);
 return 0;
 }


