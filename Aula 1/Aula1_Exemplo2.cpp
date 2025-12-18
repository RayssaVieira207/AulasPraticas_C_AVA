/*Comentários xom várias linas e C
Aula 1: Estrutura e Operadores Básicos de um Programa em C
Exemplo 2: Estruturas Básicas de um programa em C
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    setlocale(LC_ALL, ".UTF-8");

    //Declarçaõ de variáveis
    char nomeAluno[50];
    int idadeAluno;
    float notaAluno;

    //Entrada de dados
    printf("\t\t--- Cadastro de Aluno ---\t\t");
    printf("\n");
    printf("Digite o nome completo do aluno: ");
    scanf(" %[^\n]s", nomeAluno);
    //fgets(nomeAluno, 50, stdin); 
    //fgets(nomeAluno, sizeof(nomeAluno), stdin);
    
    printf("Digite a idade do aluno: ");
    scanf("%d", &idadeAluno);

    printf("Digite a nota final do aluno: ");
    scanf("%f", &notaAluno);

    //Saída de dados
    printf("\n<--- Dados do Aluno Cadastrado --->\n");
    printf("Nome do Aluno: %s\n", nomeAluno);
    printf("Idade: %d anos\n", idadeAluno);
    printf("Nota Final: %.2f\n", notaAluno);

    system("pause");
    return 0;
}