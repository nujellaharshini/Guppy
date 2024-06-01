#include <SR04.h>

//LED1: Connect to pin 9 to long lead of LED. Connect short end of LED to 200 to 500 ohm resistor to GND;
//LED2: Connect to pin 10 to long lead of LED. Connect short end of LED to 200 to 500 ohm resistor to GND;
//LED3: Connect to pin 11 to long lead of LED. Connect short end of LED to 200 to 500 ohm resistor to GND;
//LED4: Connect to pin 12 to long lead of LED. Connect short end of LED to 200 to 500 ohm resistor to GND;
//BUZZER PIN 8 to positive (+) lead of passive buzzer.  The other lead goes to GND

// Original code supplied by Dr. Derickson
// Edited and documented by Gerome Cacho

#include "pitches.h"    // Library

//Happy birthday 
int melody1[] = {NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_F4, NOTE_E4, NOTE_C4, NOTE_C4, NOTE_D4,
                NOTE_C4, NOTE_G4, NOTE_F4, NOTE_C4, NOTE_C4, NOTE_C5, NOTE_A4, NOTE_F4, NOTE_E4,
                NOTE_D4, NOTE_AS4, NOTE_AS4, NOTE_A4, NOTE_F4, NOTE_G4, NOTE_F4};
int noteDurations1[] = {8, 8, 4, 4, 4, 2, 8, 8, 4, 4, 4, 2, 8, 8, 4, 4, 4, 4, 4, 8, 8, 4, 4, 4, 2};


// Twinkle Twinkle Little Star
int melody2[] = {
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4,
  NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4,
  NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4,
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4
};

int noteDurations2[] = {
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2
};

// Baa baa black sheep
int melody3[] = {
  NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4,
  NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4,
  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4,
  NOTE_D4, NOTE_G4, NOTE_D4
};
int noteDurations3[] = {
  4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 2, 4,
  4, 4, 4, 4, 4, 4, 4, 2,
  4, 4, 2
};

//Mary had a little lamb
int melody4[] = {
  NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_D4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_G4,
  NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4
};

int noteDurations4[] = {
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 2, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 2
};

// Humpty Dumpty
int melody5[] = {
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4
};

int noteDurations5[] = {
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2
};

// Jack and Jill
int melody6[] = {
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_G3, NOTE_C4
};

int noteDurations6[] = {
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 2
};

//Baby Shark
int melody7[] = {
  NOTE_G4, NOTE_A4, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_A4,
  NOTE_G4, NOTE_G4, NOTE_A4, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_D5, NOTE_C5,
  NOTE_A4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_D5,
  NOTE_C5, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_C5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_C5, NOTE_A4, NOTE_G4
};

int noteDurations7[] = {
  4, 4, 8, 8, 4, 4, 4, 4,
  4, 4, 4, 8, 8, 4, 4, 4,
  4, 4, 4, 4, 8, 8, 4, 4,
  4, 4, 4, 4, 4, 8, 8, 4,
  4, 4, 4, 4
};

//ABCD song
int melody8[] = {
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4,
  NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4,
  NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4,
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4
};

int noteDurations8[] = {
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2
};


//Dashing through the snow
int melody9[] = {
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_G4, NOTE_C4, NOTE_D4, 
  NOTE_E4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, 
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_G4, NOTE_C4, NOTE_D4, 
  NOTE_E4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, 
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_G4, NOTE_C4, 
  NOTE_D4, NOTE_E4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, 
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, 
  NOTE_D4, NOTE_G4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, 
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, 
  NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4
};

int noteDurations9[] = {
  4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 8, 
  4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
  4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 
  4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
  4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
  4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 
  4, 4, 4, 4, 4, 4, 2, 2, 2
};


float tempo = 1.275;

void playMelody(int melody[], int noteDurations[], int melodyLength){
  for (int thisNote = 0 ; thisNote < melodyLength ; thisNote++) {
        int randomLight1 = random(2, 8);
        int randomLight2 = random(2, 8);
        int randomLight3 = random(2, 8);
        int randomLight4 = random(2, 8);
        int randomLight5 = random(2, 8);
        int randomLight6 = random(2, 8);

        digitalWrite(randomLight1, HIGH);
        digitalWrite(randomLight2, HIGH);
        digitalWrite(randomLight3, LOW);
        digitalWrite(randomLight4, LOW);
        digitalWrite(randomLight5, HIGH);
        digitalWrite(randomLight6, LOW);

        int noteDuration = 1130 / noteDurations[thisNote];
        tone(8, melody[thisNote], noteDuration);

        int pause = noteDuration * tempo;
        delay(pause);

        noTone(8);
    }
}

void setup() {
    // Runs once
    pinMode(2, OUTPUT);   // configures the pins that drive LEDs as outputs
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);

    Serial.begin(9600);
}

void loop() {
  playMelody(melody1, noteDurations1, sizeof(melody1) / sizeof(melody1[0]));
  delay(3000); // Wait for 3s before playing the next melody

  playMelody(melody2, noteDurations2, sizeof(melody2) / sizeof(melody2[0]));
  delay(3000); // Wait for 3s before playing the next melody

  playMelody(melody3, noteDurations3, sizeof(melody3) / sizeof(melody3[0]));
  delay(3000); // Wait for 3s before playing the next melody

  playMelody(melody4, noteDurations4, sizeof(melody4) / sizeof(melody4[0]));
  delay(3000); // Wait for 3s before playing the next melody

  playMelody(melody5, noteDurations5, sizeof(melody5) / sizeof(melody5[0]));
  delay(3000); // Wait for 3s before playing the next melody

  playMelody(melody6, noteDurations6, sizeof(melody6) / sizeof(melody6[0]));
  delay(3000); // Wait for 3s before playing the next melody

  playMelody(melody7, noteDurations7, sizeof(melody7) / sizeof(melody7[0]));
  delay(3000); // Wait for 3s before playing the next melody

  playMelody(melody8, noteDurations8, sizeof(melody8) / sizeof(melody8[0]));
  delay(3000); // Wait for 3s before playing the next melody

  playMelody(melody9, noteDurations9, sizeof(melody9) / sizeof(melody9[0]));
  delay(3000); // Wait for 3s before playing the next melody

}
