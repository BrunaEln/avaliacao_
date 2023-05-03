#include <stdio.h>

main () {
    int voltas[6];
    int tempo, posicao, totVoltas = 0;
    float media;

    for (int i = 0; i < 6; i++) {
        printf ("Registre o tempo da volta atual: ");
        scanf ("%d", &voltas[i]);
    }
    for (int i = 0; i < 6; i++) {
        if (voltas[i] < tempo) {
            tempo = voltas[i];
            posicao = i;
        }
        totVoltas = totVoltas + voltas[i];
        media = totVoltas/6;
    }
        printf ("\nMelhor tempo: %d min\nVolta do melhor tempo: vetor [%d]\nTempo medio das voltas: %.2f", tempo, posicao, media);
}