/**
* This file is autogenerated by nRFgo Studio 1.17.1.3252
*/

#ifndef SETUP_MESSAGES_H__
#define SETUP_MESSAGES_H__

#include "hal_platform.h"
#include "aci.h"

#define PIPE_DEVICE_INFORMATION_HARDWARE_REVISION_STRING_SET 0

#define SETUP_ID 1
#define SETUP_FORMAT 3 /** nRF8001 D */
#define ACI_DYNAMIC_DATA_SIZE 164

/* Service: ConnectedCar - Characteristic: Password - Pipe: TX */
#define PIPE_CONNECTEDCAR_PASSWORD_TX          1
#define PIPE_CONNECTEDCAR_PASSWORD_TX_MAX_SIZE 2

/* Service: ConnectedCar - Characteristic: Password - Pipe: RX */
#define PIPE_CONNECTEDCAR_PASSWORD_RX          2
#define PIPE_CONNECTEDCAR_PASSWORD_RX_MAX_SIZE 2

/* Service: ConnectedCar - Characteristic: PasswordChange - Pipe: TX */
#define PIPE_CONNECTEDCAR_PASSWORDCHANGE_TX          3
#define PIPE_CONNECTEDCAR_PASSWORDCHANGE_TX_MAX_SIZE 2

/* Service: ConnectedCar - Characteristic: PasswordChange - Pipe: RX */
#define PIPE_CONNECTEDCAR_PASSWORDCHANGE_RX          4
#define PIPE_CONNECTEDCAR_PASSWORDCHANGE_RX_MAX_SIZE 2

/* Service: ConnectedCar - Characteristic: Results - Pipe: TX */
#define PIPE_CONNECTEDCAR_RESULTS_TX          5
#define PIPE_CONNECTEDCAR_RESULTS_TX_MAX_SIZE 1

/* Service: ConnectedCar - Characteristic: ChangeResults - Pipe: TX */
#define PIPE_CONNECTEDCAR_CHANGERESULTS_TX          6
#define PIPE_CONNECTEDCAR_CHANGERESULTS_TX_MAX_SIZE 1

/* Service: ConnectedCar - Characteristic: LightsOn - Pipe: TX */
#define PIPE_CONNECTEDCAR_LIGHTSON_TX          7
#define PIPE_CONNECTEDCAR_LIGHTSON_TX_MAX_SIZE 1

/* Service: ConnectedCar - Characteristic: LightsOn - Pipe: RX */
#define PIPE_CONNECTEDCAR_LIGHTSON_RX          8
#define PIPE_CONNECTEDCAR_LIGHTSON_RX_MAX_SIZE 1

/* Service: ConnectedCar - Characteristic: GarageDoor - Pipe: TX */
#define PIPE_CONNECTEDCAR_GARAGEDOOR_TX          9
#define PIPE_CONNECTEDCAR_GARAGEDOOR_TX_MAX_SIZE 1

/* Service: ConnectedCar - Characteristic: GarageDoor - Pipe: RX */
#define PIPE_CONNECTEDCAR_GARAGEDOOR_RX          10
#define PIPE_CONNECTEDCAR_GARAGEDOOR_RX_MAX_SIZE 1


#define NUMBER_OF_PIPES 10

#define SERVICES_PIPE_TYPE_MAPPING_CONTENT {\
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
  {ACI_STORE_LOCAL, ACI_TX},   \
  {ACI_STORE_LOCAL, ACI_RX},   \
}

#define GAP_PPCP_MAX_CONN_INT 0xffff /**< Maximum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific value requested */
#define GAP_PPCP_MIN_CONN_INT  0xffff /**< Minimum connection interval as a multiple of 1.25 msec , 0xFFFF means no specific value requested */
#define GAP_PPCP_SLAVE_LATENCY 0
#define GAP_PPCP_CONN_TIMEOUT 0xffff /** Connection Supervision timeout multiplier as a multiple of 10msec, 0xFFFF means no specific value requested */

