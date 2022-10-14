// "Ievads algoritmu valodā C", Juris Ziemelis
#include<stdio.h>

int main()
 {
 //printf("a mainīgā vērtība pirms deklarēšanas: %c\n",a);
 // nedrīkst izmantot pirms deklarēšanas!

 char a; // mainīgā ar identifikatoru (vai vārdu) "a" deklarēšana
         // ar identifikatoru a viennozīmīgi tiek sasaistīts kāds
         // atmiņas apgabals - kur (vai vieta)? un cik (vai izmērs)?
         // uz jautājumu detalizēti kur? (adrese) atbildēsim citā nodarbībā
         // cik? - 1 byte, jo ... char (atbilstoši datu tipam)
         // komentārs par vārdu (vai identifikatoru) - drīkst saturēt _
         // burtus (ir starpība starp lieliem un maziem burtiem - a nav A - casesensitive),
         // ciparus, bet nedrīkst sākties ar ciparu,
         // var būt mnemonisks, piemēram - cilindra_tilpums
 printf("a mainīgā vērtība (kā simbols) uzreiz pēc deklarēšanas: %c\n",a);
 printf("a mainīgā vērtība (kā dec skaitlis) uzreiz pēc deklarēšanas: %d%c",a,10);
 printf("a mainīgā vērtība (kā hex skaitlis) uzreiz pēc deklarēšanas: %#x\n",a);
 printf("a mainīgā vērtība (kā oct skaitlis) uzreiz pēc deklarēšanas: %#o\n",a);
 //; ; ; ; ; ; ; ; // daudzi tukšie operatori

 //int a;
 //nedrīkst (šādi) pārdeklarēt mainīgo

 // NB! mainīgā būtība - mainīties
 a = 89; // "=" - piešķiršanas oparācija
         // pa kreisi ir - 89 - atbilstoši noformējumam (pierakstam) tā ir
         // int tipa (4 bytes) konstante pierakstīta, izmantojot dec skaitīšanas sistēmu
         // => 89 = 64(2^6) + 16(2^4) + 8(2^3) + 1(2^0)
         // 0000 0000  0000 0000  0000 0000  0101 1001
         // a = 89; -> mainīgā a 1 baitā tiek ierakstīts 0101 1001
 printf("\na mainīgā vērtība (kā simbols) pēc piešķiršanas: %c\n",a);
 printf("a mainīgā vērtība (kā dec skaitlis) pēc piešķiršanas: %d\n",a);
 printf("a mainīgā vērtība (kā hex skaitlis) pēc piešķiršanas: %#x\n",a);
 printf("a mainīgā vērtība (kā oct skaitlis) pēc piešķiršanas: %#o\n",a);

 a = 0x4c;
 printf("\na mainīgā vērtība (kā simbols) pēc piešķiršanas: %c\n",a);
 printf("a mainīgā vērtība (kā dec skaitlis) pēc piešķiršanas: %d\n",a);
 printf("a mainīgā vērtība (kā hex skaitlis) pēc piešķiršanas: %#x\n",a);
 printf("a mainīgā vērtība (kā oct skaitlis) pēc piešķiršanas: %#o\n",a);

 a = 160;
 // char -> signed char => -128 ... 0 ... 127
 // 160(dec) -> 128(2^7) + 32(2^5) -> 0000 0000  0000 0000  0000 0000  1010 0000
 // mūsu (iekš a) ricībā ir (1)010 0000 => ir "-" zīme => nākamie biti pa tiešo 
 // uzrezi netiek pārveidoti par dec
 // (1)010 0000
 //    101 1111 - zīmes gadījumā atlikušos bitus invērtē un
 //   +       1 - pieskaitā bināro 1
 //   110  0000 - un tikai tagad rēķina dec skaitli - 1*2^6 + 1*2^5 = 96
 // tieši tāpēc gala rezultāts ir -96
 printf("\na mainīgā vērtība (kā simbols) pēc piešķiršanas: %c\n",a);
 printf("a mainīgā vērtība (kā dec skaitlis) pēc piešķiršanas: %d\n",a);
 printf("a mainīgā vērtība (kā hex skaitlis) pēc piešķiršanas: %#x\n",a);
 printf("a mainīgā vērtība (kā oct skaitlis) pēc piešķiršanas: %#o\n",a);

 a = 320;
 printf("\na mainīgā vērtība (kā simbols) pēc piešķiršanas: %c\n",a);
 printf("a mainīgā vērtība (kā dec skaitlis) pēc piešķiršanas: %d\n",a);
 printf("a mainīgā vērtība (kā hex skaitlis) pēc piešķiršanas: %#x\n",a);
 printf("a mainīgā vērtība (kā oct skaitlis) pēc piešķiršanas: %#o\n",a);

 char b = 93; // definēšana - deklarēšāna ar piešķiršanu
              // prioritārā (tiks izpildīta pirmā) darbība šeit ir deklarēšana
              // piešķiršanas operācijai ir zemākā prioritāte
 return 0;
 }
