/*Aula 2: Estrutura Condicionais - Simples e Encadeadas
Exemplo 6: Verificar se o número é par ou ímpar
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Incluído para usar system("pause");
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");
    
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    system("pause"); // Pausa o programa para ver os resultados
    return 0;
}