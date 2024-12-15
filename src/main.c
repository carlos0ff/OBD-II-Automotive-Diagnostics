#include <stddef.h>  
#include <stdio.h> 

#include "obd_diagnostics.h"
#include "obd_communicator.h"
#include "obd_parser.h"
#include "utils.h"

int main() {
   
    printf("Bem-vindo ao Sistema de Diagnóstico Automotivo OBD-II!\n");

    // Inicia o diagnóstico do veículo
    start_diagnostic();

    // Monitora os parâmetros do veículo
    printf("\nMonitorando parâmetros do veículo...\n");
    monitor_vehicle_parameters();

    // Exemplo de uso de função utilitária
    char hex_code[] = "1A";
    int decimal_value = hex_to_decimal(hex_code);

    printf("\nCódigo hexadecimal %s convertido para decimal: %d\n", hex_code, decimal_value);

    //system("pause");

    return 0;
}
