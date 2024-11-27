#include <unistd.h>
#include <stdio.h>

int main(){
    int a = 20;
    int x = 1;
    while(x==1){
        int pid=fork();
        if(pid==0){
            printf("Soy el proceso hijo a = %d\n",a);
        }
    }
     printf("Soy el proceso hijo a = %d\n",a);
}