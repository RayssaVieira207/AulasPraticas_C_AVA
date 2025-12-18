#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, ".UTF-8");

    printf("Olá\n");
    
    system("pause");
    return 0;
}