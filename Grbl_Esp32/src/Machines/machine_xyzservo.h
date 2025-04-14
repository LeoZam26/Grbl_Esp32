#pragma once

#define MACHINE_NAME "StepperXY_ServoZ"

// === X Axis ===
#define X_STEP_PIN GPIO_NUM_5
#define X_DIRECTION_PIN GPIO_NUM_6
//#define X_DISABLE_PIN -1  // If unused

// === Y Axis ===
#define Y_STEP_PIN GPIO_NUM_7
#define Y_DIRECTION_PIN GPIO_NUM_8
//#define Y_DISABLE_PIN -1  // If unused

// === Z Axis as Servo ===
#define Z_SERVO_PIN GPIO_NUM_0
#define Z_SERVO_DOWN 0    // Adjust to match your physical setup
#define Z_SERVO_UP   180  // Adjust to match your physical setup

#define SERVO_Z

// === General Settings ===
#define DEFAULT_STEP_PULSE_MICROSECONDS 5
#define DEFAULT_STEPPER_IDLE_LOCK_TIME  255
#define DEFAULT_STEPPING_INVERT_MASK    0
#define INVERT_X_AXIS                   false
#define INVERT_Y_AXIS                   false

#define HOMING_CYCLE_0 (1<<X_AXIS)
#define HOMING_CYCLE_1 (1<<Y_AXIS)
// If you don't use Z homing, skip it

#define N_AXIS 3  // Must be 3 even if Z is servo

#define DEFAULT_AXIS_STEPS_PER_UNIT   { 240.0, 340.0, 100.0 } // Adjust based on your machine
#define DEFAULT_MAX_RATE              { 2000, 2000, 500 }
#define DEFAULT_ACCELERATION          { 100, 100, 50 }
#define DEFAULT_TRAVEL                { 240.0, 340.0, 50.0 }
