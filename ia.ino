/*
 * Title: Intelligenza Artificiale
 * Project: artificial_intelligence
 * Link: github.com/nickciava98/artificial_intelligence
 * File: ai.ino
 * Author: Niccolò Ciavarella
 * Contact: n.ciavarella@outlook.it
 * Date: 18/10/2018
 * Version: 1.1
 * Licence: GNU LGPL
*/

#include "tensor.h"

ten t1[MAXROW][MAXCOL][MAXDEP];
ten t2[MAXROW][MAXCOL][MAXDEP];

void setup() 
{
  Serial.begin(9600);

  Serial.println("Inizializzazione dei tensori . . .");
  
  tensorInit(t1);
  tensorInit(t2);

  Serial.println("");
  Serial.println("Tensori inizializzato correttamente");
  Serial.println("");

  Serial.println("");
  Serial.println("Caricamento dei tensori . . .");
  Serial.println("");

  tensorLoad(t1, t2);

  Serial.println("");
  Serial.println("Tensori caricati correttamente");
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
