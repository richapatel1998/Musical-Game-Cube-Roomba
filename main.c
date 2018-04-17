/**
 * main.c
 */
#include <inc/tm4c123gh6pm.h>
#include "music.h"
#include "open_interface.h"

void main(void)
{

    oi_t *sensor_data = oi_alloc();
    oi_init(sensor_data);
    load_songs();

    oi_free(sensor_data);
    return 0;
}
