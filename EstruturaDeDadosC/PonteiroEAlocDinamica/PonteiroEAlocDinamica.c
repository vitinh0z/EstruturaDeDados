#include <stdio.h>
#include <stdlib.h>



int main () {

    int *ptr;
    int valor = 10;

    ptr = &valor;

    printf("Endereço: %x", &valor);
    printf("Endereço Ponteiro: %x", ptr);
    printf("Valor: %d", *ptr);

}