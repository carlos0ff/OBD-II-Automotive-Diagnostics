#include "obd_parser.h"
#include <stdio.h>


void parse_error_codes(char *error_codes) {
    printf("Analisando os códigos de erro: %s\n", error_codes);
    
    if (error_codes[0] == 'P') {
        printf("Erro de ignição detectado.\n");
    }

    if (error_codes[1] == 'P') {
        printf("Problema no sistema de catalisador.\n");
    }
}
