/*
  Contains all shared constatnts
  Note: Objects that need to be initialized are in globals.cpp
*/

#ifndef Constants_h
#define Constants_h

#include <stdint.h>
#include "NeoSWSerial.h"

/*
  Defines pins for the bluetooth communication
*/
const uint8_t BLUE_RX = A0;
const uint8_t BLUE_TX = A1;

/*
  Defines pins for wireless communication (433Mhz)
*/
const uint8_t RECEIVER_PIN = A5;

const uint8_t SEGMENT_OFF = 0b00000000;

/*
  Defines pins for display controllers  
*/
const uint8_t SCORE_LATCH_PIN = 3;
const uint8_t SCORE_CLK_PIN = 4;
const uint8_t SCORE_DATA_PIN = 5;


const char TEAM1_UP = 'h';
const char TEAM1_DOWN = 'v';
const char TEAM2_UP = 'a';
const char TEAM2_DOWN = 'm';
const char SET_SERVER = 'p';
const uint8_t MAX_SCORE = 99;
const uint8_t TEAM1 = 1;
const uint8_t TEAM2 = 2;
#endif