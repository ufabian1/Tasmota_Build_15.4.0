#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// ===== Pflicht für klassisches Tasmota-Script + Smart Meter =====
#ifndef USE_SCRIPT
#define USE_SCRIPT
#endif

#ifndef USE_SML_M
#define USE_SML_M
#endif

// Laut Tasmota-Smart-Meter-Doku soll USE_RULES deaktiviert werden
#ifdef USE_RULES
#undef USE_RULES
#endif

// DS18x20 soll bei dir aktiv bleiben
#ifndef USE_DS18x20
#define USE_DS18x20
#endif

// Community-erprobter Zusatz für SML-Builds
#ifndef USE_UFILESYS
#define USE_UFILESYS
#endif

// ===== Problematische / unnötige Treiber für deinen Use Case aus =====
// Diese Treiber haben in deinem Log bereits direkt mit Rules-/Script-Symbolen gekracht
#ifdef USE_SHUTTER
#undef USE_SHUTTER
#endif

#ifdef USE_PWM_DIMMER
#undef USE_PWM_DIMMER
#endif

// Weitere große / unnötige Features für Wemos D1 mini abschalten
#ifdef USE_ZIGBEE_ZNP
#undef USE_ZIGBEE_ZNP
#endif

#ifdef USE_DISPLAY
#undef USE_DISPLAY
#endif

#ifdef USE_KNX
#undef USE_KNX
#endif

#ifdef USE_IR_REMOTE
#undef USE_IR_REMOTE
#endif

#ifdef USE_IR_RECEIVE
#undef USE_IR_RECEIVE
#endif

#ifdef USE_SERIAL_BRIDGE
#undef USE_SERIAL_BRIDGE
#endif

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

#ifdef USE_BL0940
#undef USE_BL0940
#endif

#ifdef USE_DOMOTICZ
#undef USE_DOMOTICZ
#endif

#ifdef USE_HOME_ASSISTANT
#undef USE_HOME_ASSISTANT
#endif

#ifdef USE_EMULATION_HUE
#undef USE_EMULATION_HUE
#endif

#ifdef USE_EMULATION_WEMO
#undef USE_EMULATION_WEMO
#endif

#endif  // _USER_CONFIG_OVERRIDE_H_
