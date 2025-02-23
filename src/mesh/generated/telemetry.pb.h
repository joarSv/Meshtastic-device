/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.4 */

#ifndef PB_TELEMETRY_PB_H_INCLUDED
#define PB_TELEMETRY_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _Telemetry {
    float temperature;
    float relative_humidity;
    float barometric_pressure;
    float gas_resistance;
    float voltage;
    float current;
} Telemetry;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define Telemetry_init_default                   {0, 0, 0, 0, 0, 0}
#define Telemetry_init_zero                      {0, 0, 0, 0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define Telemetry_temperature_tag                1
#define Telemetry_relative_humidity_tag          2
#define Telemetry_barometric_pressure_tag        3
#define Telemetry_gas_resistance_tag             4
#define Telemetry_voltage_tag                    5
#define Telemetry_current_tag                    6

/* Struct field encoding specification for nanopb */
#define Telemetry_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    temperature,       1) \
X(a, STATIC,   SINGULAR, FLOAT,    relative_humidity,   2) \
X(a, STATIC,   SINGULAR, FLOAT,    barometric_pressure,   3) \
X(a, STATIC,   SINGULAR, FLOAT,    gas_resistance,    4) \
X(a, STATIC,   SINGULAR, FLOAT,    voltage,           5) \
X(a, STATIC,   SINGULAR, FLOAT,    current,           6)
#define Telemetry_CALLBACK NULL
#define Telemetry_DEFAULT NULL

extern const pb_msgdesc_t Telemetry_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define Telemetry_fields &Telemetry_msg

/* Maximum encoded size of messages (where known) */
#define Telemetry_size                           30

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
