// #include "ili9xxx_display.h"
#include "m5cores3_display.h"
#include "esphome/core/application.h"
#include "esphome/core/hal.h"
#include "esphome/core/helpers.h"
#include "esphome/core/log.h"
#include <M5Unified.h>

static const char *const TAG = "m5cores3.display";

namespace esphome {
namespace m5cores3_display {

float M5CoreS3Display::get_setup_priority() const { return setup_priority::HARDWARE; }

void M5CoreS3Display::update() {
}

void M5CoreS3Display::fill(Color color) {
  lgfx::rgb565_t fill_color;
  fill_color.r5 = color.r;
  fill_color.g6 = color.g;
  fill_color.b5 = color.b;
  M5.Display.fillScreen(fill_color);
}

void M5CoreS3Display::dump_config() {
}

void M5CoreS3Display::setup() {
  ESP_LOGI(TAG, "setup");
  M5.Display.fillScreen(TFT_BLUE);
}


void HOT M5CoreS3Display::draw_absolute_pixel_internal(int x, int y, Color color) {
  lgfx::rgb565_t fill_color;
  fill_color.r5 = color.r;
  fill_color.g6 = color.g;
  fill_color.b5 = color.b;
  M5.Display.drawPixel(x, y, fill_color);
}

int M5CoreS3Display::get_width_internal() { return M5.Display.width(); }

int M5CoreS3Display::get_height_internal() { return M5.Display.height(); }


}
}