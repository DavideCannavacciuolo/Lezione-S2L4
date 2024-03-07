#include <stdio.h>

void menuiniziale;


int partita {

    printf ("BENVENUTO UTENTE!!! PRONTO PER QUESTO SPLENDIDO QUIZ!?\n");
    printf ("Ti farò alcune domande di cultura generale. Non aver paura...il punteggio non farà media.\n");
    printf ("Inserisci la tua scelta:A) Inizia il gioco.\n B) Esci dal gioco.");


    printf ("In che anno è stata scoperta l'America?\n");
     printf ("1) 12 Ottobre 1492\n");
     printf ("2) 9 Luglio 2006\n");
     printf ("3) 25 Maggio 2024\n");
     char risposta1;
    scanf ("%c\n", &risposta1 );
    
if (risposta1 = 1) {
    punteggio++;
    printf ("Corretto!\n");
    }
else { 
    printf ("Sbagliato. Concentrati!\n");
}

    printf ("In che anno è stato ucciso J.F. Kennedy?\n");
     printf ("1) 1963\n");
     printf ("2) 1863\n");
     printf ("3) 1962\n");
     char risposta2;
    scanf ("%c\n", &risposta2 );

if ( risposta2 = 1 ) {
    punteggio++;
    printf ("Corretto!\n");
    }
else {
    printf ("Sbagliato. Concentrati!\n");
}

    printf ("Di che anno è la Costituzione Italiana?\n");
     printf ("1) 1948\n");
     printf ("2) 1498\n");
     printf ("3) 1894\n");
     char risposta3;
    scanf ("%c\n", &risposta3 );

if ( risposta2 = 1 ) {
    punteggio++;
    printf ("Corretto!\n");
    }
else {
    printf ("Sbagliato. Concentrati!\n");
    }
    
    printf ("IL TUO PUNTEGGIO FINALE: %d\n", &punteggio);

return 0;

}

int main {
    int risposta1,risposta2,risposta3;
    int punteggio = 0;
}



