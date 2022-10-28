// do viena_darbiiba; while(izteiksme); //NB! do ... while gadījumā
//                                      pēc while iekavām () ir ;

// do
//  viena_darbiiba;
// while(izteiksme);

// do {pirmaa_darbiiba; otraa_darbiiba;} while(izteiksme);

// do
//  {
//  pirmaa_darbiiba;
//  otraa_darbiiba;
//  }
// while(izteiksme);

// tāpat kā iepriekš viena_darbiiba vai pirmaa_darbiiba utt.
// tiks (regulāri) izpildītas ja izteiksmes rezultāts ir "true"
// "true" - 1 rezultāta kaut vienā bitā
// "false" - 0 visos rezultāta bitos

#include<stdio.h>

int main()
 {
 char c = 10;

 do
  {
  printf("c = %d\n",c);
  c--;
  }
 while(c>=0);

 printf("Izdruka ar printf aiz cikla:\n");
 printf("c = %d\n",c);

 printf("\n");
 c = -11;
 do
  {
  printf("c = %d\n",c);
  c--;
  }
 while(c>=0);

 printf("Izdruka ar printf aiz cikla:\n");
 printf("c = %d\n",c);

 return 0;
 }