#define NB_SETUP_MESSAGES 23
#define SETUP_MESSAGES_CONTENT {\
    {0x00,\
        {\
            0x07,0x06,0x00,0x00,0x03,0x02,0x42,0x07,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x0a,0x01,0x01,0x00,0x00,0x06,0x00,0x00,\
            0xc1,0x01,0xcc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,0x00,0x11,0x00,0x00,0x00,0x11,0x03,0x90,0x00,0xff,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x10,0x38,0xff,0xff,0x02,0x58,0x0a,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x05,0x06,0x10,0x54,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x00,0x04,0x04,0x02,0x02,0x00,0x01,0x28,0x00,0x01,0x00,0x18,0x04,0x04,0x05,0x05,0x00,\
            0x02,0x28,0x03,0x01,0x02,0x03,0x00,0x00,0x2a,0x04,0x04,0x14,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x1c,0x0d,0x00,0x03,0x2a,0x00,0x01,0x43,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x65,0x64,0x20,\
            0x43,0x61,0x72,0x6d,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x38,0x05,0x05,0x00,0x04,0x28,0x03,0x01,0x02,0x05,0x00,0x01,0x2a,0x06,0x04,0x03,0x02,\
            0x00,0x05,0x2a,0x01,0x01,0x00,0x00,0x04,0x04,0x05,0x05,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x54,0x06,0x28,0x03,0x01,0x02,0x07,0x00,0x04,0x2a,0x06,0x04,0x09,0x08,0x00,0x07,0x2a,\
            0x04,0x01,0xff,0xff,0xff,0xff,0x00,0x00,0xff,0xff,0x04,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x70,0x02,0x02,0x00,0x08,0x28,0x00,0x01,0x01,0x18,0x04,0x04,0x02,0x02,0x00,0x09,0x28,\
            0x00,0x01,0x01,0xcc,0x04,0x04,0x05,0x05,0x00,0x0a,0x28,0x03,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0x8c,0x01,0x16,0x0b,0x00,0x02,0xcc,0x56,0x14,0x03,0x02,0x00,0x0b,0xcc,0x02,0x01,0x00,\
            0x00,0x46,0x14,0x03,0x02,0x00,0x0c,0x29,0x02,0x01,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xa8,0x04,0x04,0x05,0x05,0x00,0x0d,0x28,0x03,0x01,0x16,0x0e,0x00,0x03,0xcc,0x56,0x14,\
            0x03,0x02,0x00,0x0e,0xcc,0x03,0x01,0x00,0x00,0x46,0x14,0x03,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xc4,0x02,0x00,0x0f,0x29,0x02,0x01,0x00,0x00,0x04,0x04,0x05,0x05,0x00,0x10,0x28,0x03,\
            0x01,0x12,0x11,0x00,0x04,0xcc,0x16,0x04,0x02,0x01,0x00,0x11,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xe0,0xcc,0x04,0x01,0x00,0x46,0x14,0x03,0x02,0x00,0x12,0x29,0x02,0x01,0x00,0x00,0x04,\
            0x04,0x05,0x05,0x00,0x13,0x28,0x03,0x01,0x12,0x14,0x00,0x05,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x20,0xfc,0xcc,0x16,0x04,0x02,0x01,0x00,0x14,0xcc,0x05,0x01,0x00,0x46,0x14,0x03,0x02,0x00,\
            0x15,0x29,0x02,0x01,0x00,0x00,0x04,0x04,0x05,0x05,0x00,0x16,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x18,0x28,0x03,0x01,0x16,0x17,0x00,0x06,0xcc,0x56,0x14,0x02,0x01,0x00,0x17,0xcc,0x06,\
            0x01,0x00,0x46,0x14,0x03,0x02,0x00,0x18,0x29,0x02,0x01,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x21,0x34,0x00,0x04,0x04,0x05,0x05,0x00,0x19,0x28,0x03,0x01,0x16,0x1a,0x00,0x07,0xcc,0x56,\
            0x14,0x02,0x01,0x00,0x1a,0xcc,0x07,0x01,0x00,0x46,0x14,0x03,\
        },\
    },\
    {0x00,\
        {\
            0x0c,0x06,0x21,0x50,0x02,0x00,0x1b,0x29,0x02,0x01,0x00,0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x00,0xcc,0x02,0x01,0x00,0x0a,0x04,0x00,0x0b,0x00,0x0c,0xcc,0x03,0x01,0x00,0x0a,0x04,\
            0x00,0x0e,0x00,0x0f,0xcc,0x04,0x01,0x00,0x02,0x04,0x00,0x11,\
        },\
    },\
    {0x00,\
        {\
            0x1f,0x06,0x40,0x1c,0x00,0x12,0xcc,0x05,0x01,0x00,0x02,0x04,0x00,0x14,0x00,0x15,0xcc,0x06,0x01,0x00,\
            0x0a,0x04,0x00,0x17,0x00,0x18,0xcc,0x07,0x01,0x00,0x0a,0x04,\
        },\
    },\
    {0x00,\
        {\
            0x07,0x06,0x40,0x38,0x00,0x1a,0x00,0x1b,\
        },\
    },\
    {0x00,\
        {\
            0x15,0x06,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
            0x00,0x00,\
        },\
    },\
    {0x00,\
        {\
            0x06,0x06,0xf0,0x00,0x03,0x2f,0x64,\
        },\
    },\
}

#endif