// Core library - MCU-based
#include "Energia.h"


#ifndef DHT22_430_Library_h
#define DHT22_430_Library_h

////
/// @brief	Number of timing transitions needed to keep track of 2 * number bits + extra
///
#define MAXTIMINGS 85
///
/// @brief	Uncomment for debug print
///
#define DEBUG

///
/// @brief	Class for DHT22 sensor
///
class DHT22 {
private:
  uint8_t data[6];
  uint8_t _pin;
  uint32_t _lastMillis;
  boolean _lastResult;
  uint32_t _temperature, _humidity;
  
public:
  ///
  /// @brief	Constructor
  /// @param	pin pin for the signal
  ///
  DHT22(uint8_t pin);
  
  ///
  /// @brief	Initialise
  ///
  void begin();
  
  ///
  /// @brief	Acquire temperature and humidity
  /// @return	true=success, false=error
  /// @note	sensor frequency = 0.5 Hz
  ///
  boolean get();
  
  ///
  /// @brief	Temperature in Celsius
  /// @return	return temperature x 10 to avoid float
  /// @code {.cpp}
  /// Serial.print(temperatureX10()/10, DEC); // integer part
  /// Serial.print(".");                      // decimal separator
  /// Serial.print(temperatureX10()%10, DEC); // decimal part
  /// @endcode
  ///
  int32_t temperatureX10();
  
  ///
  /// @brief	Relative humidity in %
  /// @return	return relative humidity x 10 to avoid float
  /// @code {.cpp}
  /// Serial.print(humidityX10()/10, DEC); // integer part
  /// Serial.print(".");                   // decimal separator
  /// Serial.print(humidityX10()%10, DEC); // decimal part
  /// @endcode
  ///
  int32_t humidityX10();
};

#endif
