/*
 * Title: Intelligenza Artificiale
 * Project: artificial_intelligence
 * Link: github.com/nickciava98/artificial_intelligence
 * File: ai.ino
 * Author: Niccolò Ciavarella
 * Contact: n.ciavarella@outlook.it
 * Date: 18/10/2018
 * Version: 2.0
 * Licence: GNU LGPL
*/

#include "tensor.h"

ten t1[MAXROW][MAXCOL][MAXDEP];
ten t2[MAXROW][MAXCOL][MAXDEP];
char* lan = "it"; //Imposto la lingua in italiano
//char* lan = "en"; //Imposto la lingua in inglese

void setup() 
{
  Serial.begin(9600);
  while(!Serial);
  
  char* init = ""; //Messaggio di inizializzazione
  char* c_init = ""; //Messaggio di corretta inizializzazione
  char* load = ""; //Messaggio di caricamento
  char* c_load = ""; //Messaggio di corretto caricamento
  
  if(lan == "it")
  {
    init = "Inizializzazione dei tensori . . .";
    c_init = "Tensori inizializzati correttamente";
    load = "Caricamento dei tensori . . .";
    c_load = "Tensori caricati correttamente";
  }

  else if(lan == "en")
  {
    init = "Initialization of tensors . . .";
    c_init = "Tensors initialized correctly";
    load = "Loading tensors . . .";
    c_load = "Tensors loaded correctly";
  }

  Serial.println(init);
  
  tensorInit(t1);
  tensorInit(t2);

  Serial.println("");
  Serial.println(c_init);
  Serial.println("");

  Serial.println("");
  Serial.println(load);
  Serial.println("");

  tensorLoad(t1, t2, lan);

  Serial.println("");
  Serial.println(c_load);
  Serial.println("");
}

void loop() 
{
  String x = Serial.readString();
  String y = tensorFind(t1, t2, x);

  if(y != "")
  {
    Serial.println(y);
  }
}
