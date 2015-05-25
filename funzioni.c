#include <stdio.h>
#include <stdlib.h>
#include "funzioni.h"

void controlloAllocazione(elemento *p) {
    if(p == NULL) {
        printf("ERRORE : Impossibile allocare memoria\n");
        exit(1);
    }
}

elemento *funzioneInput(elemento *primo) {
    //Parte dichiarativa
    elemento *temp;

    //Inserimento primo elemento della lista
    primo = (elemento *) malloc(sizeof(elemento));
    controlloAllocazione(primo);
    
    printf("Inserisci un elemento (0 per terminare) : ");
    scanf("%d", &((*primo).valore));
    
    //Inserimento degli altri elementi della lista
    temp = (elemento *) malloc(sizeof(elemento));
    controlloAllocazione(temp);
    
    printf("Inserisci un elemento (0 per terminare) : ");
    scanf("%d", &((*temp).valore));

    while((*temp).valore) {
        (*temp).prossimo = primo;
        primo = temp;

        temp = (elemento *) malloc(sizeof(elemento));
        controlloAllocazione(temp);
        
        printf("Inserisci un elemento (0 per terminare) : ");
        scanf("%d", &((*temp).valore));
    }   
    return primo;
}

void funzioneOutput(elemento *primo) {
    //Parte Dichiarativa
    elemento *temp, *prossimo;
    //Stampa dei blocchi della lista
    printf("LETTURA LISTA\n");
    temp = primo;
    
    while(!(temp == NULL)) {
        printf("Elemento : %d\n", (*temp).valore);
        
        prossimo = (*temp).prossimo;
        free(temp); //Deallocazione della lista
        temp = prossimo;
    }
}