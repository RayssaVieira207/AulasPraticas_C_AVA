/*Aula 4: Laças de Repetição - for
Exemplo 3: IMpressão de um triangulo*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");
    
    int n, i, j; 

    printf("Digite o número de linhas: ");
    scanf("%d", &n);
    
    for (i = 1;i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*"); 
        }
        printf("\n"); 
    }

    system("pause"); 
    return 0;
}