/*Comentários xom várias linas e C
Aula 1: Estrutura e Operadores Básicos de um Programa em C
Exemplo 4: Principais operadores em C:
Operadores Aritméticos: +, -, *, /, %
soma= +, subtração= -, multiplicação= *, divisão= /, resto da divisão= %
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Incluído para usar system("pause");
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    //Declarçaõ de variáveis
    int numero1, numero2;
    int divisaoInteira;
    float divisaoReal;

    //Entrada de dados
    printf("\t\t--- Divisão (Inteira e Real) ---\t\t");
    printf("\n");
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    //Divisão Inteira
    divisaoInteira = numero1 / numero2;
    //Divisão Real (com cast)
    divisaoReal = (float)numero1 / (float)numero2;

    //Saída de dados
    printf("\n<--- Resultados das Divisões --->\n");
    printf("Divisão Inteira: %d / %d = %d\n", numero1, numero2, divisaoInteira);
    printf("Divisão Real: %d / %d = %.2f\n", numero1, numero2, divisaoReal);
    
    system("pause"); // Pausa o programa para ver os resultados
    return 0;
}