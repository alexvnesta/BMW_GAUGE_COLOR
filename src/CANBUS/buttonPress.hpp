#ifndef BUTTONPRESS_HPP
#define BUTTONPRESS_HPP
#include "canInit.hpp"
#include "canParse.hpp"
#include <FlexCAN_T4.h>

int checkNumClicks(void);
void parseCanMessage(uint32_t id, const uint8_t message[], uint8_t messageLength);


#endif