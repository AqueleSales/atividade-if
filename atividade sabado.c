#include <stdio.h>

int main(){

    int a, b, c, d, e, f, g;
    printf("voce tem compromisso? S=1/N=0 ");
    scanf("%d", &a);
    printf("voce vai estar na cidade? S=1/N=0 ");
    scanf("%d", &b);
    printf("tem dinheiro? S=1/N=0 ");
    scanf("%d", &c);
    printf("e perto? S=1/N=0 ");
    scanf("%d", &d);
    printf("viu se vai chover? S=1/N=0 ");
    scanf("%d", &e);

    if (!a && b && c && (d || !e)) {
        printf("Voce vai!\n");
    } else {
        printf("Voce nao vai!\n");
    }

    return 0;

}

