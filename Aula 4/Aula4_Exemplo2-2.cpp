/*Aula 4: Laças de Repetição - for
Exemplo 2: IMpressão de uma sequência de números pare de 2 até n*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");
    
    int i, n;
    
    printf("Digite o ultimo valor da sequencia: ");
    scanf("%d", &n);

    printf("Sequência de números pares de 2 até %d:\n", n);

    for (i = 1;i <= n; i ++) {//condição de repetição
        if (i % 2 == 0) {
            printf("O valor é par: %d \n", i); //impressão na tela
        } else {
            printf("O valor é ímpar: %d \n", i);
        }
    }

    system("pause"); 
    return 0;
}