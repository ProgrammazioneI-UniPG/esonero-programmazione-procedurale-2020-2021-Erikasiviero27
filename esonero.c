#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    char m[128];      /*plaintext*/
    char k[128];      /*chiave di cifratura*/
    char c[128];      /*stringa di testo cifrato*/
    char choice;
    char i;
    time_t t;


    printf("Inserire testo da cifrare (m) lungo massimo 128 caratteri:\n");
    /*viene richiestp all'utente di inserire la stringa di testo da cifrare*/

    fgets(m, 128, stdin);       /*per scartare eventuali caratteri in eccesso*/

    printf("Per inserire da tastiera la chiave di cifratura k, digitare '1';\nper generare una chiave di cifratura k casuale, digitare '2'.\n" );
    /*si richiede all'utente come vuole proseguire*/

    scanf("%c", &choice);
    getchar();


    switch (choice) {

           case '1': printf("Inserire una stringa (k) di lunghezzanuguale o superiore alla stringa di testo (m), con la quale cifrarla:\n");
                     fgets(k, 128, stdin);
                     if (strlen(k) < strlen(m)) {
                       printf("La stringa k deve avere lunghezza >= alla stringa di testo (m); inserire nuovamente la chiave (k):\n");
                       scanf("%s", &k);
                     } else {
                       printf("La chiave (k) è stata inserita correttamente:\n%s\n", k);
                     }
                     {
                       c[i]=m[i]ˆk[i];
                        printf("La stringa risultante (c) è: ");
                        for (i=0; i<strlen(m); i++) {
                        printf("%d\n", c[i]); }

                       m[i]=c[i]^k[i];
                        printf("La stringa di testo decifrata è: \n");
                        for (i=0; i<strlen(k); i++) {
                        printf("%c", m[i]); }
                     }
                     break;

           case '2':  srand((unsigned) time (&t));
                      printf("%d\n", 32+ rand()%96);
                      for (i=0; i<strlen(m); i++)  {
                           k[i]= 32+ rand()%96; }
                      for (i=0; i<strlen(m); i++)
                           printf("%h\n");
                     {
                        c[i]=m[i]ˆk[i];
                         printf("La stringa risultante (c) è: ");
                         for (i=0; i<strlen(m); i++) {
                         printf("%d\n", c[i]); }

                        m[i]=c[i]^k[i];
                         printf("La stringa di testo decifrata è: \n");
                         for (i=0; i<strlen(k); i++) {
                         printf("%c", m[i]); }
                      }
                      break;

            default: printf("E' possibile inserire solo 1 o 2. Ripetere nuovamente il programma.\n");
          }
                           /*termine dello switch*/

    return 0;
}
