#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#define USE_SCRIPT
#define USE_SML_M
#define USE_DS18x20

#ifdef USE_RULES
#undef USE_RULES
#endif

#define USE_UFILESYS

#undef USE_ZIGBEE_ZNP
#undef USE_DISPLAY
#undef USE_KNX
#undef USE_TUYA_MCU

#undef USE_HOME_ASSISTANT
#undef USE_DOMOTICZ
#undef USE_WEBSERVER_TLS
#undef USE_MQTT_TLS

#undef USE_SHUTTER
#undef USE_PWM_DIMMER
#undef USE_LIGHT
#undef USE_WS2812

#undef USE_IR_REMOTE
#undef USE_IR_RECEIVE

#undef USE_PZEM004T
#undef USE_PZEM_AC
#undef USE_PZEM_DC
#undef USE_MCP39F501
#undef USE_ADE7953
#undef USE_BL0940

#undef USE_DEVICE_GROUPS
#undef USE_EMULATION_HUE
#undef USE_EMULATION_WEMO
#undef USE_SERIAL_BRIDGE
#undef USE_BUZZER
#undef USE_DHT

#endif
