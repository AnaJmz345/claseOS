#include <stdio.h>
#include <pthread.h>

void * printHello(void *arg){ //aqui se crean los nuevos hilos
    int hid = *((int *)arg);
    printf("hola desde el hilo %d\n",hid);
    pthread_exit(NULL); //espera a que se termine de ejecutar el hilo
}
int main(){ //este es el hilo princiapl que será encargado de crear nuevos hilos
    int NUM_THREADS=20;
    pthread_t threadStatus[NUM_THREADS];//guarda el estado del hilo, es nuestra responsabilidad guardar esa historia
    int hids[NUM_THREADS];
    for(int i=0;i<NUM_THREADS;i++){
        hids[i]=i;
        pthread_create(&threadStatus[i],NULL,printHello,(void*)&hids[i]); //en la primera variable se guarda el status del hilo a crear, lo 2do es su valor, el  tercero es la función y lo 4to es el parámetro de la funión
    }

    pthread_exit(NULL); //espera que todos los hilos tengan tiempo de ejecutarse y este es como tu return 0
   
}