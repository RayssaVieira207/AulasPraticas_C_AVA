/*Aula 2: Estrutura Condicionais - Simples e Encadeadas
Exemplo 3: Verificar se um numero é positivo
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

    system("pause"); // Pausa o programa para ver os resultados
    return 0;
}