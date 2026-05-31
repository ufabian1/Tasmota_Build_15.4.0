#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#define USE_SCRIPT
#define USE_SML_M
#define USE_DS18x20

#ifdef USE_RULES
#undef USE_RULES
#endif

#define USE_UFILESYS

// große Systeme raus
#undef USE_ZIGBEE_ZNP
#undef USE_DISPLAY
#undef USE_KNX
#undef USE_TUYA_MCU

// Licht/Dimmer raus
#undef USE_LIGHT
#undef USE_WS2812
#undef USE_PWM_DIMMER
#undef USE_SHUTTER

// Sensor stack reduzieren
#undef USE_DHT
#undef USE_BME280
#undef USE_SHT3X
#undef USE_I2C
#undef USE_SPI
#undef USE_ADC

// Integrationen raus
#undef USE_HOME_ASSISTANT
#undef USE_DOMOTICZ
#undef USE_EMULATION_HUE
#undef USE_EMULATION_WEMO

// Netzwerk extras
#undef USE_DISCOVERY
#undef USE_WEBSEND_RESPONSE

// Logging reduzieren
#define SYS_LOG_LEVEL 0

// Energy raus (du nutzt SML!)
#undef USE_PZEM004T
#undef USE_PZEM_AC
#undef USE_PZEM_DC
#undef USE_MCP39F501
#undef USE_ADE7953
#undef USE_BL0940

#endif
