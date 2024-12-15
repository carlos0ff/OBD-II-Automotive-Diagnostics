#include "utils.h"
#include <stdio.h>


void display_error_message(char *message) {
    printf("Erro: %s\n", message);
}


int hex_to_decimal(char *hex) {
    int decimal;

    sscanf(hex, "%x", &decimal);

    return decimal;
}
