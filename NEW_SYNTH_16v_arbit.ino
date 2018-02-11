#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include <Adafruit_MCP23017.h>
#include "wave_table.h"

// GUItool: begin automatically generated code
AudioSynthWaveform       waveFmControl;  //xy=275,657
AudioSynthWaveformSineModulated sine_fm7;       //xy=569,571
AudioSynthWaveformSineModulated sine_fm11;      //xy=571,875
AudioSynthWaveformSineModulated sine_fm8;       //xy=578,641
AudioSynthWaveformSineModulated sine_fm5;       //xy=579,420
AudioSynthWaveformSineModulated sine_fm15;      //xy=576,1185
AudioSynthWaveformSineModulated sine_fm6;       //xy=581,493
AudioSynthWaveformSineModulated sine_fm12;      //xy=580,945
AudioSynthWaveformSineModulated sine_fm3;       //xy=584,270
AudioSynthWaveformSineModulated sine_fm2;       //xy=585,193
AudioSynthWaveformSineModulated sine_fm4;       //xy=585,341
AudioSynthWaveformSineModulated sine_fm1;       //xy=586,114
AudioSynthWaveformSineModulated sine_fm9;       //xy=587,723
AudioSynthWaveformSineModulated sine_fm16;      //xy=585,1255
AudioSynthWaveformSineModulated sine_fm10;      //xy=587,807
AudioSynthWaveformSineModulated sine_fm13;      //xy=592,1033
AudioSynthWaveformSineModulated sine_fm14;      //xy=592,1117
AudioSynthWaveform       waveform10b;    //xy=727,779
AudioSynthWaveform       waveform9b;     //xy=728,694
AudioSynthWaveform       waveform10a;    //xy=728,740
AudioSynthWaveform       waveform8b;     //xy=729,623
AudioSynthWaveform       waveform9a;     //xy=729,666
AudioSynthWaveform       waveform8a;     //xy=730,590
AudioSynthWaveform       waveform2b;     //xy=732,176
AudioSynthWaveform       waveform7a;     //xy=731,519
AudioSynthWaveform       waveform5a;     //xy=732,370
AudioSynthWaveform       waveform6a;     //xy=732,445
AudioSynthWaveform       waveform3a;     //xy=733,218
AudioSynthWaveform       waveform1a;     //xy=734,63
AudioSynthWaveform       waveform2a;     //xy=734,143
AudioSynthWaveform       waveform12b;    //xy=731,927
AudioSynthWaveform       waveform7b;     //xy=733,553
AudioSynthWaveform       waveform12a;    //xy=732,894
AudioSynthWaveform       waveform6b;     //xy=734,480
AudioSynthWaveform       waveform4a;     //xy=735,290
AudioSynthWaveform       waveform11a;    //xy=733,823
AudioSynthWaveform       waveform14b;    //xy=732,1089
AudioSynthWaveform       waveform1b;     //xy=736,98
AudioSynthWaveform       waveform3b;     //xy=736,248
AudioSynthWaveform       waveform13b;    //xy=733,1004
AudioSynthWaveform       waveform14a;    //xy=733,1050
AudioSynthWaveform       waveform13a;    //xy=734,976
AudioSynthWaveform       waveform11b;    //xy=735,857
AudioSynthWaveform       waveform5b;     //xy=737,404
AudioSynthWaveform       waveform4b;     //xy=739,323
AudioSynthWaveform       waveform16b;    //xy=736,1237
AudioSynthWaveform       waveform16a;    //xy=737,1204
AudioSynthWaveform       waveform15a;    //xy=738,1133
AudioSynthWaveform       waveform15b;    //xy=740,1167
AudioMixer4              mixer6;         //xy=901,454
AudioMixer4              mixer8;         //xy=902,607
AudioMixer4              mixer10;        //xy=902,754
AudioMixer4              mixer9;         //xy=903,677
AudioMixer4              mixer1;         //xy=906,82
AudioMixer4              mixer5;         //xy=905,379
AudioMixer4              mixer7;         //xy=905,531
AudioMixer4              mixer4;         //xy=906,306
AudioMixer4              mixer2;         //xy=907,160
AudioMixer4              mixer12;        //xy=904,911
AudioMixer4              mixer3;         //xy=908,233
AudioMixer4              mixer11;        //xy=907,835
AudioMixer4              mixer14;        //xy=907,1064
AudioMixer4              mixer13;        //xy=908,987
AudioMixer4              mixer16;        //xy=909,1221
AudioMixer4              mixer15;        //xy=912,1145
AudioSynthWaveformDc     dc10;           //xy=1025,779
AudioSynthWaveformDc     dc9;            //xy=1026,705
AudioSynthWaveformDc     dc8;            //xy=1027,629
AudioSynthWaveformDc     dc7;            //xy=1028,558
AudioSynthWaveformDc     dc5;            //xy=1029,409
AudioSynthWaveformDc     dc6;            //xy=1029,484
AudioSynthWaveformDc     dc3;            //xy=1030,262
AudioSynthWaveformDc     dc4;            //xy=1030,336
AudioSynthWaveformDc     dc12;           //xy=1029,933
AudioSynthWaveformDc     dc11;           //xy=1030,862
AudioSynthWaveformDc     dc2;            //xy=1033,190
AudioSynthWaveformDc     dc14;           //xy=1030,1089
AudioSynthWaveformDc     dc1;            //xy=1034,114
AudioSynthWaveformDc     dc13;           //xy=1031,1015
AudioSynthWaveformDc     dc16;           //xy=1034,1243
AudioSynthWaveformDc     dc15;           //xy=1035,1172
AudioEffectMultiply      multiply10;     //xy=1180,763
AudioEffectMultiply      multiply9;      //xy=1181,689
AudioEffectMultiply      multiply8;      //xy=1182,613
AudioEffectMultiply      multiply7;      //xy=1183,542
AudioEffectMultiply      multiply5;      //xy=1184,393
AudioEffectMultiply      multiply6;      //xy=1184,468
AudioEffectMultiply      multiply3;      //xy=1185,246
AudioEffectMultiply      multiply4;      //xy=1185,320
AudioEffectMultiply      multiply12;     //xy=1184,917
AudioEffectMultiply      multiply11;     //xy=1185,846
AudioEffectMultiply      multiply2;      //xy=1188,174
AudioEffectMultiply      multiply14;     //xy=1185,1073
AudioEffectMultiply      multiply1;      //xy=1189,98
AudioEffectMultiply      multiply13;     //xy=1186,999
AudioEffectMultiply      multiply16;     //xy=1189,1227
AudioEffectMultiply      multiply15;     //xy=1198,1156
AudioMixer4              preMix1;        //xy=1354,209
AudioMixer4              preMix2;        //xy=1355,505
AudioMixer4              preMix3;        //xy=1363,803
AudioMixer4              preMix4;        //xy=1369,1113
AudioMixer4              mainMix;        //xy=1556,664
AudioOutputI2S           i2s2;           //xy=1696.5000915527344,665.7500305175781
AudioConnection          patchCord1(waveFmControl, sine_fm1);
AudioConnection          patchCord2(waveFmControl, sine_fm2);
AudioConnection          patchCord3(waveFmControl, sine_fm3);
AudioConnection          patchCord4(waveFmControl, sine_fm4);
AudioConnection          patchCord5(waveFmControl, sine_fm5);
AudioConnection          patchCord6(waveFmControl, sine_fm6);
AudioConnection          patchCord7(waveFmControl, sine_fm7);
AudioConnection          patchCord8(waveFmControl, sine_fm8);
AudioConnection          patchCord9(waveFmControl, sine_fm9);
AudioConnection          patchCord10(waveFmControl, sine_fm10);
AudioConnection          patchCord11(waveFmControl, sine_fm11);
AudioConnection          patchCord12(waveFmControl, sine_fm12);
AudioConnection          patchCord13(waveFmControl, sine_fm13);
AudioConnection          patchCord14(waveFmControl, sine_fm14);
AudioConnection          patchCord15(waveFmControl, sine_fm15);
AudioConnection          patchCord16(waveFmControl, sine_fm16);
AudioConnection          patchCord17(sine_fm7, 0, mixer7, 2);
AudioConnection          patchCord18(sine_fm11, 0, mixer11, 2);
AudioConnection          patchCord19(sine_fm8, 0, mixer8, 2);
AudioConnection          patchCord20(sine_fm5, 0, mixer5, 2);
AudioConnection          patchCord21(sine_fm15, 0, mixer15, 2);
AudioConnection          patchCord22(sine_fm6, 0, mixer6, 2);
AudioConnection          patchCord23(sine_fm12, 0, mixer12, 2);
AudioConnection          patchCord24(sine_fm3, 0, mixer3, 2);
AudioConnection          patchCord25(sine_fm2, 0, mixer2, 2);
AudioConnection          patchCord26(sine_fm4, 0, mixer4, 2);
AudioConnection          patchCord27(sine_fm1, 0, mixer1, 2);
AudioConnection          patchCord28(sine_fm9, 0, mixer9, 2);
AudioConnection          patchCord29(sine_fm16, 0, mixer16, 2);
AudioConnection          patchCord30(sine_fm10, 0, mixer10, 2);
AudioConnection          patchCord31(sine_fm13, 0, mixer13, 2);
AudioConnection          patchCord32(sine_fm14, 0, mixer14, 2);
AudioConnection          patchCord33(waveform10b, 0, mixer10, 1);
AudioConnection          patchCord34(waveform9b, 0, mixer9, 1);
AudioConnection          patchCord35(waveform10a, 0, mixer10, 0);
AudioConnection          patchCord36(waveform8b, 0, mixer8, 1);
AudioConnection          patchCord37(waveform9a, 0, mixer9, 0);
AudioConnection          patchCord38(waveform8a, 0, mixer8, 0);
AudioConnection          patchCord39(waveform2b, 0, mixer2, 1);
AudioConnection          patchCord40(waveform7a, 0, mixer7, 0);
AudioConnection          patchCord41(waveform5a, 0, mixer5, 0);
AudioConnection          patchCord42(waveform6a, 0, mixer6, 0);
AudioConnection          patchCord43(waveform3a, 0, mixer3, 0);
AudioConnection          patchCord44(waveform1a, 0, mixer1, 0);
AudioConnection          patchCord45(waveform2a, 0, mixer2, 0);
AudioConnection          patchCord46(waveform12b, 0, mixer12, 1);
AudioConnection          patchCord47(waveform7b, 0, mixer7, 1);
AudioConnection          patchCord48(waveform12a, 0, mixer12, 0);
AudioConnection          patchCord49(waveform6b, 0, mixer6, 1);
AudioConnection          patchCord50(waveform4a, 0, mixer4, 0);
AudioConnection          patchCord51(waveform11a, 0, mixer11, 0);
AudioConnection          patchCord52(waveform14b, 0, mixer14, 1);
AudioConnection          patchCord53(waveform1b, 0, mixer1, 1);
AudioConnection          patchCord54(waveform3b, 0, mixer3, 1);
AudioConnection          patchCord55(waveform13b, 0, mixer13, 1);
AudioConnection          patchCord56(waveform14a, 0, mixer14, 0);
AudioConnection          patchCord57(waveform13a, 0, mixer13, 0);
AudioConnection          patchCord58(waveform11b, 0, mixer11, 1);
AudioConnection          patchCord59(waveform5b, 0, mixer5, 1);
AudioConnection          patchCord60(waveform4b, 0, mixer4, 1);
AudioConnection          patchCord61(waveform16b, 0, mixer16, 1);
AudioConnection          patchCord62(waveform16a, 0, mixer16, 0);
AudioConnection          patchCord63(waveform15a, 0, mixer15, 0);
AudioConnection          patchCord64(waveform15b, 0, mixer15, 1);
AudioConnection          patchCord65(mixer6, 0, multiply6, 0);
AudioConnection          patchCord66(mixer8, 0, multiply8, 0);
AudioConnection          patchCord67(mixer10, 0, multiply10, 0);
AudioConnection          patchCord68(mixer9, 0, multiply9, 0);
AudioConnection          patchCord69(mixer1, 0, multiply1, 0);
AudioConnection          patchCord70(mixer5, 0, multiply5, 0);
AudioConnection          patchCord71(mixer7, 0, multiply7, 0);
AudioConnection          patchCord72(mixer4, 0, multiply4, 0);
AudioConnection          patchCord73(mixer2, 0, multiply2, 0);
AudioConnection          patchCord74(mixer12, 0, multiply12, 0);
AudioConnection          patchCord75(mixer3, 0, multiply3, 0);
AudioConnection          patchCord76(mixer11, 0, multiply11, 0);
AudioConnection          patchCord77(mixer14, 0, multiply14, 0);
AudioConnection          patchCord78(mixer13, 0, multiply13, 0);
AudioConnection          patchCord79(mixer16, 0, multiply16, 0);
AudioConnection          patchCord80(mixer15, 0, multiply15, 0);
AudioConnection          patchCord81(dc10, 0, multiply10, 1);
AudioConnection          patchCord82(dc9, 0, multiply9, 1);
AudioConnection          patchCord83(dc8, 0, multiply8, 1);
AudioConnection          patchCord84(dc7, 0, multiply7, 1);
AudioConnection          patchCord85(dc5, 0, multiply5, 1);
AudioConnection          patchCord86(dc6, 0, multiply6, 1);
AudioConnection          patchCord87(dc3, 0, multiply3, 1);
AudioConnection          patchCord88(dc4, 0, multiply4, 1);
AudioConnection          patchCord89(dc12, 0, multiply12, 1);
AudioConnection          patchCord90(dc11, 0, multiply11, 1);
AudioConnection          patchCord91(dc2, 0, multiply2, 1);
AudioConnection          patchCord92(dc14, 0, multiply14, 1);
AudioConnection          patchCord93(dc1, 0, multiply1, 1);
AudioConnection          patchCord94(dc13, 0, multiply13, 1);
AudioConnection          patchCord95(dc16, 0, multiply16, 1);
AudioConnection          patchCord96(dc15, 0, multiply15, 1);
AudioConnection          patchCord97(multiply10, 0, preMix3, 1);
AudioConnection          patchCord98(multiply9, 0, preMix3, 0);
AudioConnection          patchCord99(multiply8, 0, preMix2, 3);
AudioConnection          patchCord100(multiply7, 0, preMix2, 2);
AudioConnection          patchCord101(multiply5, 0, preMix2, 0);
AudioConnection          patchCord102(multiply6, 0, preMix2, 1);
AudioConnection          patchCord103(multiply3, 0, preMix1, 2);
AudioConnection          patchCord104(multiply4, 0, preMix1, 3);
AudioConnection          patchCord105(multiply12, 0, preMix3, 3);
AudioConnection          patchCord106(multiply11, 0, preMix3, 2);
AudioConnection          patchCord107(multiply2, 0, preMix1, 1);
AudioConnection          patchCord108(multiply14, 0, preMix4, 1);
AudioConnection          patchCord109(multiply1, 0, preMix1, 0);
AudioConnection          patchCord110(multiply13, 0, preMix4, 0);
AudioConnection          patchCord111(multiply16, 0, preMix4, 3);
AudioConnection          patchCord112(multiply15, 0, preMix4, 2);
AudioConnection          patchCord113(preMix1, 0, mainMix, 0);
AudioConnection          patchCord114(preMix2, 0, mainMix, 1);
AudioConnection          patchCord115(preMix3, 0, mainMix, 2);
AudioConnection          patchCord116(preMix4, 0, mainMix, 3);
AudioConnection          patchCord117(mainMix, 0, i2s2, 0);
AudioConnection          patchCord118(mainMix, 0, i2s2, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=1713,783
// GUItool: end automatically generated code

// NUM_OF_VOICE is how much polyphony
#define NUM_OF_VOICES 16

// initiate MCP chips
Adafruit_MCP23017 mcpRead;
Adafruit_MCP23017 mcpWrite;

// make pointer arrays for all of the audio objects
AudioSynthWaveform *wavesA[NUM_OF_VOICES] = { &waveform1a , &waveform2a , &waveform3a , &waveform4a ,
                                              &waveform5a , &waveform6a , &waveform7a , &waveform8a ,
                                              &waveform9a , &waveform10a, &waveform11a, &waveform12a,
                                              &waveform13a, &waveform14a, &waveform15a, &waveform16a
                                            };

AudioSynthWaveform *wavesB[NUM_OF_VOICES] = { &waveform1b , &waveform2b , &waveform3b , &waveform4b ,
                                              &waveform5b , &waveform6b , &waveform7b , &waveform8b ,
                                              &waveform9b , &waveform10b, &waveform11b, &waveform12b,
                                              &waveform13b, &waveform14b, &waveform15b, &waveform16b
                                            };

AudioSynthWaveformSineModulated *fms[NUM_OF_VOICES] = { &sine_fm1 , &sine_fm2 , &sine_fm3 , &sine_fm4 ,
                                                        &sine_fm5 , &sine_fm6 , &sine_fm7 , &sine_fm8 ,
                                                        &sine_fm9 , &sine_fm10, &sine_fm11, &sine_fm12,
                                                        &sine_fm13, &sine_fm14, &sine_fm15, &sine_fm16
                                                      };

AudioSynthWaveformDc *dcs[NUM_OF_VOICES] = { &dc1 , &dc2 , &dc3 , &dc4 , &dc5 , &dc6 , &dc7 , &dc8 ,
                                             &dc9 , &dc10, &dc11, &dc12, &dc13, &dc14, &dc15, &dc16 
                                           };

AudioMixer4 *mix[NUM_OF_VOICES] = { &mixer1 , &mixer2 , &mixer3 , &mixer4 , &mixer5 , &mixer6 , &mixer7 ,
                                    &mixer8 , &mixer9 , &mixer10, &mixer11, &mixer12, &mixer13, &mixer14,
                                    &mixer15, &mixer16
                                  };

// convert midi note to frequency and detune it by a specified amount (in cents).
float midi2freq (int midi, int detune, int octaveShift) {
  //shift octive
  midi = midi + (octaveShift * 12);
  float val = 440.0 * powf(2.0, (float)(((float)midi - (float)69 - ((float)detune / (float)100)) * 0.08333333));
  return (val);
}

class voice {
  public:
    AudioSynthWaveform *waveA;           // Create a class named Voice which will store the 2 waveform
    AudioSynthWaveform *waveB;           // osc, a DC waveform generator (to use to control the voice's
    AudioSynthWaveformDc *dc;            // fake envelope through a multiplier)
    AudioSynthWaveformSineModulated *fm; // also a frequency modulated Sine wave

    int midi;                            // Other variables: Midi note, to change note when needed, what key
    int keyAssigned;                     // (or button) this voice is assigned to: a bool to know when the
    bool wavePlaying;                    // voice is playing, the millis timestamp of when the note stated playing
    bool waveReleasing = false;
    unsigned long mils;
    unsigned long releaseTime;

    static int releaseDelay;
    static int attackDelay;              // These are the same for all voice objects. Release and attack
    static int waveTa;                   // delay for the fake envelope, the type of waveform for each osc,
    static int waveTb;                   // the detune amount, and the mix of wave A, B and the FM
    static int detune;
    static int octaveShift;
    static float waveAmix;
    static float waveBmix;
    static float fmMix;

    voice() {}                           // Constructer.

    void playNote(int midi) {
      // When called, simultaneously release the note, set the waves to the freq and waveTypes then...
      AudioNoInterrupts();
      dc->amplitude(0, releaseDelay);
      waveA->begin(1, midi2freq(midi, (detune * -1), octaveShift), waveTa);
      waveB->begin(1, midi2freq(midi, detune, octaveShift), waveTb);
      fm->frequency(midi2freq(midi, 0, octaveShift));
      fm->amplitude(1);


      // Attack! ... I mean, play the note
      dc->amplitude(1, attackDelay);

      AudioInterrupts();

      wavePlaying = true;
      mils = millis();

      return;
    }

    void stopNote() {
      // release note
      dc->amplitude(0, releaseDelay);

      waveReleasing = true;
      releaseTime = millis();

      return;
    }

    bool isOn() {
      // Check to see if the note is currently playing
      return (wavePlaying);
    }



    unsigned long timer() {
      // Return timestamp of when the note was played
      return (mils);
    }

};

int16_t const* wave_table[13] = {
  AKWF_0017,           //  0
  AKWF_0018,           //  1
  AKWF_0020,           //  2
  AKWF_0028,           //  3
  AKWF_0043,           //  4
  AKWF_0089,           //  5
  AKWF_0197,           //  6
  AKWF_c604_0015,      //  7
  AKWF_blended_0001,   //  8
  AKWF_eguitar_0003,   //  9
  AKWF_hvoice_0085,    // 10
  AKWF_sinharm_0010,   // 11
  AKWF_sinharm_0014    // 12
};

// Defaults for the variables will eventially be controlled by an interface of sorts
int voice::releaseDelay  = 250;
int voice::attackDelay   = 25;
int voice::waveTa        = WAVEFORM_ARBITRARY;
int voice::waveTb        = WAVEFORM_ARBITRARY;
int voice::detune        = 8; // cents A is tuned sharp and B is tuned flat
float voice::waveAmix    = .5;
float voice::waveBmix    = .5;
float voice::fmMix       = 0;
int voice::octaveShift   = -1;
int waveFM               = WAVEFORM_TRIANGLE;
int fmMidiNote           = 10;
int waveTableIndexA      = 6;
int waveTableIndexB      = 11;

// 6, 11


// keyboard matrix.
int keymatrix[6][11] = {
  { 0, 37, 43, 49, 55, 61, 67, 73, 79, 85, 91},
  { 0, 38, 44, 50, 56, 62, 68, 74, 80, 86, 92},
  { 0, 39, 45, 51, 57, 63, 69, 75, 81, 87, 93},
  { 0, 40, 46, 52, 58, 64, 70, 76, 82, 88, 94},
  { 0, 41, 47, 53, 59, 65, 71, 77, 83, 89, 95},
  {36, 42, 48, 54, 60, 66, 72, 78, 84, 90, 96}
};

// Variable to keep track if a key is being held already or not
bool keyHeld[6][11] = {false};

// initialize array of voices
voice voices[NUM_OF_VOICES];

// self explainatory function name
int findFreeVoice() {
  // Check for a voice that's not currently playing
  int oldest = 0;
  for (int i = 0; i < NUM_OF_VOICES; i++) {
    //Serial.println("voices[" + (String)i + "].waveReleasing: " + voices[i].waveReleasing);
    if (!voices[i].isOn() && !voices[i].waveReleasing) {
      // Return the first voice that's not playing
      return (i);
    }
    // while simultaneously (sp?) finding to oldest (to save a for loop)
    if (voices[i].mils < voices[oldest].mils) {
      oldest = i;
    }
  }
  // We'll only get here if all of the voices were playing, so return oldest
  //voices[oldest].stopNote();
  Serial.println("Returning Oldest voice: " + (String)oldest);
  voices[oldest].dc->amplitude(0, 0);
  return (oldest);
  
}

int freeVoice = 0;

void doTheThing(int i, int j) {
  Serial.print("KeyMatrix[");
  Serial.print(j);
  Serial.print("][");
  Serial.print(i);
  Serial.println("]");
  Serial.println("Play Midi Note: " + (String)keymatrix[j][i]);
  freeVoice = findFreeVoice();
  voices[freeVoice].playNote(keymatrix[j][i]);
  voices[freeVoice].keyAssigned = keymatrix[j][i];
  Serial.println("Using Voice #: " + (String)freeVoice);
  Serial.print("Memory usage max: ");
 Serial.println(AudioMemoryUsageMax());
 Serial.println("--------------------");
}

uint16_t keyBits;
void readKeys() {
  for (int i = 0; i < 11; i++) {
    mcpWrite.digitalWrite(i, LOW);       
                                         // ~ is bitwise negate operator. I'm using this for
    keyBits = ~mcpRead.readGPIOAB();     // my own mind when doing logic because using the              
                                         // Internal pullup essentially reverses all digital logic
    for (int j = 0; j < 6; j++) {       
      if ((keyBits >> j) & 1) {     //This if checks if the Jth bit is equaly to 1
        // Check to see if it was a new press
        if (!keyHeld[j][i]) {
          doTheThing(i, j);
          keyHeld[j][i] = true;
        }
        // if the key is already being held, do nothing ... no else statement here
      } // if keybits
      else if(keyHeld[j][i]) {
        keyHeld[j][i] = false;
        // Find the voice that was assigned to that key and stop it!
        for ( int k = 0; k < NUM_OF_VOICES; k++) {
          if (voices[k].keyAssigned == keymatrix[j][i] && voices[k].isOn()) {
            voices[k].stopNote();
          }
        } // for k
      } // else if
    } // for J

    mcpWrite.digitalWrite(i, HIGH);
  } // for I
} // readKeys


int wetDryMix = 50;

void checkStops() {
  unsigned long mils = millis();
  for ( int i = 0; i < NUM_OF_VOICES; i++) {
    if ( voices[i].waveReleasing ) {
      if (mils >= (voices[i].releaseTime + voice::releaseDelay + 5)) {
        voices[i].wavePlaying = false;
        voices[i].waveReleasing = false;
      }
    }
  }
}

void setup() {
  Serial.begin(9600);            
  while (!Serial);
  Serial.println("Entering Setup");  // Chart for line out levels in Vols peak to peak
  AudioMemory(32);                   // 14: 2.98  |  20: 2.14  |  26: 1.53
  sgtl5000_1.enable();               // 15: 2.83  |  21: 2.02  |  27: 1.44
  sgtl5000_1.volume(1);              // 16: 2.67  |  22: 1.91  |  28: 1.37
  sgtl5000_1.lineOutLevel(30);       // 17: 2.53  |  23: 1.80  |  29: 1.29
                                     // 18: 2.39  |  24: 1.71  |  30: 1.22
                                     // 19: 2.26  |  25: 1.62  |  31: 1.16
  // assign the software waveTypes and DC waves to their
  // appropriate voice aryau
  for (int i = 0; i < NUM_OF_VOICES; i++) {
    voices[i].waveA = wavesA[i];
    voices[i].waveA->arbitraryWaveform(wave_table[waveTableIndexA], 2500);
    voices[i].waveB = wavesB[i];
    voices[i].waveB->arbitraryWaveform(wave_table[waveTableIndexB], 2500);
    voices[i].dc = dcs[i];
    voices[i].fm = fms[i];
    // Set ch 1 & 2 of each of the 16 mixers to their defaults
    mix[i]->gain(0, voice::waveAmix);
    mix[i]->gain(1, voice::waveBmix);
    mix[i]->gain(2, voice::fmMix);
    mix[i]->gain(3, 0);
  }

  // set the gain on the premix mixers and main mixer to 25% per channel
  for (int i = 0; i < 4; i++){
    preMix1.gain(i, .25);
    preMix2.gain(i, .25);
    preMix3.gain(i, .25);
    preMix4.gain(i, .25);
    mainMix.gain(i, .25);
  }

  mcpRead.begin(1); // Connected to Orange / White "Rows" - These are read
  mcpWrite.begin(0); // Connected to Purple "Columns" These are put high

  // Set the 16 I/O pins on the MCPs to output and input for MCP1 and 2, respectively
  for (int i = 0; i < 16; i++) {
    mcpWrite.pinMode(i, OUTPUT);
    mcpWrite.digitalWrite(i, LOW);
    mcpRead.pinMode(i, INPUT);
    mcpRead.pullUp(i, HIGH);
  }

  waveFmControl.begin(1, midi2freq(fmMidiNote, 0, voice::octaveShift), waveFM);

  Serial.println("Leaving Setup");
}

void loop() {
  readKeys();
  checkStops();
}
