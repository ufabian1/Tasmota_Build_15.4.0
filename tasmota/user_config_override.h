#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// =====================================================
// Minimal für Wemos D1 mini / ESP8266
// Ziel:
// - WebUI / WebAPI
// - klassisches Tasmota Script
// - Smart Meter Interface / sensor53 (GS303)
// - DS18x20
// =====================================================

// --- Pflicht für GS303 / klassisches Script ---
#ifndef USE_SCRIPT
#define USE_SCRIPT
#endif

#ifndef USE_SML_M
#define USE_SML_M
#endif

// Laut Tasmota Smart Meter Doku: Rules aus
#ifdef USE_RULES
#undef USE_RULES
#endif

// DS18x20 aktiv lassen
#ifndef USE_DS18x20
#define USE_DS18x20
#endif

// In erfolgreichen ESP8266-SML-Builds häufig mit drin
#ifndef USE_UFILESYS
#define USE_UFILESYS
#endif

// ==========================
// Große / unnötige Features aus
// ==========================

// Zigbee / Display / KNX / Tuya
#ifdef USE_ZIGBEE_ZNP
#undef USE_ZIGBEE_ZNP
#endif

#ifdef USE_DISPLAY
#undef USE_DISPLAY
#endif

#ifdef USE_KNX
#undef USE_KNX
#endif

#ifdef USE_TUYA_MCU
#undef USE_TUYA_MCU
#endif

// Licht / LED / Palette
#ifdef USE_LIGHT
#undef USE_LIGHT
#endif

#ifdef USE_LIGHT_PALETTE
#undef USE_LIGHT_PALETTE
#endif

#ifdef USE_WS2812
#undef USE_WS2812
#endif

#ifdef USE_SM16716
#undef USE_SM16716
#endif

#ifdef USE_SM2135
#undef USE_SM2135
#endif

#ifdef USE_MY92X1
#undef USE_MY92X1
#endif

// Dimmer / Shutter
#ifdef USE_SHUTTER
#undef USE_SHUTTER
#endif

#ifdef USE_PWM_DIMMER
#undef USE_PWM_DIMMER
#endif

#ifdef USE_SONOFF_D1
#undef USE_SONOFF_D1
#endif

#ifdef USE_SHELLY_DIMMER
#undef USE_SHELLY_DIMMER
#endif

#ifdef USE_EXS_DIMMER
#undef USE_EXS_DIMMER
#endif

// IR / Bridge / Buzzer
#ifdef USE_IR_REMOTE
#undef USE_IR_REMOTE
#endif

#ifdef USE_IR_RECEIVE
#undef USE_IR_RECEIVE
#endif

#ifdef USE_SERIAL_BRIDGE
#undef USE_SERIAL_BRIDGE
#endif

#ifdef USE_BUZZER
#undef USE_BUZZER
#endif

// Integrationen
#ifdef USE_HOME_ASSISTANT
#undef USE_HOME_ASSISTANT
#endif

#ifdef USE_DOMOTICZ
#undef USE_DOMOTICZ
#endif

#ifdef USE_EMULATION_HUE
#undef USE_EMULATION_HUE
#endif

#ifdef USE_EMULATION_WEMO
#undef USE_EMULATION_WEMO
#endif

#ifdef USE_DEVICE_GROUPS
#undef USE_DEVICE_GROUPS
#endif

// Energie-Module raus (du nutzt SML / sensor53, NICHT PZEM/ADE/BL0940)
#ifdef USE_ENERGY_MARGIN_DETECTION
#undef USE_ENERGY_MARGIN_DETECTION
#endif

#ifdef USE_PZEM004T
#undef USE_PZEM004T
#endif

#ifdef USE_PZEM_AC
#undef USE_PZEM_AC
#endif

#ifdef USE_PZEM_DC
#undef USE_PZEM_DC
#endif

#ifdef USE_MCP39F501
#undef USE_MCP39F501
#endif

#ifdef USE_ADE7953
#undef USE_ADE7953
#endif

#ifdef USE_BL0940
#undef USE_BL0940
#endif

// nicht benötigte Sensoren
#ifdef USE_DHT
#undef USE_DHT
#endif

// optionale Netzwerk-/Web-Extras
#ifdef USE_DISCOVERY
#undef USE_DISCOVERY
#endif

#ifdef USE_WEBSEND_RESPONSE
#undef USE_WEBSEND_RESPONSE
#endif

#ifdef USE_WEBSERVER_TLS
#undef USE_WEBSERVER_TLS
#endif

#ifdef USE_MQTT_TLS
#undef USE_MQTT_TLS
#endif

// Logging klein halten
#ifndef SYS_LOG_LEVEL
#define SYS_LOG_LEVEL LOG_LEVEL_NONE
#endif

#endif  // _USER_CONFIG_OVERRIDE_H_
