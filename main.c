#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

int menu() {
    int opcao;
    do {
        printf("\n");
        printf("|------------------------------|\n");
        printf("|             MENU             |\n");
        printf("|1-Inserir job                 |\n");
        printf("|2-Inserir operacao            |\n");
        printf("|3-Inserir maquina             |\n");
        printf("|4-Remover job                 |\n");
        printf("|5-Remover operacao            |\n");
        printf("|6-Remover maquina             |\n");
        printf("|7-Alterar job                 |\n");
        printf("|8-Alterar operacao            |\n");
        printf("|9-Alterar maquina             |\n");
        printf("|10-Alterar tempo da maquina   |\n");
        printf("|11-Tempo maior                |\n");
        printf("|12-Tempo menor                |\n");
        printf("|13-Media                      |\n");
        printf("|14-Listar                     |\n");
        printf("|0-Sair                        |\n");
        printf("|------------------------------|\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        printf("\n");
    } while ((opcao < 0) || (opcao > 14));

    return(opcao);
}

int main(int argc, char* argv[])
{
    Lista* listaJ = NULL;
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);
    listaJ = inserirMaquina(listaJ, 1, 1, 1, 4);

    int opcao;
    int job, jobNovo, operacao, operacaoNova, maquina, maquinaNova, tempo;
    int verJob, verOperacao, verMaquina, tempoMaior, tempoMenor;

    listaJ = lerFicheiro(listaJ);


    do {
        opcao = menu();
        switch (opcao) {

        case 1:
            printf("Novo job: ");
            scanf("%d", &job);

            verJob = verificarJob(listaJ, job);

            while (verJob == 1) {

                printf("Já existe!\n");

                printf("novo job: ");
                scanf("%d", &job);

                verJob = verificarJob(listaJ, job);
            }

            printf("Operacao: ");
            scanf("%d", &operacao);

            verOperacao = verificarOperacao(listaJ, job, operacao);

            while (verOperacao == 1) {

                printf("Ja existe!\n");

                printf("Operacao: ");
                scanf("%d", &operacao);

                verOperacao = verificarOperacao(listaJ, job, operacao);
            }

            printf("Maquina: ");
            scanf("%d", &maquina);

            printf("tempo: ");
            scanf("%d", &tempo);

            listaJ = inserirMaquina(listaJ, job, operacao, maquina, tempo);

            escreverFicheiro(listaJ);

            break;

        case 2:

            printf(" qual job: ");
            scanf("%d", &job);

            verJob = verificarJob(listaJ, job);

            while (verJob == 0) {
                printf("Nao existe!\n");

                printf("Qual job: ");
                scanf("%d", &job);

                verJob = verificarJob(listaJ, job);
            }

            printf("Operacao: ");
            scanf("%d", &operacao);

            verOperacao = verificarOperacao(listaJ, job, operacao);

            while (verOperacao == 1) {
                printf("Ja existe!\n");

                printf("Operacao: ");
                scanf("%d", &operacao);

                verOperacao = verificarOperacao(listaJ, job, operacao);
            }

            printf("Maquina: ");
            scanf("%d", &maquina);

            printf("Tempo: ");
            scanf("%d", &tempo);

            listaJ = inserirMaquina(listaJ, job, operacao, maquina, tempo);

            escreverFicheiro(listaJ);

            break;

        case 3:

            printf("Qual job: ");
            scanf("%d", &job);

            verJob = verificarJob(listaJ, job);

            while (verJob == 0) {
                printf("Nao existe!\n");

                printf("Qual job: ");
                scanf("%d", &job);

                verJob = verificarJob(listaJ, job);
            }

            printf("Operacao: ");
            scanf("%d", &operacao);

            verOperacao = verificarOperacao(listaJ, job, operacao);

            while (verOperacao == 0) {
                printf("Nao existe!\n");

                printf("Operacao: ");
                scanf("%d", &operacao);

                verOperacao = verificarOperacao(listaJ, job, operacao);
            }

            printf("maquina: ");
            scanf("%d", &maquina);

            verMaquina = verificarMaquina(listaJ, job, operacao, maquina);

            while (verMaquina == 1) {
                printf("Ja existe!\n");

                printf("Maquina: ");
                scanf("%d", &maquina);

                verMaquina = verificarMaquina(listaJ, job, operacao, maquina);
            }

            printf("Tempo: ");
            scanf("%d", &tempo);

            listaJ = inserirMaquina(listaJ, job, operacao, maquina, tempo);

            escreverFicheiro(listaJ);

            break;



        case 4:

            printf("Qual job: ");
            scanf("%d", &job);

            verJob = verificarJob(listaJ, job);

            while (verJob == 0) {

                printf("Nao existe!\n");

                printf("Qual job: ");
                scanf("%d", &job);

                verJob = verificarJob(listaJ, job);
            }

            listaJ = removerJob(listaJ, job);

            escreverFicheiro(listaJ);

            break;

        case 5:

            printf("Qual job: ");
            scanf("%d", &job);

            verJob = verificarJob(listaJ, job);

            while (verJob == 0) {

                printf("Nao existe!\n");

                printf("Qual job: ");
                scanf("%d", &job);

                verJob = verificarJob(listaJ, job);
            }

            printf("Operacao: ");
            scanf("%d", &operacao);

            verOperacao = verificarOperacao(listaJ, job, operacao);

            while (verOperacao == 0) {
                printf("Nao existe!\n");

                printf("Operacao: ");
                scanf("%d", &operacao);

                verOperacao = verificarOperacao(listaJ, job, operacao);
            }

            listaJ = removerOperacao(listaJ, job, operacao);

            escreverFicheiro(listaJ);
            break;

        case 6:

            printf("Qual job: ");
            scanf("%d", &job);

            verJob = verificarJob(listaJ, job);

            while (verJob == 0) {

                printf("Nao existe!\n");

                printf("Qual job: ");
                scanf("%d", &job);

                verJob = verificarJob(listaJ, job);
            }

            printf("Operacao: ");
            scanf("%d", &operacao);

            verOperacao = verificarOperacao(listaJ, job, operacao);

            while (verOperacao == 0) {
                printf("Nao existe!\n");

                printf("Operacao: ");
                scanf("%d", &operacao);

                verOperacao = verificarOperacao(listaJ, job, operacao);
            }

            printf("Maquina: ");
            scanf("%d", &maquina);

            verMaquina = verificarMaquina(listaJ, job, operacao, maquina);

            while (verMaquina == 0) {
                printf("Nao existe!\n");

                printf("Maquina: ");
                scanf("%d", &maquina);

                verMaquina = verificarMaquina(listaJ, job, operacao, maquina);
            }


            listaJ = removerMaquina(&listaJ, job, operacao, maquina);

            escreverFicheiro(listaJ);
            break;


        case 7:

            printf("Qual job: ");
            scanf("%d", &job);

            verJob = verificarJob(listaJ, job);

            while (verJob == 0) {

                printf("Nao existe!\n");

                printf("qual job: ");
                scanf("%d", &job);

                verJob = verificarJob(listaJ, job);
            }

            printf("Job novo: ");
            scanf("%d", &jobNovo);

            verJob = verificarJob(listaJ, jobNovo);

            while (verJob == 1) {

                printf("Ja existe!\n");

                printf("Job novo: ");
                scanf("%d", &jobNovo);

                verJob = verificarJob(listaJ, jobNovo);
            }

            alterarJob(listaJ, job, jobNovo);

            escreverFicheiro(listaJ);

            break;

        case 8:

            printf("qual job: ");
            scanf("%d", &job);

            verJob = verificarJob(listaJ, job);

            while (verJob == 0) {

                printf("Nao existe!\n");

                printf("Qual job: ");
                scanf("%d", &job);

                verJob = verificarJob(listaJ, job);
            }

            printf("Operacao: ");
            scanf("%d", &operacao);

            verOperacao = verificarOperacao(listaJ, job, operacao);

            while (verOperacao == 0) {

                printf("Nao existe!\n");

                printf("Operacao: ");
                scanf("%d", &operacao);

                verOperacao = verificarOperacao(listaJ, job, operacao);
            }

            printf("Nova operacao: ");
            scanf("%d", &operacaoNova);

            verOperacao = verificarOperacao(listaJ, job, operacaoNova);

            while (verOperacao == 1) {

                printf("Ja existe!\n");

                printf("Nova operacao: ");
                scanf("%d", &operacaoNova);

                verOperacao = verificarOperacao(listaJ, job, operacaoNova);

            }

            alterarOperacao(listaJ, job, operacao, operacaoNova);
            escreverFicheiro(listaJ);

            break;

        case 9:

            printf("Qual job: ");
            scanf("%d", &job);

            verJob = verificarJob(listaJ, job);

            while (verJob == 0) {

                printf("Nao existe!\n");

                printf("Job: ");
                scanf("%d", &job);

                verJob = verificarJob(listaJ, job);
            }

            printf("Operacao: ");
            scanf("%d", &operacao);

            verOperacao = verificarOperacao(listaJ, job, operacao);

            while (verOperacao == 0) {

                printf("Nao existe!\n");

                printf("Operacao: ");
                scanf("%d", &operacao);

                verOperacao = verificarOperacao(listaJ, job, operacao);
            }

            printf("Maquina: ");
            scanf("%d", &maquina);

            verMaquina = verificarMaquina(listaJ, job, operacao, maquina);

            while (verMaquina == 0) {
                printf("Nao existe!\n");

                printf("Maquina: ");
                scanf("%d", &maquina);

                verMaquina = verificarMaquina(listaJ, job, operacao, maquina);
            }

            printf("Nova maquina: ");
            scanf("%d", &maquinaNova);

            verMaquina = verificarMaquina(listaJ, job, operacao, maquinaNova);

            while (verMaquina == 1) {
                printf("Ja existe!\n");

                printf("Nova maquina: ");
                scanf("%d", &maquinaNova);

                verMaquina = verificarMaquina(listaJ, job, operacao, maquinaNova);
            }

            alterarMaquina(listaJ, job, operacao, maquina, maquinaNova);

            escreverFicheiro(listaJ);

            break;

        case 10:

            printf("Qual job: ");
            scanf("%d", &operacao);

            verJob = verificarJob(listaJ, job);

            while (verJob == 0) {

                printf("Nao existe!\n");

                printf("Qual job: ");
                scanf("%d", &job);

                verJob = verificarJob(listaJ, job);
            }

            printf("Operacao: ");
            scanf("%d", &operacao);

            verOperacao = verificarOperacao(listaJ, job, operacao);

            while (verOperacao == 0) {

                printf("Nao existe!\n");

                printf("Operacao: ");
                scanf("%d", &operacao);

                verOperacao = verificarOperacao(listaJ, job, operacao);
            }

            printf("Maquina: ");
            scanf("%d", &maquina);

            verMaquina = verificarMaquina(listaJ, job, operacao, maquina);

            while (verMaquina == 0) {
                printf("Nao existe!\n");

                printf("Maquina: ");
                scanf("%d", &maquina);

                verMaquina = verificarMaquina(listaJ, job, operacao, maquina);
            }

            printf("Novo tempo: ");
            scanf("%d", &tempo);

            alterarTempo(listaJ, job, operacao, maquina, tempo);

            escreverFicheiro(listaJ);

            break;

        case 11:

            tempoMaior = verMaior(listaJ);

            printf("Quantidade maxima de tempo e: %dUT\n", tempoMaior);

            break;

        case 12:

            tempoMenor = verMenor(listaJ);

            printf("quantidade minima de tempo e: %dUT\n", tempoMenor);

            break;

        case 13:

            verMedia(listaJ);

            break;


        case 14:
            listarJob(listaJ);
            break;
        }

    } while (opcao != 0);

    return(0);
}