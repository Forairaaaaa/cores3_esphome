#pragma once
#include "esphome/components/display/display_buffer.h"

namespace esphome {
namespace m5cores3_display {

class M5CoreS3Display : public display::DisplayBuffer {
 public:

  float get_setup_priority() const override;
  void update() override;

  void fill(Color color) override;

  void dump_config() override;
  void setup() override;

  display::DisplayType get_display_type() override { return display::DisplayType::DISPLAY_TYPE_COLOR; }

 protected:
  void draw_absolute_pixel_internal(int x, int y, Color color) override;
  int get_width_internal() override;
  int get_height_internal() override;
};

}  // namespace m5cores3_display
}  // namespace esphome
