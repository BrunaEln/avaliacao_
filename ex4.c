#include <stdio.h>
 
// Função para validar o sexo digitado
char validaSexo() {
    char sexo;
    printf("Informe o sexo do assalariado (M/F): ");
    scanf(" %c", &sexo);
    while (sexo != 'M' && sexo != 'F') {
        printf("Sexo invAlido. Informe 'M' para Masculino ou 'F' para Feminino.\n");
        printf("Informe o sexo do assalariado (M/F): ");
        scanf(" %c", &sexo);
    }
    return sexo;
}
 
// Função para validar o valor do salário
float validaSalario() {
    float salario;
    printf("Informe o valor do salario: ");
    scanf("%f", &salario);
    while (salario <= 1.0) {
        printf("Valor de salario invalido. Deve ser maior que R$ 1,00.\n");
        printf("Informe o valor do salário: ");
        scanf("%f", &salario);
    }
    return salario;
}
 
// Função para classificar o salário em relação ao salário mínimo
char* classificaSalario(float salario, float salarioMinimo) {
    if (salario > salarioMinimo) {
        return "Acima";
    } else if (salario < salarioMinimo) {
        return "Abaixo";
    } else {
        return "Igual";
    }
}
 
// Função para mostrar os resultados para cada assalariado
void mostraClassificacao(char sexo, float salario, float salarioMinimo) {
    printf("\n");
    printf("Sexo: %s\n", sexo == 'M' ? "Masculino" : "Feminino");
    printf("Salário: R$ %.2f\n", salario);
    printf("Classificacao em relação ao salario minimo: %s\n", classificaSalario(salario, salarioMinimo));
    printf("\n");
}
 
int main() {
    int abaixoSalarioMinimo = 0;
    int acimaSalarioMinimo = 0;
    float salarioMinimo = 1400.0;
 
    int quantidadeAssalariados;
    printf("Informe a quantidade de assalariados: ");
    scanf("%d", &quantidadeAssalariados);
 
    for (int i = 0; i < quantidadeAssalariados; i++) {
        printf("\n");
        printf("Assalariado %d:\n", i + 1);
        char sexo = validaSexo();
        float salario = validaSalario();
        mostraClassificacao(sexo, salario, salarioMinimo);
 
        if (salario < salarioMinimo) {
            abaixoSalarioMinimo++;
        } else if (salario > salarioMinimo) {
            acimaSalarioMinimo++;
        }
    }
 
    printf("\n");
    printf("Quantidade de assalariados com salario abaixo do salario minimo: %d\n", abaixoSalarioMinimo);
    printf("Quantidade de assalariados com salario acima do salario minimo: %d\n", acimaSalarioMinimo);
 
    return 0;
}

