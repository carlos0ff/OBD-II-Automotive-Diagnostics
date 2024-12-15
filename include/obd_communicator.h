#ifndef OBD_COMMUNICATOR_H
#define OBD_COMMUNICATOR_H

int connect_to_vehicle();
char* get_error_codes();
int get_rpm();
int get_vehicle_speed();
float get_engine_temperature();

#endif
