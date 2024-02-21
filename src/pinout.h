
// ? is defined module tracker `ARM_IO_PINOUT_MODULE` (pragma once)
#ifndef ARM_IO_PINOUT_MODULE
#define ARM_IO_PINOUT_MODULE 0x0

#pragma once

// add external support for C if it is C++
#ifdef __cplusplus
extern "C" {
#endif


#include <stdint.h> // @@ standard libraries


typedef enum PinRole {
  PowerSupply,
  DataInputAndOutput,
  InternalControl,
  PowerGND,
  ClockSignal,
} PinRole;

typedef enum PinType {
  SPI,
  PWM,
  I2C,
} PinType;

typedef struct Pin {
  const volatile PinRole role;
  const PinType type;
  const unsigned int n; // @type --> unsigned 32-bits integer <-- @from `#include <stdint.h>`
} Pin;


struct __pwm__cfunc { // ->> convert struct to a instantiable class object
  char get_clock_source() {
    const unsigned int mask = 0x0000000F;
    // TODO: define PWM CTL

    // (return -> PWM_CTL & mask)
    return mask & 0x0; // RETURNS bit 0 ->> REMOVE IT
  }

  void set_pwm_output(char *pin, unsigned int &v) {}

  inline char get_clock_status() {}

  void set_clock_divisor(unsigned int divisor) {}

  inline char _pwm_set_clock_frequency(unsigned int divisor) {}

  void reset_pwm_status_register() {}

  void _pwm_set_status(char pin, char &status) {}

  void _pwm_set_io_mode(char pin, char &mode) {}

  char _pwm_write() {} // abstract method
}


// ? is defined c++ env
#ifdef __cplusplus
}
#endif
// ? is defined c++ env

// ? is defined module tracker `ARM_IO_PINOUT_MODULE` (pragma once)
#endif
// ? is defined module tracker `ARM_IO_PINOUT_MODULE` (pragma once)
