#include <string.h>
#include <stdio.h>
#include "braco_robotico.h"

void apertarCONFIRMA(char handlerName[], int clientID, int* handler) {

    simxGetObjectHandle(clientID, handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(1000);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.4024), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_2"); //faz a garra se curvar 
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.8580), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_3");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.0988), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_4");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.0685), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_5");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(10);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.265), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_6");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(500);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.0122), (simxInt)simx_opmode_oneshot_wait);

    strcpy(handlerName, "/base_link_respondable[0]/joint_1/joint_2");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    //simxSetJointTargetPosition(clientID, handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(100);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.9193), (simxInt)simx_opmode_oneshot_wait);
}

void apertar0(char handlerName[], int clientID, int* handler) {

    simxGetObjectHandle(clientID, handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(1000);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.2724), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_2"); //faz a garra se curvar 
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.8555), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_3");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.1510), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_4");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.0685), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_5");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(10);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.43), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_6");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(500);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.0122), (simxInt)simx_opmode_oneshot_wait);

    strcpy(handlerName, "/base_link_respondable[0]/joint_1/joint_2");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    //simxSetJointTargetPosition(clientID, handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(100);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.8893), (simxInt)simx_opmode_oneshot_wait);
}

void apertar1(simxChar handlerName[], int clientID, int* handler) {
    //junta 1
    simxGetObjectHandle(clientID, handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.066) * PI, (simxInt)simx_opmode_oneshot_wait);
    //junta 2
    strcat(handlerName, "/joint_2"); //faz a garra se curvar 
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(2000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.215) * PI, (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_3");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-0.1, (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_4");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(200);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait);

    //junta 5
    strcat(handlerName, "/joint_5");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0.2 * PI, (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_6");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(100);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.0122), (simxInt)simx_opmode_oneshot_wait);

    strcpy(handlerName, "/base_link_respondable[0]/joint_1/joint_2");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    //simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    //extApi_sleepMs(2000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.284) * PI, (simxInt)simx_opmode_oneshot_wait);
    //extApi_sleepMs(2000);
}

void apertar2(char handlerName[], int clientID, int* handler) {

    simxGetObjectHandle(clientID, handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(1000);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.2604), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_2"); //faz a garra se curvar 
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.8085), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_3");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.2240), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_4");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.0735), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_5");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.155), (simxInt)simx_opmode_oneshot_wait);


    strcat(handlerName, "/joint_6");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(100);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.0122), (simxInt)simx_opmode_oneshot_wait);

    strcpy(handlerName, "/base_link_respondable[0]/joint_1/joint_2"); 
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    //simxSetJointTargetPosition(clientID, handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(100);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.8689), (simxInt)simx_opmode_oneshot_wait);
}

void apertar3(char handlerName[], int clientID, int* handler) {

    simxGetObjectHandle(clientID, handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(1000);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.325), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_2"); //faz a garra se curvar 
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.815), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_3");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.246), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_4");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.0735), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_5");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.125), (simxInt)simx_opmode_oneshot_wait);


    strcat(handlerName, "/joint_6");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(100);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.0122), (simxInt)simx_opmode_oneshot_wait);

    strcpy(handlerName, "/base_link_respondable[0]/joint_1/joint_2");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    //simxSetJointTargetPosition(clientID, handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(100);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.9), (simxInt)simx_opmode_oneshot_wait);
}

void apertar4(simxChar handlerName[], int clientID, int* handler) {
    //inicia com o valor da junta 1
    simxGetObjectHandle(clientID, handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.2016), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_2");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.8066), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_3");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.0078), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_4");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(500);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.0024), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_5");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(500); 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.0280), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_6");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(500);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.0007), (simxInt)simx_opmode_oneshot_wait);
}

void apertar5(char handlerName[], int clientID, int* handler) {

    simxGetObjectHandle(clientID, handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(1000);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.2724), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_2"); //faz a garra se curvar 
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.8274), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_3");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.2240), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_4");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.0735), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_5");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(500);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.32), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_6");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(100);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.0122), (simxInt)simx_opmode_oneshot_wait);

    strcpy(handlerName, "/base_link_respondable[0]/joint_1/joint_2");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    //simxSetJointTargetPosition(clientID, handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(100);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.8779), (simxInt)simx_opmode_oneshot_wait);
}

void apertar6(char handlerName[], int clientID, int* handler) {

    simxGetObjectHandle(clientID, handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(1000);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.3324), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_2"); //faz a garra se curvar 
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.7780), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_3");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.1670), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_4");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.0685), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_5");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(500);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.105), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_6");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(50);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.0132), (simxInt)simx_opmode_oneshot_wait);

    strcpy(handlerName, "/base_link_respondable[0]/joint_1/joint_2"); 
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    //simxSetJointTargetPosition(clientID, handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(100);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.8845), (simxInt)simx_opmode_oneshot_wait);
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

void apertar8(char handlerName[], int clientID, int* handler) {

    simxGetObjectHandle(clientID, handlerName, handler, (simxInt)simx_opmode_oneshot_wait);

    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-0.092 * PI, (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_2");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-0.265 * PI, (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_3");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-0.0135 * PI, (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_4");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    
    strcat(handlerName, "/joint_5");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0.023 * PI, (simxInt)simx_opmode_oneshot_wait);
}

void apertar9(simxChar handlerName[], int clientID, int* handler) {
  
    simxGetObjectHandle(clientID, handlerName, handler, (simxInt)simx_opmode_oneshot_wait);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait);
    extApi_sleepMs(2000);
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.3424), (simxInt)simx_opmode_oneshot_wait);
 
    strcat(handlerName, "/joint_2"); //faz a garra se curvar 
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(2000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.8080), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_3");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.127), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_4");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(200);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.0685), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_5");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(1000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.195), (simxInt)simx_opmode_oneshot_wait);

    strcat(handlerName, "/joint_6");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(100);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(0.0132), (simxInt)simx_opmode_oneshot_wait);

    strcpy(handlerName, "/base_link_respondable[0]/joint_1/joint_2");
    simxGetObjectHandle(clientID, (simxChar*)handlerName, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    //simxSetJointTargetPosition(clientID, *handler, (simxFloat)0, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    //extApi_sleepMs(2000);//simxfloat é a posição, 0 posição inicla 
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)(-0.8843), (simxInt)simx_opmode_oneshot_wait);
    //extApi_sleepMs(2000);
}

void resetarPosicao(int clientID, int* handler) {
    char junta2[150] = "/base_link_respondable[0]/joint_1/joint_2";
    simxGetObjectHandle(clientID, (simxChar*)junta2, handler, (simxInt)simx_opmode_oneshot_wait); //atualizar a junta q ta mechendo
    simxSetJointTargetPosition(clientID, *handler, (simxFloat)-0.5, (simxInt)simx_opmode_oneshot_wait); //setar a posição da junta
    extApi_sleepMs(2000);
}
