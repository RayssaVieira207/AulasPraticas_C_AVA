/*Aula 3: Estrutura Condicionais - Simples e Encadeadas
Exemplo 6: Soma dos valores (contador)
comparação de while e do...while
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Incluído para usar system("pause");
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");
    
    int i = 1; 
    int soma = 0;

    while (i <= 5) {
        soma += i; //soma = soma + i
        i++; 
    }

    printf("Soma Total: %d\n", soma);

    system("pause");
    return 0;
}