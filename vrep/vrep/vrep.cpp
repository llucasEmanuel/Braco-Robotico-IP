#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern "C" {
#include "extApi.h"
}

void apertar7(char handlerName[], int clientID, int* handler) {

    simxGetObjectHandle(clientID, handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(1000);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.2024), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_2"); //faz a garra se curvar 
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.6755), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_3");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.1405), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_4");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(200);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.0685), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_5");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.379), (simxInt)simx_opmode_oneshot_wait);


    strcat(handlerName, "/joint_6");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(500);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.0122), (simxInt)simx_opmode_oneshot_wait);

    strcpy(handlerName, "/base_link_respondable[0]/joint_1/joint_2");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    //simxSetJointTargetPosition(clientID, handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(100);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.8543), (simxInt)simx_opmode_oneshot_wait);
}

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

    if (1) {
        apertar7(handlerName, clientID, &handler);
        return 0;
    }
    simxGetObjectHandle(clientID, handlerName, &handler, (simxInt)simx_opmode_oneshot_wait);

    //for (int i = 1; i <= 6; i++) {

    printf("Testando junta 1\n");// gira para os lados

    //move a junta ate seu ponto maximo

    simxSetJointTargetPosition(clientID, handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(1000);
    simxSetJointTargetPosition(clientID, handler, (simxFloat)(-0.2024), (simxInt)simx_opmode_oneshot_wait);

    //passa para a proxima junta
    //strcpy(handlerName, "/base_link_respondable[0]/joint_1/joint_2");
    strcat(handlerName, "/joint_2"); //faz a garra se curvar 
    printf("Testando junta 2\n");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, &handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, handler, (simxFloat)(-0.6755), (simxInt)simx_opmode_oneshot_wait);

    //passa para a proxima junta
    strcat(handlerName, "/joint_3");
    printf("Testando junta 3\n");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, &handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, handler, (simxFloat)(0.1405), (simxInt)simx_opmode_oneshot_wait);


    //passa para a proxima junta
    strcat(handlerName, "/joint_4");
    printf("Testando junta 4\n");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, &handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(200);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, handler, (simxFloat)(-0.0685), (simxInt)simx_opmode_oneshot_wait);


    //passa para a proxima junta
    strcat(handlerName, "/joint_5");
    printf("Testando junta 5\n");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, &handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    (clientID, handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(500);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, handler, (simxFloat)(-0.379), (simxInt)simx_opmode_oneshot_wait);


    //passa para a proxima junta
    strcat(handlerName, "/joint_6");
    printf("Testando junta 6\n");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, &handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(500);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, handler, (simxFloat)(0.0122), (simxInt)simx_opmode_oneshot_wait);

    // }
    strcpy(handlerName, "/base_link_respondable[0]/joint_1/joint_2");
    //strcat(handlerName, "/joint_2"); //faz a garra se curvar 
    printf("Testando junta 2\n");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, &handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    //simxSetJointTargetPosition(clientID, handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(100);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, handler, (simxFloat)(-0.8543), (simxInt)simx_opmode_oneshot_wait);

    // Fecha a conexao 
    simxFinish(clientID);

    return(0);
}