#include <stdio.h>

int main() {
    char nome[50]; 

    printf("Digite seu nome: ");
    scanf("%49s", nome); 

    printf("Olá, %s! Bem-vindo ao mundo do C.\n", nome);

    return 0;
}
