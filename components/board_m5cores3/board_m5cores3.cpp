#include "esphome/core/log.h"
#include "board_m5cores3.h"

namespace esphome {
namespace board_m5cores3 {

static const char *TAG = "empty_component.component";

void BoardM5CoreS3::setup() {

}

void BoardM5CoreS3::loop() {

}

void BoardM5CoreS3::dump_config(){
    ESP_LOGCONFIG(TAG, "board_m5cores3 asasd");
}


}  // namespace empty_component
}  // namespace esphome