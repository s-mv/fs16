#ifndef smv_fs16_h
#define smv_fs16_h

// 1-bit for the sign
// 5-bit for the exponent
// 10-bit for the mantissa
// and an offset of 15
// one type to rule them all
// one type to find them
// one type to bring them all
// and in the darkness bind them
// (cackles)

#include <stdint.h>

typedef uint16_t u16;

class fs16 {
private:
  u16 value;
  static const u16 SIGN_MASK = 0x8000; // 1000 0000 0000 0000
  static const u16 EXP_MASK = 0x7c00;  // 0111 1100 0000 0000
  static const u16 FRAC_MASK = 0x3ff;  // 0000 0011 1111 1111

public:
  fs16(); 
  fs16(u16 data); 
  fs16(float data);
  fs16(double data);
};

#endif