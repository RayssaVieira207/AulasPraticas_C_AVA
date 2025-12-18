/*Aula 9: Funções
Exemplo 2: Função com parâmetros de retorno*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int somar(int a, int b) {
    printf("Dentro da função somar(), recebendo a = %d, b = %d\n", a, b);
    int resultado = a + b;
    return resultado;
}

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int num1 = 7, num2 = 3;
    int resultado = somar(num1, num2);
    printf("Resultado da função somar(): %d\n", resultado);

    printf("\n");
    system("pause"); 
    return 0;
}