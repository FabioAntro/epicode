#include <stdio.h>
#include <math.h>

int main () 
{
    float D; //variabile da inserire da tastiera
    int Aq; //area quadrato
    float Ac; // area cerchio
    float At; // area triangolo

    printf ("inserisci il valore:");
    scanf("%f",&D);

    Aq = D * D;
    Ac = D * D * 3.14;
    At = sqrt(3) * D * D/4;

    printf("l'area del quadrato è: %d\n", Aq);
    printf("l'area del cerchio è: %.2f\n", Ac);
    printf("l'area del triangolo equilatero, è: %.2f\n", At);

    return 0;
    }