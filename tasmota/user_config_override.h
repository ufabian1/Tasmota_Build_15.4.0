#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#define USE_SCRIPT
#define USE_SML_M
#define USE_DS18x20

#ifdef USE_RULES
#undef USE_RULES
#endif

#define USE_UFILESYS

// Sprache klein halten
#define LANGUAGE_EN_GB

// BERRY raus
#undef USE_BERRY
#undef USE_BERRY_INVOCATION

// MQTT raus (nur WebAPI)
#undef USE_MQTT
#undef USE_MQTT_TLS

// große Module raus
#undef USE_ZIGBEE_ZNP
#undef USE_DISPLAY
#undef USE_KNX
#undef USE_TUYA_MCU

// Licht raus
#undef USE_LIGHT
#undef USE_WS2812

// Dimmer raus
#undef USE_SHUTTER
#undef USE_PWM_DIMMER

// Integrationen raus
#undef USE_HOME_ASSISTANT
#undef USE_DOMOTICZ

// Sensoren minimieren
#undef USE_DHT

// Energy raus
#undef USE_PZEM004T
#undef USE_PZEM_AC
#undef USE_ADE7953

// Web minimal
#undef USE_WEBSEND_RESPONSE

// OTA reduzieren
#undef USE_ARDUINO_OTA

// Logging minimal
#define SYS_LOG_LEVEL 0
#define SERIAL_LOG_LEVEL 0

// SML optimieren
#define MAX_METERS 2
#define SML_BSIZ 48
#define TMSBSIZ 128

#endif
