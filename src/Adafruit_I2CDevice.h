#include "Particle.h"

#ifndef Adafruit_I2CDevice_h
#define Adafruit_I2CDevice_h


class Adafruit_I2CDevice {
 public:
  Adafruit_I2CDevice(uint8_t addr, TwoWire *theWire=&Wire);
  uint8_t address(void);
  bool begin(void);
  bool detected(void);

  bool read(uint8_t *buffer, size_t len, bool stop=true);
  bool write(uint8_t *buffer, size_t len, bool stop=true, uint8_t *prefix_buffer=NULL, size_t prefix_len=0);
  bool write_then_read(uint8_t *write_buffer, size_t write_len, uint8_t *read_buffer, size_t read_len, bool stop=false);


 private:
  uint8_t _addr;
  TwoWire *_wire;
  bool _begun;

};

#endif // Adafruit_I2CDevice_h