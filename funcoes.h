#include <stdio.h>

typedef struct Lista {  // estrura de dados para a constituicao de um job
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
int verificarOperacao(Lista* listaJ, int job, int op); // ver se a operacao existe
int verificarMaquina(Lista* listaJ, int job, int op, int maq); // ver se a maquina existe
int verMaior(Lista* listaJ);
int verMenor(Lista* listaJ);
int verMedia(Lista* listaJ);
void escreverFicheiro(Lista* listaJ); // escrever os dados do ficheiro
void listarJob(Lista* listaJ); // listar os elementos da lista
Lista* inserirMaquina(Lista* listaJ, int job, int op, int maq, int temp); // inserir os dados no meio
Lista* removerJob(Lista* listaJ, int job);
Lista* removerOperacao(Lista* listaJ, int job, int op);
Lista* removerMaquina(struct Lista** aux, int job, int op, int maq);// remover um objeto passando por parametro a sua operacao e a maquina
Lista* lerFicheiro(Lista* listaJ); // ler os dados no ficheiro