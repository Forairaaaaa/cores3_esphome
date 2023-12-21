#pragma once
#pragma once

#include <M5Unified.h>
#include "esphome/core/component.h"


namespace esphome {
namespace board {

class BoardCoreS3 : public Component {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
};


}  // namespace empty_component
}  // namespace esphome