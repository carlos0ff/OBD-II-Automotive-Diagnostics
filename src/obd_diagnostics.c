#include <stddef.h>
#include <stdio.h>

#include "obd_diagnostics.h"
#include "obd_communicator.h"
#include "obd_parser.h"
#include "utils.h"

void start_diagnostic() {
    printf("Iniciando diagnóstico...\n");

    char *error_codes = get_error_codes();

    if (error_codes != NULL) {
        printf("Códigos de erro encontrados: %s\n", error_codes);
        parse_error_codes(error_codes);
    } else {
        printf("Nenhum código de erro encontrado.\n");
    }
}

void monitor_vehicle_parameters() {
    int rpm = get_rpm();
    int speed = get_vehicle_speed();

    float engine_temp = get_engine_temperature();

    printf("RPM: %d\n", rpm);
    printf("Velocidade: %d km/h\n", speed);
    printf("Temperatura do motor: %.2f °C\n", engine_temp);
}
