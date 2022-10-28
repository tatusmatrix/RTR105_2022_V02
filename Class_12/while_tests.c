// while(izteiksme) viena_darbiiba;
  // tāpat kā bija ar if(izteiksme) viena_darbiiba;
// while(izteiksme)
//  viena_darbiiba;
// while(izteiksme) {pirmaa_darbiiba; otraa_darbiiba;}
// while(izteiksme)
//  {
//  pirmaa_darbiiba;
//  otraa_darbiiba;
//  }

// tāpat kā iepriekš viena_darbiiba vai pirmaa_darbiiba utt.
// tiks (regulāri) izpildītas ja izteiksmes rezultāts ir "true"
// "true" - 1 rezultāta kaut vienā bitā
// "false" - 0 visos rezultāta bitos

#include<stdio.h>

int main()
 {
 char c = 10;

 while(c>=0)
// while(c)// c == 0
  {
  printf("c = %d\n",c);
  //c = -7;
  c--; // c = c - 1; // c -= 1; // c += -1; // --c;
  if(c == 5)
   break;
  }

 printf("Izdruka ar printf aiz cikla:\n");
 printf("c = %d\n",c);

 return 0;
 }





