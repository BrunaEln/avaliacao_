#include <stdio.h>

main () {
int jogadores [6];
int totidades = 0;
float mediaI, mediaP, porcentagem;
int menor = 0, mais = 0, totpesos = 0;


for (int i = 0; i < 6; i++) {
    printf ("Digite a idade do jogador: ");
    scanf ("%d", &jogadores[i]);
    totidades = totidades + jogadores [i];
        for (int c = 0; c < 1; c++) {
            printf ("Digite o peso do jogador: ");
            scanf ("%f", &jogadores[c]);
            if (jogadores [i] > 25) {
                totpesos = totpesos + jogadores[c];
            }
            if (jogadores [c] > 80) {
                mais++;
            }
        }
            if (jogadores [i] < 18) {
                menor++;
        }
porcentagem = mais/100;
mediaI = totidades/6;
mediaP = totpesos/6;
}
    printf ("Media das idades = %.2f\nMedia peso: %.2f\nMenores de idade: %d\nPorcentagem: %.2f", mediaI, mediaP, menor, porcentagem);