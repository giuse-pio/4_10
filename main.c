#include <stdio.h>

int main(void) {
    int n=0;
    int p=0;
    int i;/* i=1;*/

    printf("Inserisci un numero compreso tra 2 e 20: ");
    scanf("%d",&n);
    if (n>=2 && n<=20) {
        /*while(p<=n) {
            printf("2 elevato a %d e' %d\n", p, i);
            p++;
            i=i*2;
        }
        return 0;*/
        for (i=1;p<=n;p++) {
            printf("2^%d e' %d\n", p,i);
            i=i*2;
        }
    }
    else {
        printf("il numero inserito non e' compreso tra 2 e 20 \n");
        return 0;

    }
}