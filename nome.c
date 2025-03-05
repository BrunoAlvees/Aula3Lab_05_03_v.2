#include <stdio.h>

int main() {
    int numero;

    // Exibe uma mensagem no ecrã
    printf("Olá, mundo!\n");

    // Pede um número ao utilizador
    printf("Insere um número: ");
    scanf("%d", &numero);

    // Mostra o dobro do número inserido
    printf("O dobro de %d é %d\n", numero, numero * 2);

    return 0;
}
