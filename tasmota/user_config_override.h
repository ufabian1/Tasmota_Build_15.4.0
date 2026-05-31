#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// ===== Required for GS303 / sensor53 =====
#ifndef USE_SCRIPT
#define USE_SCRIPT
#endif

#ifndef USE_SML_M
#define USE_SML_M
#endif

#ifndef USE_DS18x20
#define USE_DS18x20
#endif

// ===== Keep basic web/API =====
#ifndef USE_WEBSERVER
#define USE_WEBSERVER
#endif

// ===== Important: do NOT strip rule/script related internals =====
// leave rules support available for components expecting shared symbols

// ===== Optional trimming: disable heavy features only =====
#ifdef USE_ZIGBEE
#undef USE_ZIGBEE
#endif

#ifdef USE_DISPLAY
#undef USE_DISPLAY
#endif

#ifdef USE_KNX
#undef USE_KNX
#endif

#ifdef USE_MQTT_TLS
#undef USE_MQTT_TLS
#endif

#ifdef USE_WEBSERVER_TLS
#undef USE_WEBSERVER_TLS
#endif

#ifdef USE_ARDUINO_OTA
#undef USE_ARDUINO_OTA
#endif

#endif  // _USER_CONFIG_OVERRIDE_H_
