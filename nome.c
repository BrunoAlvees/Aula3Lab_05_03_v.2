#include <stdio.h>

int main() {
    int numero;

    // Exibe uma mensagem no ecr�
    printf("Ol�, mundo!\n");

    // Pede um n�mero ao utilizador
    printf("Insere um n�mero: ");
    scanf("%d", &numero);

    // Mostra o dobro do n�mero inserido
    printf("O dobro de %d � %d\n", numero, numero * 2);

    return 0;
}
