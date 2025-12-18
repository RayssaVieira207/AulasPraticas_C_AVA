/*Aula 3: Laços de Repetição - While, Do While
Exemplo 1: Impressão de uma sequência de números
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");
    
    int i = 1; // Inicializa o contador

    while (i <= 5) { // Condição do laço
        printf("%d\n", i);// Imprime o valor de i
        i++; //atualiza o contador
    }

    system("pause");
    return 0;
}