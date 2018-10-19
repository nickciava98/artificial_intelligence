/*
 * Title: Intelligenza Artificiale
 * Project: artificial_intelligence
 * Link: github.com/nickciava98/artificial_intelligence
 * File: tensor
 * Author: Niccolò Ciavarella
 * Contact: n.ciavarella@outlook.it
 * Date: 18/10/2018
 * Version: 1.1
 * Licence: GNU LGPL
*/

#define MAXROW 3
#define MAXCOL 5
#define MAXDEP 5

typedef char* ten;

void tensorInit(ten [MAXROW][MAXCOL][MAXDEP]);
void tensorLoad(ten [MAXROW][MAXCOL][MAXDEP], ten [MAXROW][MAXCOL][MAXDEP]);
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

void tensorLoad(ten t1[MAXROW][MAXCOL][MAXDEP], ten t2[MAXROW][MAXCOL][MAXDEP])
{
  //Input: t1 [0][0][0] -> [2][1][4]
  //Saluti (inizio conversazione)
  t1[0][0][0] = "ciao";
  t1[0][0][1] = "buongiorno";
  t1[0][0][2] = "buona giornata";
  t1[0][0][3] = "buon pomeriggio";
  t1[0][0][4] = "buonasera";
  t1[0][1][0] = "buona sera";
  t1[0][1][1] = "buona serata";
  t1[0][1][2] = "ciao,buongiorno";
  t1[0][1][3] = "ciao, buongiorno";
  t1[0][1][4] = "ciao buongiorno";
  t1[0][2][0] = "ciao,buona giornata";
  t1[0][2][1] = "ciao, buona giornata";
  t1[0][2][2] = "ciao buona giornata";
  t1[0][2][3] = "ciao,buon pomeriggio";
  t1[0][2][4] = "ciao, buon pomeriggio";
  t1[0][3][0] = "ciao buon pomeriggio";
  t1[0][3][1] = "ciao,buonasera";
  t1[0][3][2] = "ciao, buonasera";
  t1[0][3][3] = "ciao buonasera";
  t1[0][3][4] = "ciao,buona sera";
  t1[0][4][0] = "ciao, buona sera";
  t1[0][4][1] = "ciao buona sera";
  t1[0][4][2] = "ciao,buona serata";
  t1[0][4][3] = "ciao, buona serata";
  t1[0][4][4] = "ciao buona serata";

  //Saluti (fine conversazione)
  t1[1][0][0] = "ciao ciao";
  t1[1][0][1] = "arrivederci";
  t1[1][0][2] = "ciao,arrivederci";
  t1[1][0][3] = "ciao, arrivederci";
  t1[1][0][4] = "ciao arrivederci";

  //Richieste (personali)
  t1[1][1][0] = "come va?"; 
  t1[1][1][1] = "come va";
  t1[1][1][2] = "come stai?";
  t1[1][1][3] = "come stai";
  t1[1][1][4] = "ciao,come va?";
  t1[1][2][0] = "ciao, come va?";
  t1[1][2][1] = "ciao come va?";
  t1[1][2][2] = "ciao,come va"; 
  t1[1][2][3] = "ciao, come va";
  t1[1][2][4] = "ciao come va";
  t1[1][3][0] = "ciao,come stai?";
  t1[1][3][1] = "ciao, come stai?";
  t1[1][3][2] = "ciao come stai?";
  t1[1][3][3] = "ciao,come stai";
  t1[1][3][4] = "ciao, come stai";
  t1[1][4][0] = "ciao come stai";
  t1[1][4][1] = "che fai?";
  t1[1][4][2] = "che fai";
  t1[1][4][3] = "ciao,che fai?";
  t1[1][4][4] = "ciao, che fai?";
  t1[2][0][0] = "ciao che fai?";
  t1[2][0][1] = "ciao,che fai";
  t1[2][0][2] = "ciao, che fai";
  t1[2][0][3] = "ciao che fai";

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
  t1[2][0][4] = "accendi";
  t1[2][1][0] = "on";
  t1[2][1][1] = "svegliati";
  t1[2][1][2] = "spegni";
  t1[2][1][3] = "off";
  t1[2][1][4] = "addormentati";

  //Extra (vuoto): t1 [2][2][0] -> [2][4][4]
  t1[2][2][0] = "";
  t1[2][2][1] = "";
  t1[2][2][2] = "";
  t1[2][2][3] = "";
  t1[2][2][4] = "";
  t1[2][3][0] = "";
  t1[2][3][1] = "";
  t1[2][3][2] = "";
  t1[2][3][3] = "";
  t1[2][3][4] = "";
  t1[2][4][0] = "";
  t1[2][4][1] = "";
  t1[2][4][2] = "";
  t1[2][4][3] = "";
  t1[2][4][4] = "";

  //Output: t2 [0][0][0] -> [2][1][4]
  //Risposte saluti (inizio conversazione)
  t2[0][0][0] = "ciao";
  t2[0][0][1] = "buongiorno";
  t2[0][0][2] = "anche a te";
  t2[0][0][3] = "anche a te";
  t2[0][0][4] = "buonasera";
  t2[0][1][0] = "buona sera";
  t2[0][1][1] = "anche a te";
  t2[0][1][2] = "ciao";
  t2[0][1][3] = "ciao";
  t2[0][1][4] = "ciao";
  t2[0][2][0] = "ciao,anche a te";
  t2[0][2][1] = "ciao, anche a te";
  t2[0][2][2] = "ciao anche a te";
  t2[0][2][3] = "ciao,anche a te";
  t2[0][2][4] = "ciao, anche a te";
  t2[0][3][0] = "ciao anche a te";
  t2[0][3][1] = "ciao";
  t2[0][3][2] = "ciao";
  t2[0][3][3] = "ciao";
  t2[0][3][4] = "ciao";
  t2[0][4][0] = "ciao";
  t2[0][4][1] = "ciao";
  t2[0][4][2] = "ciao,anche a te";
  t2[0][4][3] = "ciao, anche a te";
  t2[0][4][4] = "ciao anche a te";

  //Risposte saluti (fine conversazione)
  t2[1][0][0] = "ciao ciao";
  t2[1][0][1] = "arrivederci";
  t2[1][0][2] = "ciao";
  t2[1][0][3] = "ciao";
  t2[1][0][4] = "ciao";

  //Risposte richieste (personali)
  t2[1][1][0] = "bene";
  t2[1][1][1] = "tutto ok";
  t2[1][1][2] = "bene";
  t2[1][1][3] = "molto bene";
  t2[1][1][4] = "ciao,bene";
  t2[1][2][0] = "ciao, bene";
  t2[1][2][1] = "ciao bene";
  t2[1][2][2] = "ciao,tutto ok";
  t2[1][2][3] = "ciao, tutto ok";
  t2[1][2][4] = "ciao tutto ok";
  t2[1][3][0] = "ciao,molto bene";
  t2[1][3][1] = "ciao, molto bene";
  t2[1][3][2] = "ciao molto bene";
  t2[1][3][3] = "niente";
  t2[1][3][4] = "nulla";
  t2[1][4][0] = "ciao,niente";
  t2[1][4][1] = "ciao, niente";
  t2[1][4][2] = "ciao niente";
  t2[1][4][3] = "ciao,nulla";
  t2[1][4][4] = "ciao, nulla";
  t2[2][0][0] = "ciao nulla";
  t2[2][0][1] = "ciao,niente";
  t2[2][0][2] = "ciao, niente";
  t2[2][0][3] = "ciao niente";

  //Risposte richieste (tecniche)
  t2[2][0][4] = "eccomi";
  t2[2][1][0] = "sono qui";
  t2[2][1][1] = "sono sveglia";
  t2[2][1][2] = "ciao ciao";
  t2[2][1][3] = "vado via";
  t2[2][1][4] = "a presto";

  //Extra (vuoto): t2 [2][2][0] -> [2][4][4]
  t2[2][2][0] = "";
  t2[2][2][1] = "";
  t2[2][2][2] = "";
  t2[2][2][3] = "";
  t2[2][2][4] = "";
  t2[2][3][0] = "";
  t2[2][3][1] = "";
  t2[2][3][2] = "";
  t2[2][3][3] = "";
  t2[2][3][4] = "";
  t2[2][4][0] = "";
  t2[2][4][1] = "";
  t2[2][4][2] = "";
  t2[2][4][3] = "";
  t2[2][4][4] = "";
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
