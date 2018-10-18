/*
 * Title: Artificial intelligence
 * File: ai.ino
 * Author: Niccolò Ciavarella
 * Date: 18/10/2018
 * Licence: GNU LGPL
*/

#define RMAX 5
#define CMAX RMAX
#define PMAX CMAX

typedef char* ten;

ten t[RMAX][CMAX][PMAX];

void setup() 
{
  Serial.begin(9600);

  Serial.println("Inizializzazione del tensore . . .");
  
  //Input: [0][0][0] -> [2][3][4]
  //Saluti (inizio conversazione)
  t[0][0][0] = "ciao";
  t[0][0][1] = "buongiorno";
  t[0][0][2] = "buona giornata";
  t[0][0][3] = "buon pomeriggio";
  t[0][0][4] = "buonasera";
  t[0][1][0] = "buona sera";
  t[0][1][1] = "buona serata";
  t[0][1][2] = "ciao,buongiorno";
  t[0][1][3] = "ciao, buongiorno";
  t[0][1][4] = "ciao buongiorno";
  t[0][2][0] = "ciao,buona giornata";
  t[0][2][1] = "ciao, buona giornata";
  t[0][2][2] = "ciao buona giornata";
  t[0][2][3] = "ciao,buon pomeriggio";
  t[0][2][4] = "ciao, buon pomeriggio";
  t[0][3][0] = "ciao buon pomeriggio";
  t[0][3][1] = "ciao,buonasera";
  t[0][3][2] = "ciao, buonasera";
  t[0][3][3] = "ciao buonasera";
  t[0][3][4] = "ciao,buona sera";
  t[0][4][0] = "ciao, buona sera";
  t[0][4][1] = "ciao buona sera";
  t[0][4][2] = "ciao,buona serata";
  t[0][4][3] = "ciao, buona serata";
  t[0][4][4] = "ciao buona serata";

  //Saluti (fine conversazione)
  t[1][0][0] = "ciao ciao";
  t[1][0][1] = "arrivederci";
  t[1][0][2] = "ciao,arrivederci";
  t[1][0][3] = "ciao, arrivederci";
  t[1][0][4] = "ciao arrivederci";

  //Richieste (personali)
  t[1][1][0] = "come va?"; 
  t[1][1][1] = "come va";
  t[1][1][2] = "come stai?";
  t[1][1][3] = "come stai";
  t[1][1][4] = "ciao,come va?";
  t[1][2][0] = "ciao, come va?";
  t[1][2][1] = "ciao come va?";
  t[1][2][2] = "ciao,come va"; 
  t[1][2][3] = "ciao, come va";
  t[1][2][4] = "ciao come va";
  t[1][3][0] = "ciao,come stai?";
  t[1][3][1] = "ciao, come stai?";
  t[1][3][2] = "ciao come stai?";
  t[1][3][3] = "ciao,come stai";
  t[1][3][4] = "ciao, come stai";
  t[1][4][0] = "ciao come stai";
  t[1][4][1] = "che fai?";
  t[1][4][2] = "che fai";
  t[1][4][3] = "ciao,che fai?";
  t[1][4][4] = "ciao, che fai?";
  t[2][0][0] = "ciao che fai?";
  t[2][0][1] = "ciao,che fai";
  t[2][0][2] = "ciao, che fai";
  t[2][0][3] = "ciao che fai";

  /*
  //Richieste (generiche)
  t[2][0][4] = "ora";
  t[2][1][0] = "che ore sono?";
  t[2][1][1] = "ora?";
  t[2][1][2] = "che ore sono";
  t[2][1][3] = "orario";
  t[2][1][4] = "orario?";
  t[2][2][0] = "data";
  t[2][2][1] = "che giorno e oggi?";
  t[2][2][2] = "data?";
  t[2][2][3] = "che giorno e oggi";*/

  //Richieste (tecniche)
  t[2][0][4] = "accendi";
  t[2][1][0] = "on";
  t[2][1][1] = "svegliati";
  t[2][1][2] = "spegni";
  t[2][1][3] = "off";
  t[2][1][4] = "addormentati";

  //Output: [2][2][0] -> [4][3][1]
  //Risposte saluti (inizio conversazione)
  t[2][2][0] = "ciao";
  t[2][2][1] = "buongiorno";
  t[2][2][2] = "anche a te";
  t[2][2][3] = "anche a te";
  t[2][2][4] = "buonasera";
  t[2][3][0] = "buona sera";
  t[2][3][1] = "anche a te";
  t[2][3][2] = "ciao";
  t[2][3][3] = "ciao";
  t[2][3][4] = "ciao";
  t[2][4][0] = "ciao,anche a te";
  t[2][4][1] = "ciao, anche a te";
  t[2][4][2] = "ciao anche a te";
  t[2][4][3] = "ciao,anche a te";
  t[2][4][4] = "ciao, anche a te";
  t[3][0][0] = "ciao anche a te";
  t[3][0][1] = "ciao";
  t[3][0][2] = "ciao";
  t[3][0][3] = "ciao";
  t[3][0][4] = "ciao";
  t[3][1][0] = "ciao";
  t[3][1][1] = "ciao";
  t[3][1][2] = "ciao,anche a te";
  t[3][1][3] = "ciao, anche a te";
  t[3][1][4] = "ciao anche a te";

  //Risposte saluti (fine conversazione)
  t[3][2][0] = "ciao ciao";
  t[3][2][1] = "arrivederci";
  t[3][2][2] = "ciao";
  t[3][2][3] = "ciao";
  t[3][2][4] = "ciao";

  //Risposte richieste (personali)
  t[3][3][0] = "bene";
  t[3][3][1] = "tutto ok";
  t[3][3][2] = "bene";
  t[3][3][3] = "molto bene";
  t[3][3][4] = "ciao,bene";
  t[3][4][0] = "ciao, bene";
  t[3][4][1] = "ciao bene";
  t[3][4][2] = "ciao,tutto ok";
  t[3][4][3] = "ciao, tutto ok";
  t[3][4][4] = "ciao tutto ok";
  t[4][0][0] = "ciao,molto bene";
  t[4][0][1] = "ciao, molto bene";
  t[4][0][2] = "ciao molto bene";
  t[4][0][3] = "niente";
  t[4][0][4] = "nulla";
  t[4][1][0] = "ciao,niente";
  t[4][1][1] = "ciao, niente";
  t[4][1][2] = "ciao niente";
  t[4][1][3] = "ciao,nulla";
  t[4][1][4] = "ciao, nulla";
  t[4][2][0] = "ciao nulla";

  //Risposte richieste (tecniche)
  t[4][2][1] = "eccomi";
  t[4][2][2] = "sono qui";
  t[4][2][3] = "sono sveglia";
  t[4][2][4] = "ciao ciao";
  t[4][3][0] = "vado via";
  t[4][3][1] = "a presto";

  //Extra (vuoto): [4][3][2] -> [4][4][4]
  t[4][3][2] = "";
  t[4][3][3] = "";
  t[4][3][4] = "";
  t[4][4][0] = "";
  t[4][4][1] = "";
  t[4][4][2] = "";
  t[4][4][3] = "";
  t[4][4][4] = "";

  Serial.println("");
  Serial.println("Tensore inizializzato correttamente");
  Serial.println("");
}

