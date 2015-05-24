//Definizione RECORD
struct s_elemento {
    int valore;
    struct s_elemento *prossimo;
};

typedef struct s_elemento elemento;

void controlloAllocazione(elemento *p);
elemento *funzioneInput(elemento *primo);
elemento *funzioneOutput(elemento *primo);