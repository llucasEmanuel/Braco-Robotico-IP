#include "bracoLib.h"

typedef struct {
    char nome[200];
    int numero;
} Candidato;

int main(int argc, char* argv[])
{

    //variavei para handler das juntas
    int handler = 0;

    //conecta com o coppelia
    int clientID = simxStart((simxChar*)"127.0.0.1", 19999, true, true, 2000, 5);

    extApi_sleepMs(500);

    //verifica conexao com simulador
    if (clientID == -1) {
        printf("Erro conectando ao Coppelia!\n");
        return 0;
    }
    else {
        printf("Conectado ao Coppelia!\n");
    }

    //configura o handler da primeira junta
    simxChar handlerName[150] = "/base_link_respondable[0]/joint_1";

    FILE* file = fopen("votos.txt", "r");
    if (file == NULL) {//checa a alocacao do ponteiro file
        printf("Nao foi possivel abrir votos.txt\n");
        exit(1);
    }
    Candidato candidato;
    while (!feof(file)) {
        fscanf(file, " %149[^,], %d\n", candidato.nome, &candidato.numero);
        printf("%s - %d\n", candidato.nome, candidato.numero);
        int ultimoDigito = candidato.numero % 10;
        int primeiroDigito = candidato.numero;
        while (primeiroDigito >= 10) {//divide por 10 ate chegar no primeiro numero
            primeiroDigito = primeiroDigito / 10;
        }
        extApi_sleepMs(2000);
        resetarPosicao(clientID, &handler);
        strcpy(handlerName, "/base_link_respondable[0]/joint_1");
        switch (primeiroDigito) {// n pode ser 0
        case 1:
            apertar1(handlerName, clientID, &handler);
            break;
        case 2:
            apertar2(handlerName, clientID, &handler);
            break;
        case 3:
            apertar3(handlerName, clientID, &handler);
            break;
        case 4:
            apertar4(handlerName, clientID, &handler);
            break;
        case 5:
            apertar5(handlerName, clientID, &handler);
            break;
        case 6:
            apertar6(handlerName, clientID, &handler);
            break;
        case 7:
            apertar7(handlerName, clientID, &handler);
            break;
        case 8:
            apertar8(handlerName, clientID, &handler);
            break;
        case 9:
            apertar9(handlerName, clientID, &handler);
            break;
        }
        extApi_sleepMs(2000);
        resetarPosicao(clientID, &handler);
        strcpy(handlerName, "/base_link_respondable[0]/joint_1");
        switch (ultimoDigito) {
        case 0:
            apertar0(handlerName, clientID, &handler);
            break;
        case 1:
            apertar1(handlerName, clientID, &handler);
            break;
        case 2:
            apertar2(handlerName, clientID, &handler);
            break;
        case 3:
            apertar3(handlerName, clientID, &handler);
            break;
        case 4:
            apertar4(handlerName, clientID, &handler);
            break;
        case 5:
            apertar5(handlerName, clientID, &handler);
            break;
        case 6:
            apertar6(handlerName, clientID, &handler);
            break;
        case 7:
            apertar7(handlerName, clientID, &handler);
            break;
        case 8:
            apertar8(handlerName, clientID, &handler);
            break;
        case 9:
            apertar9(handlerName, clientID, &handler);
            break;
        }
        extApi_sleepMs(2000);
        resetarPosicao(clientID, &handler);
        strcpy(handlerName, "/base_link_respondable[0]/joint_1");
        apertarCONFIRMA(handlerName, clientID, &handler);
    }
    fclose(file);

    // Fecha a conexao 
    simxFinish(clientID);

    return(0);
}
