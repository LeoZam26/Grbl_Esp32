#pragma once

// Define your machine name (optional)
#define MACHINE_NAME "XIAO CNC Minimal"

#define X_STEP_PIN    5
#define X_DIRECTION_PIN 6

#define Y_STEP_PIN    7
#define Y_DIRECTION_PIN 8

// Servo on pin 0 (PWM)
#define Z_ENABLE_PIN    -1
#define Z_STEP_PIN      -1
#define Z_DIRECTION_PIN -1
#define SERVO_Z_PIN     0

// Limits (optional)
#define X_LIMIT_PIN -1
#define Y_LIMIT_PIN -1
#define Z_LIMIT_PIN -1

// Spindle (optional)
#define SPINDLE_TYPE SPINDLE_TYPE_NONE

// Default stepper settings
#define DEFAULT_STEP_PULSE_MICROSECONDS 4
#define STEP_IDLE_DELAY 25

#define DEFAULT_STEPPER_STEPS_PER_MM_X  240.0
#define DEFAULT_STEPPER_STEPS_PER_MM_Y  340.0
#define DEFAULT_STEPPER_STEPS_PER_MM_Z  100.0

#define DEFAULT_MAX_RATE_X 2000.0  // mm/min
#define DEFAULT_MAX_RATE_Y 2000.0
#define DEFAULT_MAX_RATE_Z 500.0

#define DEFAULT_ACCELERATION 100.0  // mm/sec^2
#define DEFAULT_JUNCTION_DEVIATION 0.02  // mm

// Homing (disabled)
#define HOMING_CYCLE_0 0
#define HOMING_CYCLE_1 0
#define HOMING_CYCLE_2 0
#define HOMING_ENABLE 0
