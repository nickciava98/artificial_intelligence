/*
 * Title: Intelligenza Artificiale
 * Project: artificial_intelligence
 * Link: github.com/nickciava98/artificial_intelligence
 * File: tensor.h
 * Author: Niccolò Ciavarella
 * Contact: n.ciavarella@outlook.it
 * Date: 18/10/2018
 * Version: 2.0
 * Licence: GNU LGPL
*/

#define MAXROW 3
#define MAXCOL 5
#define MAXDEP 5

typedef char* ten;

void tensorInit(ten [MAXROW][MAXCOL][MAXDEP]);
void tensorLoad(ten [MAXROW][MAXCOL][MAXDEP], ten [MAXROW][MAXCOL][MAXDEP], char*);
String tensorFind(ten [MAXROW][MAXCOL][MAXDEP], ten [MAXROW][MAXCOL][MAXDEP], String);

void tensorInit(ten t[MAXROW][MAXCOL][MAXDEP])
{
  //Inizializzazione di ogni cella del tensore con il valore NULL
  for(int i = 0; i <= 2; i++)
  {
    for(int j = 0; j <= 4; j++)
    {
      for(int k = 0; k <= 4; k++)
      {
        t[i][j][k] = "";
      }
    }
  }
}

void tensorLoad(ten t1[MAXROW][MAXCOL][MAXDEP], ten t2[MAXROW][MAXCOL][MAXDEP], char* lan)
{
  //Input: t1 [0][0][0] -> [2][1][4]
  //Saluti (inizio conversazione)
  t1[0][0][0] = (lan == "it" ? "ciao" : (lan == "en" ? "hello" : ""));
  t1[0][0][1] = (lan == "it" ? "buongiorno" : (lan == "en" ? "good morning" : ""));
  t1[0][0][2] = (lan == "it" ? "buona giornata" : (lan == "en" ? "good day" : ""));
  t1[0][0][3] = (lan == "it" ? "buon pomeriggio" : (lan == "en" ? "good afternoon" : ""));
  t1[0][0][4] = (lan == "it" ? "buonasera" : (lan == "en" ? "good evening" : ""));
  t1[0][1][0] = (lan == "it" ? "buona sera" : (lan == "en" ? "good evening" : ""));
  t1[0][1][1] = (lan == "it" ? "buona serata" : (lan == "en" ? "good evening" : ""));
  t1[0][1][2] = (lan == "it" ? "ciao,buongiorno" : (lan == "en" ? "hello,good morning" : ""));
  t1[0][1][3] = (lan == "it" ? "ciao, buongiorno" : (lan == "en" ? "hello, good morning" : ""));
  t1[0][1][4] = (lan == "it" ? "ciao buongiorno" : (lan == "en" ? "hello good morning": ""));
  t1[0][2][0] = (lan == "it" ? "ciao,buona giornata": (lan == "en" ? "hello,good day" : ""));
  t1[0][2][1] = (lan == "it" ? "ciao, buona giornata" : (lan == "en" ? "hello, good day" : ""));
  t1[0][2][2] = (lan == "it" ? "ciao buona giornata" : (lan == "en" ? "hello good day" : ""));
  t1[0][2][3] = (lan == "it" ? "ciao,buon pomeriggio" : (lan == "en" ? "hello,good afternoon" : ""));
  t1[0][2][4] = (lan == "it" ? "ciao, buon pomeriggio" : (lan == "en" ? "hello, good afternoon" : ""));
  t1[0][3][0] = (lan == "it" ? "ciao buon pomeriggio" : (lan == "en" ? "hello good afternoon" : ""));
  t1[0][3][1] = (lan == "it" ? "ciao,buonasera" : (lan == "en" ? "hello,good evening" : ""));
  t1[0][3][2] = (lan == "it" ? "ciao, buonasera" : (lan == "en" ? "hello, good evening" : ""));
  t1[0][3][3] = (lan == "it" ? "ciao buonasera" : (lan == "en" ? "hello good evening" : ""));
  t1[0][3][4] = (lan == "it" ? "ciao,buona sera" : (lan == "en" ? "hello,good evening" : ""));
  t1[0][4][0] = (lan == "it" ? "ciao, buona sera" : (lan == "en" ? "hello, good evening" : ""));
  t1[0][4][1] = (lan == "it" ? "ciao buona sera" : (lan == "en" ? "hello good evening" : ""));
  t1[0][4][2] = (lan == "it" ? "ciao,buona serata" : (lan == "en" ? "hello,good evening" : ""));
  t1[0][4][3] = (lan == "it" ? "ciao, buona serata" : (lan == "en" ? "hello, good evening" : ""));
  t1[0][4][4] = (lan == "it" ? "ciao buona serata" : (lan == "en" ? "hello good evening" : ""));

  //Saluti (fine conversazione)
  t1[1][0][0] = (lan == "it" ? "ciao ciao" : (lan == "en" ? "bye bye" : ""));
  t1[1][0][1] = (lan == "it" ? "arrivederci" : (lan == "en" ? "goodbye" : ""));
  t1[1][0][2] = (lan == "it" ? "ciao,arrivederci" : (lan == "en" ? "goodbye" : ""));
  t1[1][0][3] = (lan == "it" ? "ciao, arrivederci" : (lan == "en" ? "goodbye" : ""));
  t1[1][0][4] = (lan == "it" ? "ciao arrivederci" : (lan == "en" ? "goodbye" : ""));

  //Richieste (personali)
  t1[1][1][0] = (lan == "it" ? "come va?" : (lan == "en" ? "how are you?" : "")); 
  t1[1][1][1] = (lan == "it" ? "come va" : (lan == "en" ? "how are you" : ""));
  t1[1][1][2] = (lan == "it" ? "come stai?" : (lan == "en" ? "how are you?" : ""));
  t1[1][1][3] = (lan == "it" ? "come stai" : (lan == "en" ? "how are you" : ""));
  t1[1][1][4] = (lan == "it" ? "ciao,come va?" : (lan == "en" ? "hi,how are you?" : ""));
  t1[1][2][0] = (lan == "it" ? "ciao, come va?" : (lan == "en" ? "hi, how are you?" : ""));
  t1[1][2][1] = (lan == "it" ? "ciao come va?" : (lan == "en" ? "hi how are you?" : ""));
  t1[1][2][2] = (lan == "it" ? "ciao,come va" : (lan == "en" ? "hi,how are you" : "")); 
  t1[1][2][3] = (lan == "it" ? "ciao, come va" : (lan == "en" ? "hi, how are you" : ""));
  t1[1][2][4] = (lan == "it" ? "ciao come va" : (lan == "en" ? "hi how are you" : ""));
  t1[1][3][0] = (lan == "it" ? "ciao,come stai?" : (lan == "en" ? "hi,how are you?" : ""));
  t1[1][3][1] = (lan == "it" ? "ciao, come stai?" : (lan == "en" ? "hi, how are you?" : ""));
  t1[1][3][2] = (lan == "it" ? "ciao come stai?" : (lan == "en" ? "hi how are you?" : ""));
  t1[1][3][3] = (lan == "it" ? "ciao,come stai" : (lan == "en" ? "hi,how are you" : ""));
  t1[1][3][4] = (lan == "it" ? "ciao, come stai" : (lan == "en" ? "hi, how are you" : ""));
  t1[1][4][0] = (lan == "it" ? "ciao come stai" : (lan == "en" ? "hi how are you" : ""));
  t1[1][4][1] = (lan == "it" ? "che fai?" : (lan == "en" ? "what are you doing?" : ""));
  t1[1][4][2] = (lan == "it" ? "che fai" : (lan == "en" ? "what are you doing" : ""));
  t1[1][4][3] = (lan == "it" ? "ciao,che fai?" : (lan == "en" ? "hi,what are you doing?" : ""));
  t1[1][4][4] = (lan == "it" ? "ciao, che fai?" : (lan == "en" ? "hi, what are you doing?" : ""));
  t1[2][0][0] = (lan == "it" ? "ciao che fai?" : (lan == "en" ? "hi what are you doing?" : ""));
  t1[2][0][1] = (lan == "it" ? "ciao,che fai" : (lan == "en" ? "hi,what are you doing" : ""));
  t1[2][0][2] = (lan == "it" ? "ciao, che fai" : (lan == "en" ? "hi, what are you doing" : ""));
  t1[2][0][3] = (lan == "it" ? "ciao che fai" : (lan == "en" ? "hi what are you doing" : ""));

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
  t1[2][0][4] = (lan == "it" ? "accendi" : (lan == "en" ? "switch on" : ""));
  t1[2][1][0] = (lan == "it" ? "on" : (lan == "en" ? "on" : ""));
  t1[2][1][1] = (lan == "it" ? "svegliati" : (lan == "en" ? "wake up" : ""));
  t1[2][1][2] = (lan == "it" ? "spegni" : (lan == "en" ? "switch off" : ""));
  t1[2][1][3] = (lan == "it" ? "off" : (lan == "en" ? "off" : ""));
  t1[2][1][4] = (lan == "it" ? "addormentati" : (lan == "en" ? "sleep" : ""));

  //Extra (vuoto): t1 [2][2][0] -> [2][4][4]
  t1[2][2][0] = (lan == "it" ? "come ti chiami?" : (lan == "en" ? "what is your name?" : ""));
  t1[2][2][1] = (lan == "it" ? "come ti chiami" : (lan == "en" ? "what is your name" : ""));
  t1[2][2][2] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t1[2][2][3] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t1[2][2][4] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t1[2][3][0] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t1[2][3][1] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t1[2][3][2] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t1[2][3][3] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t1[2][3][4] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t1[2][4][0] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t1[2][4][1] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t1[2][4][2] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t1[2][4][3] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t1[2][4][4] = (lan == "it" ? "" : (lan == "en" ? "" : ""));

  //Output: t2 [0][0][0] -> [2][1][4]
  //Risposte saluti (inizio conversazione)
  t2[0][0][0] = (lan == "it" ? "ciao" : (lan == "en" ? "hello" : ""));
  t2[0][0][1] = (lan == "it" ? "buongiorno" : (lan == "en" ? "good morning" : ""));
  t2[0][0][2] = (lan == "it" ? "anche a te" : (lan == "en" ? "you too" : ""));
  t2[0][0][3] = (lan == "it" ? "anche a te" : (lan == "en" ? "you too" : ""));
  t2[0][0][4] = (lan == "it" ? "buonasera" : (lan == "en" ? "good evening" : ""));
  t2[0][1][0] = (lan == "it" ? "buona sera" : (lan == "en" ? "good evening" : ""));
  t2[0][1][1] = (lan == "it" ? "anche a te" : (lan == "en" ? "you too" : ""));
  t2[0][1][2] = (lan == "it" ? "ciao" : (lan == "en" ? "hi" : ""));
  t2[0][1][3] = (lan == "it" ? "ciao" : (lan == "en" ? "hi" : ""));
  t2[0][1][4] = (lan == "it" ? "ciao" : (lan == "en" ? "hi" : ""));
  t2[0][2][0] = (lan == "it" ? "ciao,anche a te" : (lan == "en" ? "hi,you too" : ""));
  t2[0][2][1] = (lan == "it" ? "ciao, anche a te" : (lan == "en" ? "hi, you too" : ""));
  t2[0][2][2] = (lan == "it" ? "ciao anche a te" : (lan == "en" ? "hi you too" : ""));
  t2[0][2][3] = (lan == "it" ? "ciao,anche a te" : (lan == "en" ? "hi,you too" : ""));
  t2[0][2][4] = (lan == "it" ? "ciao, anche a te" : (lan == "en" ? "hi, you too" : ""));
  t2[0][3][0] = (lan == "it" ? "ciao anche a te" : (lan == "en" ? "hi you too" : ""));
  t2[0][3][1] = (lan == "it" ? "ciao" : (lan == "en" ? "hi" : ""));
  t2[0][3][2] = (lan == "it" ? "ciao" : (lan == "en" ? "hi" : ""));
  t2[0][3][3] = (lan == "it" ? "ciao" : (lan == "en" ? "hi" : ""));
  t2[0][3][4] = (lan == "it" ? "ciao" : (lan == "en" ? "hi" : ""));
  t2[0][4][0] = (lan == "it" ? "ciao" : (lan == "en" ? "hi" : ""));
  t2[0][4][1] = (lan == "it" ? "ciao" : (lan == "en" ? "hi" : ""));
  t2[0][4][2] = (lan == "it" ? "ciao,anche a te" : (lan == "en" ? "hi,you too" : ""));
  t2[0][4][3] = (lan == "it" ? "ciao, anche a te" : (lan == "en" ? "hi, you too" : ""));
  t2[0][4][4] = (lan == "it" ? "ciao anche a te" : (lan == "en" ? "hi you too" : ""));

  //Risposte saluti (fine conversazione)
  t2[1][0][0] = (lan == "it" ? "ciao ciao" : (lan == "en" ? "bye bye" : ""));
  t2[1][0][1] = (lan == "it" ? "arrivederci" : (lan == "en" ? "goodbye" : ""));
  t2[1][0][2] = (lan == "it" ? "ciao" : (lan == "en" ? "goodbye" : ""));
  t2[1][0][3] = (lan == "it" ? "ciao" : (lan == "en" ? "goodbye" : ""));
  t2[1][0][4] = (lan == "it" ? "ciao" : (lan == "en" ? "goodbye" : ""));

  //Risposte richieste (personali)
  t2[1][1][0] = (lan == "it" ? "bene" : (lan == "en" ? "fine" : ""));
  t2[1][1][1] = (lan == "it" ? "tutto ok" : (lan == "en" ? "all okay" : ""));
  t2[1][1][2] = (lan == "it" ? "bene" : (lan == "en" ? "fine" : ""));
  t2[1][1][3] = (lan == "it" ? "molto bene" : (lan == "en" ? "really fine" : ""));
  t2[1][1][4] = (lan == "it" ? "ciao,bene": (lan == "en" ? "hi,fine" : ""));
  t2[1][2][0] = (lan == "it" ? "ciao, bene" : (lan == "en" ? "hi, fine" : ""));
  t2[1][2][1] = (lan == "it" ? "ciao bene" : (lan == "en" ? "hi fine" : ""));
  t2[1][2][2] = (lan == "it" ? "ciao,tutto ok" : (lan == "en" ? "hi,all okay" : ""));
  t2[1][2][3] = (lan == "it" ? "ciao, tutto ok" : (lan == "en" ? "hi, all okay" : ""));
  t2[1][2][4] = (lan == "it" ? "ciao tutto ok" : (lan == "en" ? "hi all okay" : ""));
  t2[1][3][0] = (lan == "it" ? "ciao,molto bene" : (lan == "en" ? "hi,really fine" : ""));
  t2[1][3][1] = (lan == "it" ? "ciao, molto bene" : (lan == "en" ? "hi, really fine" : ""));
  t2[1][3][2] = (lan == "it" ? "ciao molto bene" : (lan == "en" ? "hi really fine" : ""));
  t2[1][3][3] = (lan == "it" ? "ciao,bene" : (lan == "en" ? "hi,fine" : ""));
  t2[1][3][4] = (lan == "it" ? "ciao, bene" : (lan == "en" ? "hi, fine" : ""));
  t2[1][4][0] = (lan == "it" ? "ciao bene" : (lan == "en" ? "hi fine" : ""));  
  t2[1][4][1] = (lan == "it" ? "niente" : (lan == "en" ? "nothing" : ""));
  t2[1][4][2] = (lan == "it" ? "nulla" : (lan == "en" ? "nothing" : ""));
  t2[1][4][3] = (lan == "it" ? "ciao,niente" : (lan == "en" ? "hi,nothing" : ""));
  t2[1][4][4] = (lan == "it" ? "ciao, niente" : (lan == "en" ? "hi, nothing" : ""));
  t2[2][0][0] = (lan == "it" ? "ciao niente" : (lan == "en" ? "hi nothing" : ""));
  t2[2][0][1] = (lan == "it" ? "ciao,nulla" : (lan == "en" ? "hi,nothing" : ""));
  t2[2][0][2] = (lan == "it" ? "ciao, nulla" : (lan == "en" ? "hi, nothing" : ""));
  t2[2][0][3] = (lan == "it" ? "ciao nulla" : (lan == "en" ? "hi nothing" : ""));
  
  //Risposte richieste (tecniche)
  t2[2][0][4] = (lan == "it" ? "eccomi" : (lan == "en" ? "I am here" : ""));
  t2[2][1][0] = (lan == "it" ? "sono qui" : (lan == "en" ? "I am here" : ""));
  t2[2][1][1] = (lan == "it" ? "sono sveglia" : (lan == "en" ? "I am up" : ""));
  t2[2][1][2] = (lan == "it" ? "ciao ciao" : (lan == "en" ? "bye bye" : ""));
  t2[2][1][3] = (lan == "it" ? "vado via" : (lan == "en" ? "I leave" : ""));
  t2[2][1][4] = (lan == "it" ? "a presto" : (lan == "en" ? "see you soon" : ""));

  //Extra (vuoto): t2 [2][2][0] -> [2][4][4]
  t2[2][2][0] = (lan == "it" ? "sono sara" : (lan == "en" ? "I am sara" : ""));
  t2[2][2][1] = (lan == "it" ? "mi chiamo sara" : (lan == "en" ? "my name is sara" : ""));
  t2[2][2][2] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t2[2][2][3] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t2[2][2][4] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t2[2][3][0] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t2[2][3][1] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t2[2][3][2] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t2[2][3][3] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t2[2][3][4] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t2[2][4][0] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t2[2][4][1] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t2[2][4][2] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t2[2][4][3] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
  t2[2][4][4] = (lan == "it" ? "" : (lan == "en" ? "" : ""));
}

String tensorFind(ten t1[MAXROW][MAXCOL][MAXDEP], ten t2[MAXROW][MAXCOL][MAXDEP], String x)
{
  //Ricerca se l'elemento è presente nel tensore t1, se prensente memorizza il valore di t2 corrispondente
  
  int flag = 1; //Flag di uscita condizionata dai cicli se l'elemento viene trovato
  String cmd = x.substring(0); //Comando ricevuto da input
  String ele = ""; //Elemento corrispondente al comando
  String ris = ""; //Elemento di t2 corrispondente all'elemento di t1

  for(int i = 0; (i <= 2 && flag); i++)
  {
    for(int j = 0; (j <= 4 && flag); j++)
    {
      for(int k = 0; (k <= 4 && flag); k++)
      {
        ele = t1[i][j][k];
        ele += "\n";
        
        if(cmd == ele)
        {
          ris = t2[i][j][k];

          flag = 0;
        }
      }
    }
  }

  return ris;
}
