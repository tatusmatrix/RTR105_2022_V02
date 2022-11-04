#include<stdio.h>
// pirms piesaukšanas funkcijām, tāpat kā mainīgājiem, ir jābūt vismaz deklarētām

void dialogs();
char dialogs_with_return();
char dialogs_with_arguments(char c_dialogs_argument);

int main()
 {
 char c_main_local;

 dialogs();

 {;;;;;;;}

 dialogs();

 c_main_local = dialogs_with_return();
 printf("Ievadītais skaitlis (izdruka no main): %hhd\n",c_main_local);

 c_main_local = dialogs_with_arguments(c_main_local);
 printf("Ievadītais skaitlis (izdruka no main): %hhd\n",c_main_local);

 return 0;
}


// ------------------------ user functions -----------------------
void dialogs()
 {
 char c_dialogs_local;

 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("%hhd",&c_dialogs_local);
 printf("Ievadītais skaitlis (izdruka no dialogs): %hhd\n",c_dialogs_local);
 }

char dialogs_with_return()
 {
 char c_dialogs_local;

 printf("\nCienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("%hhd",&c_dialogs_local);
 printf("Ievadītais skaitlis (izdruka no dialogs_with_return): %hhd\n",c_dialogs_local);

 return c_dialogs_local;
 }

char dialogs_with_arguments(char c_dialogs_argument)
 {
 printf("\nIepreikšējais ievadītais skaitlis (izdruka no dialogs_with_arguments): %hhd\n",c_dialogs_argument);
 printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("%hhd",&c_dialogs_argument);
 printf("Ievadītais skaitlis (izdruka no dialogs_with_arguments): %hhd\n",c_dialogs_argument);

 return c_dialogs_argument;
 }
