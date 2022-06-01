#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funcoes.h"

Lista* inserirMaquina(Lista* listaJ, int job, int op, int maq, int temp) {

    Lista* novo = (Lista*)malloc(sizeof(Lista));

    if (novo != NULL) {

        novo->job = job;
        novo->operacao = op;   
        novo->maquina = maq;
        novo->tempo = temp;

        novo->seguinte = listaJ;

        return novo;
    }
    else return listaJ;
}

int alterarJob(Lista* listaJ, int job, int jobNovo) {

    while (listaJ != NULL) {

        if (job == listaJ->job) {

            listaJ->job = jobNovo;
        }

        listaJ = listaJ->seguinte;
    }

    return 0;
}

int alterarOperacao(Lista* listaJ, int job, int op, int opNova) {

    while (listaJ != NULL) {

        if (job == listaJ->job && op == listaJ->operacao) {

            listaJ->operacao = opNova;
        }

        listaJ = listaJ->seguinte;
    }

    return 0;
}

int alterarMaquina(Lista* listaJ, int job, int op, int maq, int maqNova) {

    while (listaJ != NULL) {

        if (job == listaJ->job && op == listaJ->operacao && maq == listaJ->maquina) {

            listaJ->maquina = maqNova;
        }

        listaJ = listaJ->seguinte;
    }

    return 0;
}

int alterarTempo(Lista* listaJ, int job, int op, int maq, int temp) {

    while (listaJ != NULL) {

        if (job == listaJ->job && op == listaJ->operacao && maq == listaJ->maquina) {

            listaJ->tempo = temp;
        }

        listaJ = listaJ->seguinte;

    }

    return 0;
}

Lista* removerJob(Lista* listaJ, int job) {

    Lista* aux = listaJ;

    while (aux != NULL) {

        if (aux->job == job) {

            listaJ = removerOperacao(&listaJ, job, aux->maquina);
            aux = listaJ;
        }
        else
            aux = aux->seguinte;
    }

    return listaJ;
}

Lista* removerOperacao(Lista* ListaJ, int job, int op) {

    Lista* aux = ListaJ;

    while (aux != NULL) {

        if (aux->job == job && aux->operacao == op) {

            ListaJ = removerMaquina(&ListaJ, job, op, aux->operacao);

            aux = ListaJ;
            aux = aux->seguinte;
        }
        else
            aux = aux->seguinte;
    }

    return ListaJ;
}

Lista* removerMaquina(struct Lista** aux, int job, int op, int maq) {

    struct Lista* atual = *aux, * anterior;

    if (atual->job == job && atual->operacao == op && atual->maquina == maq) {

        *aux = atual->seguinte;
        free(atual);

        return *aux;
    }

    while (atual->seguinte != NULL && atual->job != job && atual->operacao != op && atual->maquina != maq) {

        anterior = atual;
        atual = atual->seguinte;

        if (atual->job == job && atual->operacao == op && atual->maquina == maq)

            break;
    }

    if (atual == NULL)

        return *aux;

    anterior->seguinte = atual->seguinte;

    free(atual);
    return *aux;
}
Lista* lerFicheiro(Lista* listaJ) {

    int i = 0;
    int job, operacao, maquina, tempo;
    char conteudo[200];
    char texto[200];

    FILE* ficheiro;

    ficheiro = fopen("J.txt", "r"); /

    if (ficheiro != NULL) {

        while (fgets(conteudo, 200, ficheiro) != NULL) {

            sscanf(conteudo, "%s%d\n", &texto, &job);

            fgets(conteudo, 200, ficheiro);
            sscanf(conteudo, "%s%d\n", &texto, &operacao); 

            fgets(conteudo, 200, ficheiro);
            sscanf(conteudo, "%s%d\n", &texto, &maquina);

            fgets(conteudo, 200, ficheiro);
            sscanf(conteudo, "%s%d\n", &texto, &tempo);

            listaJ = inserirMaquina(listaJ, job, operacao, maquina, tempo); 

            i++;
        }
        fclose(ficheiro);

    }

    return listaJ;
}

void escreverFicheiro(Lista* listaJ) {

    FILE* ficheiro; //descritor do ficheiro

    ficheiro = fopen("J.txt", "w"); 

    while (listaJ != NULL) {

        fprintf(ficheiro, "Job: ");
        fprintf(ficheiro, "%d\n", listaJ->job);
        fprintf(ficheiro, "Operacao: ");
        fprintf(ficheiro, "%d\n", listaJ->operacao);
        fprintf(ficheiro, "Maquina: ");
        fprintf(ficheiro, "%d\n", listaJ->maquina);
        fprintf(ficheiro, "Tempo: ");
        fprintf(ficheiro, "%d\n", listaJ->tempo);

        listaJ = listaJ->seguinte; 
    }

    fclose(ficheiro);
}

void listarJob(Lista* listaJ) {

    while (listaJ != NULL) {

        printf("     Job: %d\n", listaJ->job);
        printf("Operacao: %d\n", listaJ->operacao);
        printf(" Maquina: %d\n", listaJ->maquina);
        printf("   Tempo: %d\n", listaJ->tempo);
        printf("\n");
        listaJ = listaJ->seguinte; 
    }

}

int verificarJob(Lista* listaJ, int job) {

    while (listaJ != NULL) {

        if (job == listaJ->job)

            return 1;

        listaJ = listaJ->seguinte;
    }
    return 0;
}

int verificarOperacao(Lista* listaJ, int job, int op) {

    while (listaJ != NULL) {

        if (job == listaJ->job && op == listaJ->operacao) 

            return (1); // encontrou

        listaJ = listaJ->seguinte;
    }

    return(0);  // nao encontrou a maquina
}

int verificarMaquina(Lista* listaJ, int job, int op, int maq) {

    while (listaJ != NULL) {

        if (job == listaJ->job && op == listaJ->operacao && maq == listaJ->maquina) 

            return (1); // encontrou

        listaJ = listaJ->seguinte;
    }

    return(0);  
}

int verMaior(Lista* listaJ) {

    int op = 0, maior = 0, soma = 0;

    while (listaJ != NULL) {

        if (op == listaJ->operacao) {
            if (maior < listaJ->tempo)
                maior = listaJ->tempo; 
        }

        else { 
            soma = soma + maior;
            maior = 0;

            op = listaJ->operacao;
            maior = listaJ->tempo; 
        }

        listaJ = listaJ->seguinte;
    }
    soma = soma + maior;

    return (soma);
}

int verMenor(Lista* listaJ) {

    int op = 0, menor = 0, soma = 0;

    while (listaJ != NULL) {

        if (op == listaJ->operacao) {
            menor = 1000;
            if (menor > listaJ->tempo)
                menor = listaJ->tempo; 
        }

        else { 
            soma = soma + menor;
            menor = 0;

            op = listaJ->operacao;
            menor = listaJ->tempo;
        }

        listaJ = listaJ->seguinte;
    }

    return (soma);
}

int verMedia(Lista* listaJ) {

    int op = 0, somaOp = 0, cont = 0;
    float media = 0;

    while (listaJ != NULL) {

        if (op == listaJ->operacao) {

            somaOp = somaOp + listaJ->tempo; 
        }

        else { 

            op = listaJ->operacao;
            somaOp = somaOp + listaJ->tempo;
        }

        cont++;
        listaJ = listaJ->seguinte;
    }

    media = somaOp / cont;
    printf("A media de tempo e: %.1f\n", media);

    return (0);
}
