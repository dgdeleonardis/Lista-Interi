#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funzioni.h"

void controlloAllocazione(elemento *p) {
    if(p == NULL) {
        printf("ERRORE : Impossibile allocare memoria\n");
        exit(1);
    }
}

elemento *funzioneInput(elemento *primo) {
    //Parte dichiarativa
    elemento *temp, *scorritore;
    char scelta[2];
    
    //Inserimento degli elementi della lista
    printf("Vuoi inserire un elemento (s/n) : ");
    scanf("%s", scelta);
    scorritore = primo;
    while(!(strcmp(scelta, "s"))) {
        temp = (elemento *) malloc(sizeof(elemento));
        controlloAllocazione(temp);
    
        printf("Inserisci un elemento : ");
        scanf("%d", &((*temp).valore));
        
        (*scorritore).prossimo = temp;
        scorritore = temp;
        
        printf("Vuoi inserire un elemento (s/n) : ");
        scanf("%s", scelta);
    }   
    return primo;
}

void funzioneOutput(elemento *primo) {
    //Parte Dichiarativa
    elemento *temp, *prossimo;
    
    //Stampa dei blocchi della lista
    printf("\n");
    temp = primo;
    
    while(!(temp == NULL)) {
        printf("Elemento : %d\n", (*temp).valore);
        
        prossimo = (*temp).prossimo;
        free(temp); //Deallocazione della lista
        temp = prossimo;
    }
}