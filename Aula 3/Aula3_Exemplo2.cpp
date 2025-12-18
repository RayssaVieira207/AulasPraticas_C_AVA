/*Aula 3: Estrutura Condicionais - Simples e Encadeadas
Exemplo 2: Verificar se o aluno é maior de idade, comparação de while e do...while
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Incluído para usar system("pause");
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");
    
    int i = 1; // Inicializa o contador
    //int i = 6;  Inicializa o contador

    /*while (i <= 5) { // Condição do laço
        printf("%d\n", i);// Imprime o valor de i
        i++; //atualiza o contador
    }*/
    do {
        printf("%d\n", i);// Imprime o valor de i
        i++; //atualiza o contador
    } while (i <= 5); // Condição do laço

    system("pause");
    return 0;
}