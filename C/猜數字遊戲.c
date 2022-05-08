#include <stdio.h>

#include <stdlib.h>

#include <time.h>

void main()

{

 int a, b;

 srand(time(NULL));

 a=(rand()%100)+1;

 printf("1st. 1 - 100 =>");

 scanf("%d", &b);

 if(b==a) {

   printf("Bingo!\n");

   return;

   }

 printf("2nd. 1 - 100 =>");

 scanf("%d", &b);

 if(b==a) {

   printf("Bingo!\n");

   return;

   }

 printf("3rd. 1 - 100 =>");

 scanf("%d", &b);

 if(b==a) {

   printf("Bingo!\n");

   return;

   }

 printf("The Answer is %d .\n", a);

}
