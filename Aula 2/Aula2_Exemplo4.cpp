/*Aula 2: Estrutura Condicionais - Simples e Encadeadas
Exemplo 4: Verificar se um numero é positivo, negativo ou igual a zero
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

    if (numero > 0) {
        printf("O número %d é positivo.\n", numero);
    } 

    if (numero < 0) {
        printf("O número %d é negativo.\n", numero);
    }

    if (numero == 0) {
        printf("O número %d é igual a 0.\n", numero);
    }

    system("pause"); // Pausa o programa para ver os resultados
    return 0;
}