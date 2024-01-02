#include "ili9xxx_display.h"
#include "esphome/core/application.h"
#include "esphome/core/hal.h"
#include "esphome/core/helpers.h"
#include "esphome/core/log.h"

namespace esphome {
namespace m5cores3_display {

float M5CoreS3Display::get_setup_priority() const { return setup_priority::HARDWARE; }

void ILI9XXXDisplay::update() {
}






}
}