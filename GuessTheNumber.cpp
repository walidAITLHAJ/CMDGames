#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   srand(time(NULL));
   int nombreMystere = (rand() % (100 - 1 + 1)) + 1;
   int guess,a,cpt1=0;

    do{
   printf("What is the mystery number? : ");
   scanf("%d",&guess);
   if(guess < nombreMystere)
    printf("Go Higher !\n");
   else if(guess > nombreMystere)
    printf("Lower !\n");
    cpt1++;

   }while(guess!=nombreMystere);
        printf("Congrats, You found the number in %d tries !!!",cpt1);
        scanf("%d",&a);

}
