#include <limits.h>
#include <math.h>

// temporary include
#include <iostream>

#include "fs16.hpp"

/* helper structs */

typedef union float_bits {
  struct {
    unsigned int mantissa : 23;
    unsigned int exponent : 8;
    unsigned int sign : 1;
  };
  float bits;
} float_bits;

typedef union double_bits {
  struct {
    unsigned long long mantissa : 52;
    unsigned long long exponent : 11;
    unsigned long long sign : 1;
  };
  double bits;
} double_bits;

/* fs16 implementation */

fs16::fs16() : value(0) {}
fs16::fs16(u16 data) : value(data) {}

// TODO

fs16::fs16(float data) {
  float_bits bits;
  bits.bits = data;

  std::cout << (bits.sign & 1) << " " << (bits.exponent & 0xff) << " "
            << (bits.mantissa & 0x7ff) << " " << std::endl;
}

fs16::fs16(double data) {
  double_bits bits;
  bits.bits = data;

  std::cout << (bits.sign & 1) << " " << (bits.exponent & 0x7ff) << " "
            << (bits.mantissa & 0xfffffffffffff) << " " << std::endl;
}
