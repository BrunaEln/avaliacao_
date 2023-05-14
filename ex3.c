#include <stdio.h>

main () {

int jogadores [6];
float pesos [6];
float totidades = 0; //armazena a totalidade das idades dos jogadores.
float mediaI, mediaP, porcentagem, oitenta = 0; 
int menor = 0, mais = 0, totpesos = 0, numJogadores = 0;

for (int i = 0; i < 6; i++) {
    printf ("Digite a idade do jogador: ");
    scanf ("%d", &jogadores[i]);
    printf ("Digite o peso do jogador: ");
    scanf ("%f", &pesos[i]);       
    totidades = totidades + jogadores [i];

        if (jogadores [i] > 25) {
            totpesos = totpesos + pesos[i];
            numJogadores++; //totaliza o número de jogadores com mais de 25 anos.
        }
        if (pesos[i] > 80) {
            oitenta = oitenta + pesos[i];
            mais++; //totaliza os jogadores com o peso > que oitenta quilos.
        }
        if (jogadores [i] < 18) { 
            menor++; //totaliza jogadores menores de idade.
        }

porcentagem = (100 * mais)/6; //calculo da porcentagem.
mediaI = totidades/6;  //media das idades.
mediaP = totpesos/numJogadores; //calculo da média dos pesos.
}
    printf ("Media das idades = %.2f\nMedia de pesos: %.2f\nMenores de idade: %d\nQuantidade de jogadores acima de 80 kg: %d\nPorcentagem: %.2f%%\n", mediaI, mediaP, menor, mais, porcentagem);
}