#include <stdio.h>

int main(int argc,char **argv){ //argc es el número de elementos
    for(int i=0;i<argc;i=i+1){
         printf("Hola %s\n",argv[i]);
    }
   
}