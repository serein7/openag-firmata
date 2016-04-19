#ifndef CBAN_HANDLER
#define CBAN_HANDLER

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif


class CbanHandler {
  public:
  // Public Methods
  void begin(void);
  String get(String id);
  String set(String id, String val);
};



#endif // CBAN_HANDLER_
