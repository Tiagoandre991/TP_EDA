#include <stdio.h>

typedef struct Lista {  
    int job;
    int operacao;
    int maquina;
    int tempo;
    struct Lista* seguinte;
}Lista;

int menu();
int alterarJob(Lista* listaJ, int job, int jobNovo);
int alterarOperacao(Lista* listaJ, int job, int op, int opNova);
int alterarMaquina(Lista* listaJ, int job, int op, int maq, int maqNova);
int alterarTempo(Lista* listaJ, int job, int op, int maq, int temp);
int verificarJob(Lista* listaJ, int job);
int verificarOperacao(Lista* listaJ, int job, int op); 
int verificarMaquina(Lista* listaJ, int job, int op, int maq); 
int verMaior(Lista* listaJ);
int verMenor(Lista* listaJ);
int verMedia(Lista* listaJ);
void escreverFicheiro(Lista* listaJ); 
void listarJob(Lista* listaJ); 
Lista* inserirMaquina(Lista* listaJ, int job, int op, int maq, int temp); 
Lista* removerJob(Lista* listaJ, int job);
Lista* removerOperacao(Lista* listaJ, int job, int op);
Lista* removerMaquina(struct Lista** aux, int job, int op, int maq);
Lista* lerFicheiro(Lista* listaJ); 
