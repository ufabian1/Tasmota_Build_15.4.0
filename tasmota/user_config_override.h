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

// Licht raus
#undef USE_LIGHT
#undef USE_WS2812
#undef USE_LIGHT_PALETTE

// Dimmer raus
#undef USE_SHUTTER
#undef USE_PWM_DIMMER

// Energy raus
#undef USE_PZEM004T
#undef USE_PZEM_AC
#undef USE_ADE7953
#undef USE_BL0940

// Integrationen raus
#undef USE_HOME_ASSISTANT
#undef USE_DOMOTICZ

#endif
