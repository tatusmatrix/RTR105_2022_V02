// visas atbildes ir šeit - https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2596.pdf
// https://github.com/tatusmatrix/RTR105_2022_V01/blob/main/Class_10/operations_tests.c
// https://github.com/tatusmatrix/RTR105_2022_foreign/blob/main/Class_10/operations_tests.c

// operācijas:       operands_1  operācija  operands_2     |operācija operands|
//                  (datu tips)            (datu tips)     |operands operācija|
//                                   ||
//                                   \/
//                          operācijas_rezultāts
//                               (datu tips)
//
// parasti operācijas rezultāta datu tips ir "lielākais" datu tips, kas tiek izmantots operācijā
// 4(int datu tipa konstante) + 6.5(double -"-) => 11.5(double -"-)

// matemātiskās: +, -, *, /, %, ++, --
//               int i1 = 5, i2 = 6, ir;
//               ir = i1 + i2; // pēc šīs (šīm) operācija(ām) ir vērtība būs 11
//               ir = ir + 10; // -"- ir vērtība būs 21
//               ir += 10; // tas ir tas pats ir = ir + 10; tikai kompakti pierakstīts
//               ir++; // ir = ir + 1; vai ir += 1;
//               ++ir; // starpība starp i++ un ++i ir sekojošā:
//                     // sākumā ir izmantošana un tad ir palielināšan
//                     // sākumā ir palielināšana un tad ir izmantošana
//               int i3 = ir++, i4 = ++ir;

// attiecību: <, <=, >=, >, ==, !=
//               // attiecību operācijas rezultāts ir ar int datu tipu

// loģiskās: &&, ||, ! (1 operands)

// loģiskās pa bitiem: &, |, ^, ~ (1 operands)
// bitu: >>, <<

// Ko pētīt šodien: kā strādā operācija?
//                  vai operācijā drīkst izmantot jebkuru datu tipu?
//                  operāciju izpildīšanas secība? (to nosaka prioritāte;
//                                                  secības kontrolei izmanto ())
// / (int/int vai char/char), %, &, |, ^, !, &&, ||, <<, >>

#include<stdio.h>

int main()
 {
 char c1 = 'A', c2 = 0x45;
 int i1 = 2000, i2 = 01056;
 float f1 = 2.3, f2 = -770.896;
 double d1 = -5.6e4, d2 = 456.8e-3;

 printf("\n%d (%ld bytes) * %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",c1*i1,sizeof(c1*i1));

 return 0;
 }
