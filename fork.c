#include <stdio.h>
#include <unistd.h>

int main(){
    printf("\n\tPrueba\n");

    int pid = fork(); 

    if ( pid == 0){
        printf("Soy el proceso hijo\n");
        sleep(5);
        printf("Ya terminé\n");
    }else{
        printf("Soy el proceso padre\n");
        sleep(5);
        printf("Ya terminé padre\n");
    }
    return 0;
}