void loop() 
{
  String x = Serial.readString();

  //Serial.println(x);

  for(int i = 0; i <= 4; i++)
  {
    for(int j = 0; j <= 4; j++)
    {
      for(int k = 0; k <= 4; k++)
      {
        int i0, j0, k0;
        
        if((i == 2) && (j == 1) && (k == 4))
        {
          String s = t[i][j][k];
  
          //Serial.println(s);
                  
          if(x.substring(0) == s + "\n")
          {
            switch(i)
            {
              case 0: 
                i0 = 2;
                break;
                
              case 1: 
                i0 = 3;
                break;
              
              case 2: 
                i0 = 4;
                break;

              case 3:
                i0 = 0;
                break;

              case 4:
                i0 = 1;
                break;

              default:
                break;
            }
  
            switch(j)
            {
              case 0: 
                j0 = 2;
                break;

              case 1: 
                j0 = 3;
                break;
                
              case 2: 
                j0 = 4;
                break;
                
              case 3:
                j0 = 0;
                break;

              case 4:
                j0 = 1;
                break;

              default:
                break;
            }

            switch(k)
            {
              case 0: 
                k0 = 0;
                break;

              case 1: 
                k0 = 1;
                break;
              
              case 2: 
                k0 = 2;
                break;
              
              case 3: 
                k0 = 3;
                break;
              
              case 4:
                k0 = 4;
                break;

              default:
                break;
            }
                      
            ten ris = t[i0][j0][k0];
  
            Serial.println(ris);
          }

          goto e;
        }

        String s = t[i][j][k];
  
        //Serial.println(s);
                  
        if(x.substring(0) == s + "\n")
        {
          switch(i)
          {
            case 0: 
              i0 = 2;
              break;
                
            case 1: 
              i0 = 3;
              break;
              
            case 2: 
              i0 = 4;
              break;

            case 3:
              i0 = 0;
              break;

            case 4:
              i0 = 1;
              break;

            default:
              break;
          }
  
          switch(j)
          {
            case 0: 
              j0 = 2;
              break;

            case 1: 
              j0 = 3;
              break;
                
            case 2: 
              j0 = 4;
              break;
                
            case 3:
              j0 = 0;
              break;

            case 4:
              j0 = 1;
              break;

            default:
              break;
          }

          switch(k)
          {
            case 0: 
              k0 = 0;
              break;

            case 1: 
              k0 = 1;
              break;
              
            case 2: 
              k0 = 2;
              break;
              
            case 3: 
              k0 = 3;
              break;
              
            case 4:
              k0 = 4;
              break;

            default:
              break;
          }
                      
          ten ris = t[i0][j0][k0];
  
          Serial.println(ris);
        }

        /*else
        {
          Serial.println("");
          Serial.println("ERRORE! Comando non riconosciuto!");
          Serial.println("");
        }*/
      }
    }
  }

  e:
    delay(1);
}
