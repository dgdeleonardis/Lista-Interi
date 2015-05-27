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
    elemento *temp;
    char scelta[2];
    
    //Inserimento degli elementi della lista
    printf("Vuoi inserire un elemento (s/n) : ");
    scanf("%s", scelta);
    
    while(!(strcmp(scelta, "s"))) {
        temp = (elemento *) malloc(sizeof(elemento));
        controlloAllocazione(temp);
    
        printf("Inserisci un elemento : ");
        scanf("%d", &(temp->valore));
        
        temp->prossimo = primo;
        primo = temp;
        
        printf("Vuoi inserire un elemento (s/n) : ");
        scanf("%s", scelta);
    }   
    return primo;
}

void funzioneOutput(elemento *primo) {
    //Parte Dichiarativa
    elemento *temp;
    //Stampa dei blocchi della lista
    printf("\n");
    temp = primo;
    
    while(!(temp == NULL)) {
        printf("Elemento : %d\n", temp->valore);
        temp = temp->prossimo;
    }
}

void svuotaLista(elemento *primo) {
    //Parte Dichiarativa
    elemento *temp = NULL;
    
    //Deallocazione della lista
    while(primo != NULL) {
        temp = primo->prossimo;
        free(primo);
        primo = temp;
    }
}