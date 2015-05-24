/* 
 * File:   main.c
 * Author: Diego
 *
 * Created on 23 maggio 2015, 16.36
 */

#include <stdio.h>
#include <stdlib.h>
#include "funzioni.h"


int main(int argc, char** argv) {
    //Dichiarazione Puntatori
    elemento *primo;  
    //Inserimento lista
    primo = funzioneInput(primo);
    //Lettura della lista
    funzioneOutput(primo);
    return (EXIT_SUCCESS);
}

