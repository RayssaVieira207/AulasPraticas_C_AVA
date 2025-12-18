/*Comentários xom várias linas e C
Aula 1: Estrutura e Operadores Básicos de em C um Programa
Exemplo 1: Estruturas Básicas de um programa em C
#include <stdio.h> esse comando inclui o arquivo de cabeçalho (header file)
da biblioteca padrão de entrada e saída, chamada stdio.h, no programa.
*/

//Comando de 1 linha

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
//função principal: ponto de entrada do programa
int main() {//função principal main(): inicio do bloco principal
    SetConsoleOutputCP(65001); //Configura o console para usar a codificação UTF-8
    setlocale(LC_ALL, ".UTF-8"); //Configura a localidade para UTF-8

    //printf: imprimir\exibir uma mensagem na tela
    printf("Hello, World!\n"); //\n é um caractere especial que representa uma nova linha
    printf("Olá, Mundo! Este é uma mensagem da primeira aula pratica em C\n");

    system("pause"); // O programa para aqui e espera uma tecla
    return 0; //indica que o programa terminou com sucesso
}