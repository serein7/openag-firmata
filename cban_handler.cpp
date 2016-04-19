#include "cban_handler.h"

#include <openag-dht22.h>
Dht22 dht22("air_temperature", "humidity", A1);

void CbanHandler::begin(void) {
  dht22.begin();
}

String CbanHandler::get(String id) {
  String reply = ""; // <id>:<val>
  reply += dht22.get(id);
  return reply;
}

String CbanHandler::set(String id, String value) {
  String reply = ""; // <id>:<value>
  reply += dht22.set(id, value);
  return reply;
}
