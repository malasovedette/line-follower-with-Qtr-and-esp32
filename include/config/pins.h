#pragma once

#include <stdint.h>

namespace pins {

namespace Qtr {
// Convention logicielle : S0 est a gauche du robot, S7 est a droite.
// Montage reel, de gauche a droite : D8, D7, D6, D5, D4, D3, D2, D1.
// Les GPIO de D1 a D8 sont : 36, 39, 34, 35, 32, 33, 25, 26.
constexpr uint8_t COUNT = 8;
constexpr uint8_t PIN[COUNT] = {26, 25, 33, 32, 35, 34, 39, 36};
constexpr int8_t EMITTER_PIN = -1;  // Emetteurs alimentes en permanence.
}

namespace TB6612 {
constexpr uint8_t STBY = 18;
constexpr uint8_t PWMA = 13;
constexpr uint8_t AIN1 = 27;
constexpr uint8_t AIN2 = 14;
constexpr uint8_t PWMB = 4;
constexpr uint8_t BIN1 = 16;
constexpr uint8_t BIN2 = 17;
}

namespace Board {
constexpr uint8_t LED = 2;
constexpr uint8_t BOOT_BUTTON = 5;
}

}  // namespace pins
