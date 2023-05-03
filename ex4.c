#include <stdio.h>

main () {
    char nome [30];
    char genero;
    float salario;
    printf ("Funcionario: ");
    scanf ("%s", &nome);  
    printf ("Qual e o seu genero biologico? [F] para feminino | [M] para masculino");
    scanf ("%s", &genero);
    printf ("Agora digite o valor so salario: ");
    scanf ("%f", &salario);
    system ("cls");

    if (salario > 1400) {
        printf ("\nNome: %s\nGenero: %c\nSalario = R$%.2f ---> ACIMA do minimo.", nome, genero, salario);
    } else if (salario = 1400) { 
        printf ("\nNome: %s\nGenero: %c\nSalario = R$%.2f ---> IGUAL ao minimo.", nome, genero, salario);
    } else { 
        printf ("\nNome: %s\nGenero: %c\nSalario = R$%.2f ---> ABAIXO do minimo.", nome, genero, salario);
    }

}