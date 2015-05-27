//Definizione RECORD
struct s_elemento {
    int valore;
    struct s_elemento *prossimo;
};

typedef struct s_elemento elemento;

void controlloAllocazione(elemento *p);
elemento *funzioneInput(elemento *primo);
void funzioneOutput(elemento *primo);
void svuotaLista(elemento *primo);