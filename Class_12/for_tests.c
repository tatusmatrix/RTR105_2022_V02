// NB! for( ; ; ) - cikla for () iekavās VINEMĒR ir divi - ;
// darbības pirms for(..., ..., ... ; ; ) pirmā ;
//                    tiek izpildītas tikai vienu reizi
//                    šis darbības var būt vairākas - nodalītas ar - ,

// for(1.;2.5.8.11.;4.7.10.) / darbību izpildes secība
//  3.6.9. // tikmēr, kamēr iztiekmēs daļā (starp ;;) nebūs false

// for( ; izteiksme ; ) viena_darbiiba;
// for( ; izteiksme ; )
//  viena_darbiiba;
// for( ; izteiksme ; ) {pirmaa_darbiiba; otraa_darbiiba;}
// for( ; izteiksme ; )
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
 //unsigned char c;
 char c;

 for(c=10 ; c>=0 ; c--)
  {
  printf("c = %d\n",c);
  }
 printf("Izdruka ar printf aiz cikla:\n");
 printf("c = %d\n",c);

 printf("\n");
 c = 10;
 for( ; c>=0 ; c--)
  {
  printf("c = %d\n",c);
  }
 printf("Izdruka ar printf aiz cikla:\n");
 printf("c = %d\n",c);

 printf("\n");
 for(c=10 ; c>=0 ; )
  {
  printf("c = %d\n",c);
  c--;
  }
 printf("Izdruka ar printf aiz cikla:\n");
 printf("c = %d\n",c);

 printf("\n");
 for(c=10 ; c>=0 ; printf("c = %d\n",c), c--)
  {
  ;
  }
 printf("Izdruka ar printf aiz cikla:\n");
 printf("c = %d\n",c);

 return 0;
 }





