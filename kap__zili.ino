#include "pitches.h"
int melodi[]={NOTE_D4,NOTE_D4,NOTE_D4,NOTE_E4,NOTE_F4,NOTE_E4,NOTE_D4,NOTE_C4,NOTE_D4,NOTE_E4,NOTE_B4,NOTE_B4,NOTE_B4,NOTE_C4,NOTE_D4,NOTE_C4,NOTE_B4,NOTE_A4};
int buton=12;
int nota_ritimleri[]= {4,4,4,4,2,4,4,2,4,4,4,4,4,4,4,4,4,1};




void setup() {
 pinMode(buton,INPUT);
 

}

void loop() {
  int buton_durum=digitalRead(buton);
  if(buton_durum==1)
  {
    for(int nota=0;nota<18;nota++)
    {
      int nota_suresi=1000/nota_ritimleri[nota];
      tone(8,melodi[nota],nota_suresi);
      int iki_nota_arasi=nota_suresi*1.5;
      delay(iki_nota_arasi);
      noTone(18);
      
      }
    }
  

}
