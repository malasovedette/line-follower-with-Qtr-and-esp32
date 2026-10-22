#pragma once

#include <stdint.h>

namespace constants {
namespace Motor {
constexpr uint32_t PWM_FREQUENCY_HZ = 20000;
constexpr uint8_t PWM_RESOLUTION_BITS = 8;
constexpr int16_t PWM_MAX = 255;
constexpr int16_t PWM_MIN = -255;
constexpr int16_t PWM_MIN_CURVE = -80;
}

namespace Qtr {
constexpr uint16_t ADC_MAX = 4095;

}


namespace LineFollower {
constexpr int16_t DEFAULT_BASE_SPEED = 120;
constexpr int16_t MAX_CORRECTION = 150;
constexpr bool FOLLOW_WHITE_LINE = true;
constexpr int16_t TARGET_POSITION = 3500;
constexpr uint16_t LINE_LOSS_GRACE_MS = 30;
constexpr uint16_t LINE_SEARCH_TIMEOUT_MS = 2500;
constexpr int16_t LINE_GAP_CROSS_SPEED = 90;
constexpr int16_t LINE_SEARCH_SPEED = 90;
// Une impasse (bac a sable) ne contient aucun signal blanc significatif.
// Un ou deux capteurs au-dessus de ce seuil correspondent a une perte de ligne normale.
constexpr uint16_t DEAD_END_SENSOR_THRESHOLD = 350;
constexpr uint8_t DEAD_END_CONFIRM_SAMPLES = 3;

// Virages et intersections
constexpr uint16_t SHARP_TURN_THRESHOLD = 600;
constexpr uint16_t SHARP_TURN_CENTER_MAX = 350;
constexpr uint16_t JUNCTION_SENSOR_THRESHOLD = 600;
constexpr uint8_t JUNCTION_MIN_SENSOR_COUNT = 5;
constexpr uint8_t JUNCTION_CONFIRM_SAMPLES = 2;
}

}
