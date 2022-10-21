// nosacījuma operators if tiek izmantots koda izpildes sazarošanai
// if(izteiksme) darbiiba_1_gab;
// if(izteiksme)
//   darbiiba_1_gab;
// nozīmē sekojošo - darbiiba_1_gab tiks izpildīta tad, kad
//                   izteiksmes izpildīšanas rezultāts ir "true"
//                   par "true" nozīmi - skat. iepriekšējo nodarbību
// if(izteiksme) {1_darbiiba; 2_darbiiba; ...;}
// if(izteiksme)
//   {
//   1_darbiiba;
//   2_darbiiba;
//   ...;
//   }
// ar {} apzīmē (jēb nodala) darbību bloku

// if(izteiksme) darbiiba_1_gab; else savaadaakaa_darbiiba_1_gab;
// if(izteiksme)
//   darbiiba_1_gab;
// else
//   savaadaakaa_darbiiba_1_gab;

// if(izteiksme) {1_darbiiba; 2_darbiiba; ...;} else {1_s_darbiiba; ...;}
// if(izteiksme)
//   {
//   1_darbiiba;
//   2_darbiiba;
//   ...;
//   }
// else
//   {
//   1_s_darbiiba;
//   ...;
//   }
// else VIENMĒR "pieder" kādam if un atrodas vienas darbības vai darbību
//                                   bloka "attālumā" no if
//      un tam NAV sava pārbaudāma izteiksme

// ja vajag kaut ko "elif" veidīgo
// if(izteiksme_1)
//   {
//   ;// ; - tukš operators - neko nedara, bet laiku nedaudz patērē
//   }
// else
//   {
//   if(izteiksme_2)
//     {
//     ;
//     }
//   }

#include<stdio.h>

int main()
 {
 int a, b;
 printf("Cienījamais lietotāj, lūdzu, ievadi divus skaitļus: ");
 scanf("%d",&a);
 scanf("%d",&b);

 if(a>b)
  {
  //else ;
  printf("Tavs ievadītais a(%d) ir lielāks par ievadīto b(%d)\n",a,b);
  }
 else
  {
  printf("Tavs ievadītais a(%d) nav lielāks par ievadīto b(%d)\n",a,b);
  if(a==b)
   printf("Vēl vairāk, a(%d) ir vienāds ar b(%d)\n",a,b);
  else
   printf("Vēl vairāk, a(%d) ir mazāks par b(%d)\n",a,b);
  }

 // komentārs par PU3:
 // lietotājs ievadīs 3 skaitļus, kuri tiks saglabāti 3 mainīgajos
 // 1. algoritms - attēlot šos mainīgos dažādā secībā - a,b,c vai a,c,b vai b,a,c utt.
 // 2. algoritms - samainīt mainīgo vērtības vietām un beigās vienmēr attēlot a,b,c

 // saistībā ar 2. algoritmu jautājums
 // a ir 5 un b ir 10, kā dabūt, lai a ir 10 un b ir 5?
 // viens no risinājumiem temp = a; a = b; b = temp;

 // https://www.geeksforgeeks.org/swap-two-numbers-without-using-temporary-variable/

 return 0;
 }
