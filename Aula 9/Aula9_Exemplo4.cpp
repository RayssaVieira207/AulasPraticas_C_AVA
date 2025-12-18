/*Aula 9: Funções
Exemplo 4:*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int maior_de_idade(int idade);

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (maior_de_idade(idade)) {
        printf("É maior de idade.\n");
    } else {
        printf("É menor de idade.\n");
    }

    printf("\n");
    system("pause"); 
    return 0;
}

int maior_de_idade(int idade) {
    return idade >= 18;
}