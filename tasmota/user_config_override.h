#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// ===== Pflicht für dein Setup =====
#define USE_SCRIPT
#define USE_SML_M
#define USE_DS18x20

// Smart Meter Empfehlung laut Tasmota
#ifdef USE_RULES
#undef USE_RULES
#endif

// sehr oft nötig für Script/SML
#define USE_UFILESYS

// ============================
// GROSSE MODULE ENTFERNEN
// ============================

// Zigbee / Display / KNX
#undef USE_ZIGBEE_ZNP
#undef USE_DISPLAY
#undef USE_KNX
#undef USE_TUYA_MCU

// Lighting (großer Block!)
#undef USE_LIGHT
#undef USE_LIGHT_PALETTE
#undef USE_WS2812
#undef USE_SM16716
#undef USE_SM2135
#undef USE_MY92X1

// Dimmer / Shutter
#undef USE_PWM_DIMMER
#undef USE_SHUTTER
#undef USE_SONOFF_D1
#undef USE_SHELLY_DIMMER
#undef USE_EXS_DIMMER

// Energie-Module (du nutzt SML → alles raus)
#undef USE_PZEM004T
#undef USE_PZEM_AC
#undef USE_PZEM_DC
#undef USE_MCP39F501
#undef USE_ADE7953
#undef USE_BL0940

// Integrationen raus
#undef USE_HOME_ASSISTANT
#undef USE_DOMOTICZ
#undef USE_EMULATION_HUE
#undef USE_EMULATION_WEMO

// Kommunikation / Extras
#undef USE_DEVICE_GROUPS
#undef USE_SERIAL_BRIDGE
#undef USE_IR_REMOTE
#undef USE_IR_RECEIVE
#undef USE_BUZZER

// optionale Sensoren
#undef USE_DHT

// Web-Extras reduzieren (WebUI bleibt erhalten!)
#undef USE_WEBSEND_RESPONSE
#undef USE_WEBSERVER_TLS
#undef USE_MQTT_TLS

// ============================
// NICHT ENTFERNEN (wichtig!)
// ============================
// USE_SCRIPT ✅
// USE_SML_M ✅
// USE_WEBSERVER ✅
// USE_MQTT ✅ (lassen! sonst wird Build größer/instabil)

//letzter Feinsschliff
#undef USE_HOME_ASSISTANT
#undef USE_DOMOTICZ
#undef USE_EMULATION_HUE
#undef USE_EMULATION_WEMO
#undef USE_DEVICE_GROUPS
#undef USE_SERIAL_BRIDGE
#undef USE_BUZZER


// ============================
// Logging klein halten
// ============================
#define SYS_LOG_LEVEL LOG_LEVEL_NONE
#define SERIAL_LOG_LEVEL 0

// ============================
// SML optimieren (kleiner)
// ============================
#define MAX_METERS 1
#define SML_BSIZ 48
#define TMSBSIZ 128

#endif
