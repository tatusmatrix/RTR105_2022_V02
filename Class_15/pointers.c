#include<stdio.h>

int main()
 {
 int i_value = 8563;
 printf("i_value (variable name used) = %d\n",i_value);
 printf("size of i_value = %ld (bytes)\n",sizeof(i_value)); // size depends on data type


 int *i_pointer = &i_value; // norāde i_pointer (tas arī mainīgais)
                            // saturēs mainīgā i_value adresi
 printf("address of i_value (value of i_pointer) = %p\n",i_pointer);
 printf("size of i_pointer = %ld (bytes)\n",sizeof(i_pointer)); // size depends on
                                                               // computer architecture
 // nowdays 64 bit architecture -> 8 bytes
 // 0x7fffdbdbe28c (6 bytes) -> 0x00007fffdbdbe28c (8 bytes)
 // 2^64 -> 18446744073709551616 bits -> 2305843009213693952 bytes -> 2 exa bytes
 printf("i_value (address used) = %d\n",*i_pointer);

 *i_pointer = (*i_pointer) + 10;
 printf("i_value (variable name used; after change) = %d\n\n",i_value);


 double d_value = 1.25e-2;
 printf("d_value (variable name used) = %f\n",d_value);
 printf("d_value (variable name used) = %.4f\n",d_value);
 printf("size of d_value = %ld (bytes)\n",sizeof(d_value));

 double *d_pointer = &d_value;
 printf("address of d_value (value of d_pointer) = %p\n",d_pointer);
 printf("size of d_pointer = %ld (bytes)\n",sizeof(d_pointer));
 printf("d_value (address used) = %f\n\n",*d_pointer);

 // piemēram:
 // i_value aizņem 0x7ffe3effeadc
 //                0x7ffe3effeadd
 //                0x7ffe3effeade
 //                0x7ffe3effeadf
 // d_value aizņem 0x7ffe3effeae0
 //                0x7ffe3effeae1
 //                0x7ffe3effeae2
 //                0x7ffe3effeae3
 //                0x7ffe3effeae4
 //                0x7ffe3effeae5
 //                0x7ffe3effeae6
 //                0x7ffe3effeae7
 // nākamais mainīgais tiks novietots sākot ar
 //                0x7ffe3effeae8

 return 0;
 }
