#include "obd_communicator.h"
#include <stdio.h>
#include <stdlib.h>

int connect_to_vehicle() {
    printf("Conectando ao veículo via OBD-II...\n");
    return 1; 
}

char* get_error_codes() {
    if (connect_to_vehicle()) {
        return "P0300, P0420";  
    } else {
        return NULL;  
    }
}

int get_rpm() {
    return 3000;  
}

int get_vehicle_speed() {
    return 80; 
}

float get_engine_temperature() {
    return 90.5;  
}
