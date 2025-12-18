/*Aula 3: Estrutura Condicionais - Simples e Encadeadas
Exemplo 3: Impressão de um triângulo
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");
    
    int n, i = 1; 

    printf("Digite um número de linhas: ");
    scanf("%d", &n);

    while (i <= n) { 
        int j = 1;
        while (j <= i) {
            printf(" * ");
            j++;
        }
        printf("\n");
        i++;
    }

    system("pause");
    return 0;
}