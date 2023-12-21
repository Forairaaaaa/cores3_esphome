#include "esphome/core/log.h"
#include "board.h"

namespace esphome {
namespace board {

static const char *TAG = "empty_component.component";

void BoardCoreS3::setup() {

}

void BoardCoreS3::loop() {

}

void BoardCoreS3::dump_config(){
    ESP_LOGCONFIG(TAG, "BoardCoreS3");
}


}  // namespace empty_component
}  // namespace esphome