/*Comentários xom várias linas e C
Aula 1: Estrutura e Operadores Básicos de um Programa em C
Exemplo 5: Principais operadores em C:
Operadores Relacionais: ==, !=, >, <, >=, <=  Comparam valores e retornam 1 (True) ou 0 (False)
Lógicos: &&, ||, !  && (E), || (OU), ! (Negação) 
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Incluído para usar system("pause");
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int x = 5, y = 8;

    //Entrada de dados
    printf("\n");
    printf("--- Exemplo com Operadores Relacionais ---");
    printf("\n");
    printf("x = %d e y = %d\n", x, y);
    printf("x é igual (==) a y: %d\n", x==y);
    printf("x é diferente (!=) de y: %d\n", x!=y);
    printf("x é maior (>) que y: %d\n", x>y);
    printf("x é menor (<) que y: %d\n", x<y);
    
    printf("\n");
    printf("--------------------------------------");
    printf("\n");
    printf("----- Exemplo com Operadores Lógicos -----");
    printf("\n");
    
    int a = 4, b = 7;

    printf("a = %d e b = %d\n", a, b);
    printf("a < 5 && (E) b > 5: %d\n", (a < 5 && b > 5)); // E
    printf("a > 5 || (OU) b > 5: %d\n", (a > 5 || b > 5)); // OU
    printf("!(a == b) (Negação): %d\n", !(a == b)); // Negação

    
    system("pause"); // Pausa o programa para ver os resultados
    return 0;
}