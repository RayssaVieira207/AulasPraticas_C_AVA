/*Aula 2: Estrutura Condicionais - Simples e Encadeadas
Exemplo 1: Verificar se o aluno é maior de idade
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Incluído para usar system("pause");
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");
    
    int idadeAluno;

    printf("Digite a idade do aluno: ");
    scanf("%d", &idadeAluno);

    if (idadeAluno >= 18) {
        printf("O aluno é maior de idade.\n");
    }

    system("pause"); // Pausa o programa para ver os resultados
    return 0;
}