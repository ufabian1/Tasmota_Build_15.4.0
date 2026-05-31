#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#define USE_SCRIPT
#define USE_SML_M
#define USE_DS18x20

#ifdef USE_RULES
#undef USE_RULES
#endif

#define USE_UFILESYS

// große Module raus
#undef USE_ZIGBEE_ZNP
#undef USE_DISPLAY
#undef USE_KNX
#undef USE_TUYA_MCU

// Licht raus
#undef USE_LIGHT
#undef USE_WS2812
#undef USE_LIGHT_PALETTE
#undef USE_SM16716
#undef USE_SM2135
#undef USE_MY92X1

// Dimmer raus
#undef USE_SHUTTER
#undef USE_PWM_DIMMER
#undef USE_SONOFF_D1
#undef USE_SHELLY_DIMMER
#undef USE_EXS_DIMMER

// Sensoren minimieren
#undef USE_DHT
#undef USE_BME280
#undef USE_SHT3X
#undef USE_I2C
#undef USE_SPI

// Integrationen raus
#undef USE_HOME_ASSISTANT
#undef USE_DOMOTICZ
#undef USE_EMULATION_HUE
#undef USE_EMULATION_WEMO

// weitere Features raus
#undef USE_DEVICE_GROUPS
#undef USE_SERIAL_BRIDGE
#undef USE_BUZZER

// Energie raus (du nutzt SML!)
#undef USE_PZEM004T
#undef USE_PZEM_AC
#undef USE_PZEM_DC
#undef USE_MCP39F501
#undef USE_ADE7953
#undef USE_BL0940

// Web reduzieren
#undef USE_WEBSERVER_TLS
#undef USE_WEBSEND_RESPONSE

#endif
