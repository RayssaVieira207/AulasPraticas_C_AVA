/*Aula 9: Funções
Exemplo 3: */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

void mostrar_dobro(int x);

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    mostrar_dobro(num);

    printf("\n");
    system("pause"); 
    return 0;
}

void mostrar_dobro(int x) {
    printf("O dobro de %d é %d\n", x, x * 2);
}