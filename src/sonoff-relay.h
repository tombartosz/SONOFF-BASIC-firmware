/*
 SONOFF BASIC: firmware
 More info: https://github.com/tschaban/SONOFF-BASIC-firmware
 LICENCE: http://opensource.org/licenses/MIT
 2016-10-27 tschaban https://github.com/tschaban
*/

#ifndef _sonoff_relay_h
#define _sonoff_relay_h

#include <PubSubClient.h>
#include "sonoff-eeprom.h"
#include "sonoff-led.h"
#include "sonoff-configuration.h"

#define RELAY 12


class SonoffRelay
{
  private:
   
  public:
    SonoffRelay();
    void on();
    void off();
    void toggle();
    void publish();
};
#endif
