/*Comentários xom várias linas e C
Aula 1: Estrutura e Operadores Básicos de um Programa em C
Exemplo 3: Principais operadores em C:
Operadores Aritméticos: +, -, *, /, %
soma= +, subtração= -, multiplicação= *, divisão= /, resto da divisão= %
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    //Declarçaõ de variáveis
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao, resto;

    //Entrada de dados
    printf("\t\t--- Operadores Aritméticos ---\t\t");
    printf("\n");
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    //Cálculo das operações 
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2; // divisão inteira
    resto = numero1 % numero2; // resto da divisão

    //Saída de dados
    printf("\n<--- Resultados das Operações --->\n");
    printf("Soma: %d + %d = %d\n", numero1, numero2, soma);
    printf("Subtração: %d - %d = %d\n", numero1, numero2, subtracao);
    printf("Multiplicação: %d * %d = %d\n", numero1, numero2, multiplicacao);
    printf("Divisão: %d / %d = %d\n", numero1, numero2, divisao);
    printf("Resto da Divisão: %d %% %d = %d\n", numero1, numero2, resto);
    system("pause");
    return 0;
}