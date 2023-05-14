#include <stdio.h>

int validaQuantidade (int quantidade);
float calculaSalario (float salario);

int main () {
    int resposta, pecas, quantidade;
    float mostraFinal;

    while (resposta != 2) {
    printf ("Digite o numero de pecas fabricadas por voce esse mes: ");
    scanf ("%d", &pecas);

    if (pecas > 50) {
    quantidade = validaQuantidade (pecas);
    system ("cls");
    printf ("Numero de pecas validas para o calculo de acrescimo ---> %d pcs", quantidade);
    mostraFinal = calculaSalario (pecas);
    printf ("\nSalario atualizado %.2f\n", mostraFinal);
    } else {
        printf ("Numero de pecas insuficientes para a validacao");
    }
    printf ("\nDeseja calcular o salario de outro funcionario? [1] para sim | [2] para nao\n");
    scanf ("%d", &resposta);
    }
}

int validaQuantidade (int quantidade) {
    int resultado;
    resultado = quantidade - 50;
    return resultado;
}

float calculaSalario (float salario) {
    float resultado, resultado1, resto, resultado2, resultadoprov, resultadofinal;
    int c = 1, i = 1;
    if (salario > 50 && salario <= 80) {
        resultadoprov = salario - 50; 
        resultado = 600 + (resultadoprov * 0.5);
        return resultado;
    } else if (salario > 80) {
        resultadoprov = salario - 50;
        while (c <= 80) {
            resultado1 = c * 0.5;
            c++;
            resto = c - resultadoprov;
        }
        while (i <= resto) {
            resultado2 = i * 0.75;
            i++;
        }
        resultadofinal = resultadoprov - resultado2; 
        resultado = 600 + (resultadofinal * 0.5) + resultado2;
        return resultado;
    }
}