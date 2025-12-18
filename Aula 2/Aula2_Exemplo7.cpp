/*Aula 2: Estrutura Condicionais - Simples e Encadeadas
Exemplo 6: Verificar se o número é multiplo de 3
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

    if (numero % 3 == 0) {
        printf("O número %d é múltiplo de 3.\n", numero);
    } else {
        printf("O número %d não é múltiplo de 3.\n", numero);
    }

    system("pause"); // Pausa o programa para ver os resultados
    return 0;
}