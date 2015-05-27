/* 
 * File:   main.c
 * Author: Diego
 *
 * Created on 23 maggio 2015, 16.36
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funzioni.h"


int main(int argc, char** argv) {
    //Dichiarazione Puntatori
    elemento *primo = NULL;
    char scelta[2];
   
    //Inserimento primo elemento della lista
    printf("Vuoi inserire un elemento (s/n) : ");
    scanf("%s", scelta);
    if(!(strcmp(scelta, "s"))) {
        primo = (elemento *) malloc(sizeof(elemento));
        controlloAllocazione(primo);
        
        printf("Inserisci un elemento : ");
        scanf("%d", &(primo->valore));
        
        //Inserimento lista
        primo = funzioneInput(primo);
    }
    
    //Lettura della lista
    funzioneOutput(primo);
    
    //Deallocazione della lista
    svuotaLista(primo);
    
    return (EXIT_SUCCESS);
}

