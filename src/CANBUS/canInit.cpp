#include <Arduino.h>
#include "canInit.hpp"
#include "canParse.hpp"
#include "SERIAL/serial.hpp"
#include "buttonPress.hpp"

// New can object using can bus 0 on teensy.
FlexCAN_T4<CAN0, RX_SIZE_256, TX_SIZE_16> can1;

CAN_message_t canMsg;
CAN_message_t msgInt;

void initCanT4(void){

  can1.begin();
  can1.setBaudRate(100E3);
  can1.setMaxMB(8);

  can1.setMB(MB0, RX, STD);
  can1.setMB(MB1, RX);
  can1.setMB(MB2, RX);
  can1.setMB(MB3, RX);
  can1.setMB(MB4, RX);
  can1.setMB(MB5, RX);
  can1.setMB(MB6, RX);
  can1.setMB(MB7, RX);

  //REJECT ANY CAN MESSAGE THAT IS NOT IN THE LIST
  can1.setMBFilter(REJECT_ALL);

  // MAILBOX 0 Acts as a hardware interrupt (For button presses ONLY)
  can1.enableMBInterrupt(MB0, true);

  //Every time there is a new message, sniff the packet
  can1.onReceive(MB0,canInterruptSniff);
  can1.onReceive(canSniff);
  
  can1.setMBFilter(MB0, 0x1D6); // Hardware interrupt, steering wheel button
  can1.setMBFilter(MB1, 0x3B4); // Battery voltage and charge status
  can1.setMBFilter(MB2, 0x1B4); // Vehicle speed
  can1.setMBFilter(MB3, 0x0A8); // Torque, Clutch and Brake
  can1.setMBFilter(MB4, 0x0AA); // Engine RPM and Throttle position
  can1.setMBFilter(MB5, 0x1D0); // Coolant temp
  can1.setMBFilter(MB6, 0x202); // Dashboard brightness
  can1.setMBFilter(MB6, 0x130); // Ignition Status

  can1.mailboxStatus();
  //can1.distribute();

}

void canSniff(const CAN_message_t &msg) {
  parseCanMessage(msg.id, msg.buf, msg.len);
}

void readCanMessages(){
  // Use this to read messages in the main loop
  Serial.println("ATTEMPTING TO READ CAN MSG");
  if (can1.read(canMsg) ) {
    /*
    Serial.print("CAN1 "); 
    Serial.print("MB: "); Serial.print(canMsg.mb);
    Serial.print("  ID: 0x"); Serial.print(canMsg.id, HEX );
    Serial.print("  EXT: "); Serial.print(canMsg.flags.extended );
    Serial.print("  LEN: "); Serial.print(canMsg.len);
    Serial.print(" DATA: ");
    for ( uint8_t i = 0; i < 8; i++ ) {
      Serial.print(canMsg.buf[i]); Serial.print(" ");
    }
    Serial.print("  TS: "); Serial.println(canMsg.timestamp);
    */
    parseCanMessage(canMsg.id, canMsg.buf, canMsg.len);
  }

}

void canInterruptSniff(const CAN_message_t &msgInt) {
  
  //parseCanInterruptedMessage(canMsg.id, canMsg.buf, canMsg.len);
  /*
  Serial.println("INTERRUPTSNIFF*********************************");
  
    Serial.print("INTERRUPTED CAN1 "); 
    Serial.print("MB: "); Serial.print(msgInt.mb);
    Serial.print("  ID: 0x"); Serial.print(msgInt.id, HEX );
    Serial.print("  EXT: "); Serial.print(msgInt.flags.extended );
    Serial.print("  LEN: "); Serial.print(msgInt.len);
    Serial.print(" DATA: ");
    for ( uint8_t i = 0; i < 8; i++ ) {
      Serial.print(msgInt.buf[i]); Serial.print(" ");
    }
    Serial.print("  TS: "); Serial.println(msgInt.timestamp);

  Serial.println("END READ INTERRUPT CAN MSG");
  */
  parseCanInterruptedMessage(msgInt.id, msgInt.buf, msgInt.len);

}