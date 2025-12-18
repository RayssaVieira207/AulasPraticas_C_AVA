/*Aula 9: Funções
Exemplo 2-3: Função com parâmetros de retorno*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int somar(int a, int b) { return a + b; }
int subtrair(int a, int b) { return a - b; }
int multiplicar(int a, int b) { return a * b; }
int dividir(int a, int b) { 
    if (b == 0) return 0; // Evita erro de divisão por zero
    return a / b; 
}

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int num1, num2;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

int resSoma = somar(num1, num2);
    printf("Resultado da função somar(): %d\n", resSoma);

    int resSub = subtrair(num1, num2);
    printf("Resultado da função subtrair(): %d\n", resSub);

    int resMult = multiplicar(num1, num2);
    printf("Resultado da função multiplicar(): %d\n", resMult);

    int resDiv = dividir(num1, num2);
    printf("Resultado da função dividir(): %d\n", resDiv);
    
    printf("\n");
    system("pause"); 
    return 0;
}