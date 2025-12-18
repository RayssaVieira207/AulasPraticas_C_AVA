/*Aula 3: Estrutura Condicionais - Simples e Encadeadas
Exemplo 4: Cadatro de notas com while
comparação de while e do...while
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Incluído para usar system("pause");
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");
    
    int valor; 
    float nota;

    printf("\nDigite:\n1 - para cadastrar nota\n0 - para encerrar\n");
    scanf("%d", &valor);

    while (valor != 0) { 
        printf("\nDigite a nota do aluno: ");
        scanf("%f", &nota);
        printf("Nota registrada: %.2f\n", nota);

        printf("Digite:\n1 - para cadastrar nota\n0 - para encerrar\n");
        scanf("%d", &valor);
    }

    system("pause");
    return 0;
}